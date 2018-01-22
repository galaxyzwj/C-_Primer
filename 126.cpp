#include<iostream>
using namespace std;

void exchange_int(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void exchange_int2(int &c, int &d)
{
    int temp;
    temp = c;
    c = d;
    d = temp;
}


int main(int argc, char **argv)
{
    int a = 3, b = 4;
    cout << "a = "<< a << "," << "b = " << b << endl;
    exchange_int(&a,&b);
    cout << "a = "<< a << "," << "b = " << b << endl;
    exchange_int2(a,b);
    cout << "a = "<< a << "," << "b = " << b << endl;
    return 0;
}

