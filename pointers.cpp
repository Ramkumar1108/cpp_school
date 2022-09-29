#include <iostream>
using namespace std;

void update(int *a, int *b)
{
    int sum = (*a+*b);
    int abdif = (abs(*a-*b));

    *a = sum;
    *b = abdif;
}

int main(){
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    cout<<a<<endl<<b;
    return 0;
}