#include <cstring>
#include <iostream>
#include <string>

//jeśli będzie parametr "ABRAKADABRA"
//wypisz: HOKUS POKUS

int main(int argc, char *argv[])
{
	for (int i = 0; i < argc; ++i) {
		std::string tmp = argv[i];

		/*
		for (unsigned i = 0; i < tmp.size(); ++i) {
			char &c = tmp[i];
			if (c >= 'a' && c <= 'z') {
				c = c - 'a' + 'A';
			}
		}
		*/

		for (char &c : tmp) {
			if (c >= 'a' && c <= 'z') {
				c = c - 'a' + 'A';
			}
		}

		std::cout << "post loop: " << tmp << '\n';

		if (tmp == "ABRAKADABRA")
// 		if (strcmp(argv[i], "ABRAKADABRA") == 0)
			std::cout << "HOKUS POKUS\n";
	}

	return 0;
}
