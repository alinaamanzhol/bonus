#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;


    int cnt = 0;
    
    for (int i = 0; i < n; i++)
      {
        while(n > 0)
        {
            if(n % 10 == 0) cnt++;
            n /= 10;


        }
      } 
      cout << cnt;

    return 0;
}
