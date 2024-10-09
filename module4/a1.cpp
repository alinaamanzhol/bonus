#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 

    int x_max = 0, y_max = 0; 
    int max_dist = -1;       

    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y; 

        
        int dist = x * x + y * y;

        if (dist > max_dist) {
            max_dist = dist;
            x_max = x;
            y_max = y;
        }
    }

    
    cout << x_max << " " << y_max << endl;

    return 0;
}
