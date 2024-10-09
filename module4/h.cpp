#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

   

    for(int i = 0; i < n; i++)
    {
        string lastName, firstName;

        int mathGrade, physicsGrade, informaticsGrade;

        cin >> lastName >> firstName >> mathGrade >> physicsGrade >> informaticsGrade;

        if(mathGrade > 3 && physicsGrade > 3 && informaticsGrade > 3)
        {
            cout << lastName << " " << firstName;
        } else
        {
            cout << "NO";
        }

        

        
    }



    return 0;
}