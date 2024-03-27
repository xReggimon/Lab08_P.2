#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string str){

	stringstream ss(str);
	string word;
	int countWords = 0;

	while (ss >> word) {
		countWords++;
	}
	return countWords;
}

int main() {

	string str;
	while (true) {
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);

		if (str == "Q" || str == "q") break;

		cout << countWords(str) << endl;
	}
	return 0;
}