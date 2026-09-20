/*
-----------------------------------------
1
23
456
78910
-------------------------------------------
print this
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int num = 1;
    cout << "enter number : ";
    cin >> n;

    for(int i=0 ; i<n ; i++) {
        for(int j=0 ; j<i+1 ; j++) {
            cout << num;
            num++;

        }
        cout << endl;
    }
    return 0 ;  
}
