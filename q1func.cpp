// Q. Write a function to finnd the min of two numbers.

#include <iostream>
using namespace std;

int MinOfTwo(int a , int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int main()
{

    cout <<"Min = " << MinOfTwo(5,3);

    return 0;
}