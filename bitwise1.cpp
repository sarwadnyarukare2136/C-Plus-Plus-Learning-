//Bitwise operators
//1. Bitwise "&" (AND)
//2. Bitwise "|" (OR)
//3. Bitwise "^" (XOR / Exclusive OR)



#include <iostream>
using namespace std;

int main()
{
    int a = 7, b = 5;

    cout << "'AND' OF A AND B IS : " << (a & b) << endl;
    cout << "'OR' OF A AND B IS : " << (a | b) << endl;
    cout << "'XOR' OF A AND B IS : " << (a ^ b);

    return 0 ;  
}

