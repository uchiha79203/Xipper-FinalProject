#pragma once
#include<iostream>
#include<bitset>
#include<vector>
#include<stdlib.h>
#include<math.h>
#include<fstream>
#include<windows.h>
#include <string>
#include <msclr\marshal_cppstd.h>
#include <map>
#include <queue>
#include <chrono>
#include <unordered_map>

using namespace System;


class LZW {
public:

	LZW() {}
    // Function for LZW encoding
    void lzw_encode(const std::string& input_filename, const std::string& output_filename) {
        std::ifstream input_file(input_filename, std::ios::binary);
        std::ofstream output_file(output_filename, std::ios::binary);

        std::unordered_map<std::string, int> dictionary;
        for (int i = 0; i < 256; i++) {
            dictionary[std::string(1, i)] = i;
        }

        int code = 256;
        std::string w;
        char c;

        while (input_file.get(c)) {
            std::string wc = w + c;
            if (dictionary.count(wc)) {
                w = wc;
            }
            else {
                output_file.write((char*)&dictionary[w], sizeof(int));
                dictionary[wc] = code++;
                w = c;
            }
        }

        if (!w.empty()) {
            output_file.write((char*)&dictionary[w], sizeof(int));
        }
    }


    // Function for LZW decoding
    void lzw_decode(const std::string& input_filename, const std::string& output_filename) {
        std::ifstream input_file(input_filename, std::ios::binary);
        std::ofstream output_file(output_filename);

        std::unordered_map<int, std::string> dictionary;
        for (int i = 0; i < 256; i++) {
            dictionary[i] = std::string(1, i);
        }

        int code;
        input_file.read((char*)&code, sizeof(int));
        std::string w = dictionary[code];
        output_file << w;

        int next_code = 256;
        while (input_file.read((char*)&code, sizeof(int))) {
            std::string entry;
            if (code < next_code) {
                entry = dictionary[code];
            }
            else {
                entry = w + w[0];
            }
            output_file << entry;
            dictionary[next_code++] = w + entry[0];
            w = entry;
        }
    }
};


void CompressLZW(System::String^ managedString, int choice)
{
	msclr::interop::marshal_context context;
	std::string input = context.marshal_as<std::string>(managedString);


    LZW* lzw = new LZW();

	if (choice == 1) {
		lzw->lzw_encode(input,"LZW_Files/encoded_LZW.xipl");
	}
	else {
        lzw->lzw_decode(input, "LZW_Files/decoded_LZW.txt");
	}
	return;

}