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

	string str = "apple banana c";
	cout << countWords(str);
	return 0;
}