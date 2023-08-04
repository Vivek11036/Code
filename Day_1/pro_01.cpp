#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c ;
    cout << "Enter all three Number are ";
    cin >> a >> b >> c;

    if(a > b && a > c) {
        cout << "A is a largest Number " << a << endl; 
    }
    else if (b > c){
        cout << "B is a largest Number " << b << endl;
    }
    else {
    cout << "C is a largest Number "<< c << endl;
    }
    
    return 0;
}