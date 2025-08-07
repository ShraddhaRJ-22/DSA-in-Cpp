// Check is the Sentence is Pangram (Leetcode 1832)
#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool checkIfPangram(string sentence) {
    vector<bool> Alpha(26, false);

    for(int i = 0; i < sentence.size(); i++) {
        if(sentence[i] >= 'a' && sentence[i] <= 'z') {
            Alpha[sentence[i] - 'a'] = true;
        }
    }

    for(int i = 0; i < 26; i++) {
        if(!Alpha[i]) return false;
    }

    return true;
}

int main() {
    string sentence;
    cout << "Enter a sentence (lowercase only): ";
    getline(cin, sentence); // takes full line input

    if(checkIfPangram(sentence))
        cout << "? The sentence is a pangram." << endl;
    else
        cout << "? The sentence is NOT a pangram." << endl;

    return 0;
}

