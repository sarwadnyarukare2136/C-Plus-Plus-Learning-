// functions

#include <iostream>
using namespace std;

int Hello() {
    int age;
    cout << "My first c++ function program ." << endl;
    cout <<  "Enter your age :" << endl;
    cin >> age;
    cout << "Your age is :" << age << endl << "\n";
}

int main()
{
    Hello() ;
    Hello();

    return 0;
}