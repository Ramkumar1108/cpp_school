#include <iostream>
using namespace std;
// Int("%d") : 32 Bit integer
// Long("%ld") : 64 bit integer
// Char("%c") : Character type
// Float("%f") : 32 bit real value
// Double("%lf") : 64 bit real value


int main(){
    int i;
    long l;
    char c;
    float f;
    double lf;

    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &lf);
    printf("%d", i);
    cout<<endl;
    printf("%ld", l);
    cout << endl;
    printf("%c", c);
    cout << endl;
    printf("%f", f);
    cout << endl;
    printf("%lf", lf);
    return 0;
}