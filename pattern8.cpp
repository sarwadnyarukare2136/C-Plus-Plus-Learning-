/*
--------------------------------------
1
12
123
1234
--------------------------------------
Print this
*/

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number : ";
    cin >> n;

    for(int i=0 ; i<n ; i++) {
        int num = 1;
        for(int j=0 ; j<i+1 ; j++) {
            cout << num;
            num++;
        }
        cout << endl;

    }
    return 0 ;  
}
