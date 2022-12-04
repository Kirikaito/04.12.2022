#include <bits/stdc++.h>

using namespace std;

int main() {
    int na,a,b,n10 = 0,i = 0;
    char t;
    string nb ="";
    cin >> na >> a >> b;
    while(na > 0){
        n10 += (na%10) * pow(a,i);
        na = na/10;
        i++;
    }
    while(n10 > 0){
        t = 48 + (n10%b);
        n10 = n10/b;
        nb = t + nb;
    }
    cout << nb;
}
