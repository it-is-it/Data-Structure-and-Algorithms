#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
};

int main()
{
    int a, b;
    a = 10;
    b = 20;
    swap(&a, &b);
    cout << "First number: " << a << endl;
    cout << "Second number: " << b << endl;
    return 0;
};