#include <iostream>

using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    for(int x = 0; x <= 1000; x++)
    {
        int result = a * x * x * x + b * x * x + c * x + d;
        if(result == 0){
            cout << x << " ";
        }
    }




    return 0;
}