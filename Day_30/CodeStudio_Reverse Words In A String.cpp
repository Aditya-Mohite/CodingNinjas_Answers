#include <iostream>
#include <sstream>
#include <vector>

string reverseString(string &str)
{
	stringstream ss(str);
    vector<string> words;

    // Tokenize the string based on spaces
    string word;
    while (ss >> word) {
        words.push_back(word);
    }

    // Reversing the vector of words
    reverse(words.begin(), words.end());

    // Constructing the reversed string
    string reversedString;
    for (const string &w : words) {
        reversedString += w + " ";
    }

    // Removing trailing space
    if (!reversedString.empty()) {
        reversedString.pop_back();
    }

    return reversedString;
}
