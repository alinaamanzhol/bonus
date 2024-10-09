#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;

    
    for (int i = 0; i < input.length(); i++) {
        for (int j = i + 1; j < input.length(); j++) {
            if (input[i] == input[j]) { 
                cout << input[i] << endl; 
                return 0; 
            }
        }
    }

    return 0;
}