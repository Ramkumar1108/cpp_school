#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Complete the program
    string a, b;
    cin >> a >> b;

    cout << a.size() << " " << b.size();
    cout << endl;
    cout << (a + b);
    cout << endl;
    char a1, b1;
    a1 = a[0];
    b1 = b[0];
    a[0] = b1;
    b[0] = a1;

    cout << a << " " << b;
    return 0;
}