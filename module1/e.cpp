#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int V, t;
    cin >> V >> t;
    int S = 109;

    if(V > 0) {
        cout << V * t - S;
    }
    else{
        cout << S + V * t;
    }





    return 0;
}