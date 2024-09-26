//akarsh khot
//23070123012
//AIM - do swapping using pass by value.

#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 5, b = 10;
    swap(a, b);
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    
    return 0;
}

/*
OUTPUT
The value of a is: 5
The value of b is: 10
*/
