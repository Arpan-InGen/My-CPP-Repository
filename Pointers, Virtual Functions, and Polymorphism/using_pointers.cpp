#include <iostream>

using namespace std;

int main()
{
    int a, *ptr1, **ptr2;

    ptr1 = &a;
    ptr2 = &ptr1;

    cout << "The address of a: " << ptr1 << "\n";
    cout << "The address of ptr1: " << ptr2 << "\n\n";

    ptr1 += 2;
    ptr2 += 2;

    cout << "After incrementing the address values: \n\n";

    cout << "The address of a: " << ptr1 << "\n";
    cout << "The address of ptr1: " << ptr2 << "\n\n";

    return 0;
}