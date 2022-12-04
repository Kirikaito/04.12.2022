#include <bits/stdc++.h>

using namespace std;

int main() {
    int k,n,f;
    cin >> k >> n;
    vector <int >mas(n,0);
    for(int i = 0; i < n; i++){
        cin >> mas[i];
    }
    for(int e = 0; e < k;e++){
        f = mas[0];
        for(int i = 0; i < n - 1; i++){
            mas[i] = mas[i + 1];
        }
        mas[n - 1] = f;
    }
    for(auto i : mas)cout << i <<' ';
    return 0;
}
