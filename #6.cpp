#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    
    int n, m,a,b;
    cin >> n >> m;
    --n;
    --m;
    a = n;
    b = m;
    while (a > 0 && b > 0){
        if (a > b){
            a = a%b;
        }else{
            b = b%a;
        }
    }
    cout << n + m - a - b << endl;
}
