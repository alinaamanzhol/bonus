#include <iostream>

using namespace std;

int main()

{
char a;

cin >> a;

if (a <= 'z' && a >= 'a') a -= 32;
else if (a <= 'Z' && a >= 'A') a += 32;
cout << a;

return 0;
}