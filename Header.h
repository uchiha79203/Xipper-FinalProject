#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <map>
#include <queue>
#include <bitset>
#include <chrono>
#include <cstdint>
using namespace System;

// Rotate right (circular right shift) function
#define ROTR(x, n) ((x >> n) | (x << (32 - n)))

// Sigma0 and Sigma1 functions
#define SIGMA0(x) (ROTR(x, 2) ^ ROTR(x, 13) ^ ROTR(x, 22))
#define SIGMA1(x) (ROTR(x, 6) ^ ROTR(x, 11) ^ ROTR(x, 25))

// Ch and Maj functions
#define CH(x, y, z) ((x & y) ^ (~x & z))
#define MAJ(x, y, z) ((x & y) ^ (x & z) ^ (y & z))

// Big Sigma0 and Big Sigma1 functions
#define BSIGMA0(x) (ROTR(x, 7) ^ ROTR(x, 18) ^ (x >> 3))
#define BSIGMA1(x) (ROTR(x, 17) ^ ROTR(x, 19) ^ (x >> 10))

// SHA-256 Constants
const uint32_t K[64] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5,
    0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
    0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc,
    0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7,
    0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
    0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
    0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
    0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
    0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5,
    0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
    0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
};

// Initial hash values
const uint32_t initialHash[8] = {
    0x6a09e667, 0xbb67ae85, 0x3c6ef372, 0xa54ff53a,
    0x510e527f, 0x9b05688c, 0x1f83d9ab, 0x5be0cd19
};

// SHA-256 algorithm function
std::string sha256(const std::string& message) {
    uint32_t hash[8];
    uint32_t w[64];

    // Initialize hash values
    for (int i = 0; i < 8; ++i) {
        hash[i] = initialHash[i];
    }

    // Pre-processing: padding the message
    // (append a single '1' bit, then append '0' bits until message length is 448 mod 512)
    // Then append original message length as a 64-bit big-endian integer
    // Process each block (512 bits)
    // Break message into 512-bit chunks
    for (size_t chunk = 0; chunk < message.size() / 64 + 1; ++chunk) {
        // Break chunk into sixteen 32-bit big-endian words w[0..15]
        for (int i = 0; i < 16; ++i) {
            w[i] = 0;
            for (int j = 0; j < 4; ++j) {
                size_t index = chunk * 64 + i * 4 + j;
                if (index < message.size()) {
                    w[i] |= static_cast<uint32_t>(static_cast<uint8_t>(message[index])) << (24 - j * 8);
                }
            }
        }

        // Extend the sixteen 32-bit words into sixty-four 32-bit words
        for (int i = 16; i < 64; ++i) {
            w[i] = w[i - 16] + BSIGMA0(w[i - 15]) + w[i - 7] + BSIGMA1(w[i - 2]);
        }

        // Initialize working variables to current hash value
        uint32_t a = hash[0];
        uint32_t b = hash[1];
        uint32_t c = hash[2];
        uint32_t d = hash[3];
        uint32_t e = hash[4];
        uint32_t f = hash[5];
        uint32_t g = hash[6];
        uint32_t h = hash[7];

        // Compression function main loop
        for (int i = 0; i < 64; ++i) {
            uint32_t temp1 = h + SIGMA1(e) + CH(e, f, g) + K[i] + w[i];
            uint32_t temp2 = SIGMA0(a) + MAJ(a, b, c);

            h = g;
            g = f;
            f = e;
            e = d + temp1;
            d = c;
            c = b;
            b = a;
            a = temp1 + temp2;
        }

        // Add the compressed chunk to the current hash value
        hash[0] += a;
        hash[1] += b;
        hash[2] += c;
        hash[3] += d;
        hash[4] += e;
        hash[5] += f;
        hash[6] += g;
        hash[7] += h;
    }

    // Produce the final hash value (big-endian)
    std::string result;
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 4; ++j) {
            result += static_cast<char>((hash[i] >> (24 - j * 8)) & 0xFF);
        }
    }
    std::ofstream output("Huffman_Files/hashed.txt");
    output << result;
    return result;
}


struct Character {
    char c;
    unsigned frequency;
    Character* left, * right;
    Character(char a, unsigned f, Character* l, Character* r) {
        c = a;
        frequency = f;
        left = l;
        right = r;
    }
};

struct mycomp {
public:
    bool operator()(Character* a, Character* b) {
        return (a->frequency > b->frequency);
    }
};
class Huffman {
private:
    Character* root;

