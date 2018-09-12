// author: Jaeseong Park
// created: 9/6/2018
// modified: 9/7/2018
// purpose: printing out n th fibonacci number.
#include <iostream>

using namespace std;

int fibonacci2(int n){
    int a = 0, b = 0,i = 1, j = 0;
    while(a <= n){
        if(a % 2 == 0){
            i = i + j;
            b = i;
        }
        else if(a % 2 == 1){
            j = j + i;
            b = j;
        }
        a++;
    }
    return b;
}

int main()
{
    int n = 0;
    cout << "Provide n to calculate Fibonacci number Fn: \n";
    cin >> n;
    cout << fibonacci2(n) << endl;
    return 0;
}
