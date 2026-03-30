#include <iostream>
#include <fstream>   
#include <sstream>   
#include <string>
using namespace std;

/* Function to read file into a string */
string readFile(const string& filename) {
    ifstream file(filename);
    string data;
    getline(file, data); 
    return data;
}

/* Function to count vowels */
int countVowels(const string& text) {
    int count = 0;
    for (char c : text) {
        c = tolower(c);
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            count++;
        }
    }
    return count;
}

/* Function to count words */
int countWords(const string& text) {
    stringstream ss(text);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

/* Function to reverse the string */
string Reverse(const string& text) {
    string reversed(text.rbegin(), text.rend());
    return reversed;
}

/* Function to capitalize the second letter of each word */
string capitalizeSecondLetter(const string& text) {
    stringstream ss(text);
    string word, result;
    while (ss >> word) {
        if (word.length() > 1) {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }
    return result;
}

int main() {
    // Step i & ii: Read file into fileData
    string fileData = readFile("Module.txt");

    // Step iii: Count vowels
    cout << "Original text: " << fileData << endl;
    cout << "Number of vowels: " << countVowels(fileData) << endl;

    // Step iv: Count words
    cout << "Number of words: " << countWords(fileData) << endl;

    // Step v: Reverse text
    cout << "Reversed text: " << Reverse(fileData) << endl;

    // Step vi: Capitalize second letter of each word
    cout << "Second letter capitalized: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