    void deleteTree(Character* node) {
        if (node) {
            deleteTree(node->left);
            deleteTree(node->right);
            delete node;
        }
    }
public:
    void Huffman_encode(Character* head, std::string s, std::map<char, std::string>& huff) {
        if (head->c != '$') {
            huff[head->c] = s;
            return;
        }
        Huffman_encode(head->left, s + '0', huff);
        Huffman_encode(head->right, s + '1', huff);
    }

public:
    Huffman() : root(nullptr) {}

    ~Huffman() {
        deleteTree(root);
    }

    std::string Huffman_decode(Character* head, std::string en) {
        Character* curr = head;
        std::string ans;
        for (auto x : en) {
            if (x == '0') {
                curr = curr->left;
            }
            else {
                curr = curr->right;
            }
            if (curr->left == NULL && curr->right == NULL) {
                if (curr->c == '_') {
                    ans += '\n';
                    curr = head;
                    continue;
                }
                else if (curr->c == '-') {
                    ans += ' ';
                    curr = head;
                    continue;
                }
                ans = ans + curr->c;
                curr = head;
            }
        }
        return ans;
    }

    Character* buildtree(std::map<char, unsigned>freq) {
        std::priority_queue<Character*, std::vector<Character*>, mycomp>pq;
        for (auto x : freq) {
            Character* temp = new Character(x.first, x.second, NULL, NULL);
            pq.push(temp);
        }
        Character* head = NULL;
        while (pq.size() > 1) {
            Character* l = pq.top();
            pq.pop();
            Character* r = pq.top();
            pq.pop();
            head = new Character('$', (l->frequency + r->frequency), l, r);
            pq.push(head);
        }
        root = pq.top();

        return pq.top();
    }
    void encode(std::string inputfile) {
        std::ifstream fin(inputfile);
        std::string inputs;
        std::map<char, unsigned>freq;
        char ch;
        while (fin.get(ch)) {
            if (ch == ' ') {
                ch = '-';
                inputs += ch;
                freq['-']++;
                continue;
            }
            else if (ch == '\n') {
                ch = '_';
                inputs += ch;
                freq['_']++;
                continue;
            }
            inputs += ch;
            freq[ch]++;
        }
        std::map<char, std::string>huff; // to map the character with its huffman code

        Character* head = buildtree(freq);
        std::string s = "";
        Huffman_encode(head, s, huff);
        fin.clear();
        fin.seekg(0);
        std::string en;

        for (auto c : inputs) {
            en += huff[c];
        }
        fin.close();
        unsigned char padding = 0;
        if (en.length() % 8 != 0) {
            padding = 8 - en.length() % 8;
            en.append(padding, '0');
        }
        std::string hash = sha256(inputfile);
      
        std::ofstream output("Huffman_Files/encoded.xip");
        output << hash<<std::endl;
        output << freq.size() << std::endl;
        for (auto x : freq) {
            output << x.first << " " << x.second << std::endl;
        }
        if (!output.is_open()) {
            return;
        }
        output.put(padding);
        for (size_t i = 0; i < en.length(); i += 8) {
            std::string byte = en.substr(i, 8);
            char byteValue = static_cast<char>(std::stoi(byte, nullptr, 2));
            output.put(byteValue);
        }

        output.close();
    }
    void decode(std::string outputfile) {
        std::ifstream input(outputfile, std::ios::binary);
        std::ofstream output("Huffman_Files/decoded.txt");

        if (!input.is_open()) {
            //cout << "Error opening input file" << endl;
            return;
        }
        std::string hash;
        input >> hash;
        int num;
        input >> num;
        char chi;
        unsigned f;
        std::map<char, unsigned>frequency;
        for (int i = 0; i < num; i++) {
            input >> chi >> f;
            frequency[chi] = f;
        }

        unsigned char padding;
        input >> reinterpret_cast<char&>(padding);


        std::string encodedData;
        char ch;
        while (input.get(ch)) {
            encodedData += std::bitset<8>(ch).to_string();
        }
        input.close();

        if (padding > 0) {
            encodedData = encodedData.substr(0, encodedData.length() - padding);
        }
        Character* head = buildtree(frequency);
        Character* currentNode = head;
        std::string ans = Huffman_decode(head, encodedData);
        output << ans;


        output.close();
    }
};

void Compress(System::String^ managedString,int choice)
{
    msclr::interop::marshal_context context;
    std::string standardString = context.marshal_as<std::string>(managedString);
    
    Huffman huffman;
    if (choice == 1) {
        huffman.encode(standardString);
        return;
    }
    else if (choice == 2) {
        huffman.decode(standardString);
        return;
    }
    return;
}