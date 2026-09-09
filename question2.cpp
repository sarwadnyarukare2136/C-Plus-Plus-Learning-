//check users age and tell if he's eligible to vote or not

#include <iostream>
using namespace std;

int main()
{
    int a ;

    cout << "Enter your age :";
    cin >> a;

    if(a >= 18){
        cout << "You are eligible to vote !!!" << endl;
    } else  {
        cout << "You are not eligible to vote !!!" << endl;
    }

    return 0;
}