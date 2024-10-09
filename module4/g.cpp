#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int mathSum = 0;
    int physicsSum = 0;
    int informaticsSum = 0;

    for(int i = 0; i < n; i++)
    {
        string lastName, firstName;

        int mathGrade, physicsGrade, informaticsGrade;

        cin >> lastName >> firstName >> mathGrade >> physicsGrade >> informaticsGrade;

        mathSum += mathGrade;
        physicsSum += physicsGrade;
        informaticsSum += informaticsGrade;
    }

    cout << mathSum / n << "." << (mathSum % n) * 10 / n << " ";
    
    
    cout << physicsSum / n << "." << (physicsSum % n) * 10 / n << " ";
    
    
    cout << informaticsSum / n << "." << (informaticsSum % n) * 10 / n << endl;








    return 0;
}