#include <bits/stdc++.h>

using namespace std;

string toLowerCase(const string &str) {
    string lowerStr;
    for (char ch : str) {
        lowerStr += tolower(ch);
    }
    return lowerStr;
}

int main() {
    string paragraph;
    unordered_map<string, int> wordFrequency;

    cout << "Enter a paragraph:" << endl;
    getline(cin, paragraph);

    stringstream ss(paragraph);
    string word;
    while (ss >> word) {

        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());

        word = toLowerCase(word);
        wordFrequency[word]++;
    }

    cout << "\nWord frequencies:" << endl;
    for (const auto &pair : wordFrequency) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}

