#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int h = n / 3600;

    int m = (n % 360) / 60;

    cout << "It is" << " " << h << " " << "hours" << " " << m << " " << "minutes." << endl;




    return 0;
}