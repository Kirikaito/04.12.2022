#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x,z = 0,q,p,r;
    cin >> r;
    x = r;
    q = r * r;
    for(int y = 0; y < r;y++){
        p= q - y * y; 
        while(((x * x) >= p) && (x >= 0))--x;
        z+=(x + 1);
    }
    cout<<z * 4;
}
