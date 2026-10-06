// Bitwise left shift and right shift .
// '<<' this is left shift and '>>' this is right shift .

// '<<' shifts binary numbers to left side and '>>' to the right

#include <iostream>
using namespace std;

int main()
{
    int a = 13;

    cout << "Bitwise left shift of " << a << " is " << (a << 2) << endl;
    cout << "Bitwise right shift of " << a << " is " << (a >> 1);
    return 0 ;  
}
