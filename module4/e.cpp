#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string sentence;
    cin >> ws;
    getline(cin, sentence);

    int wordCount = 1;  
    for (int i = 0; i < sentence.length(); i++) {
        if (sentence[i] == ' ') {
            wordCount++;
        }
    }

    cout  << wordCount << endl;

    return 0;
}