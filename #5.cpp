#include <bits/stdc++.h>

using namespace std;

int main() {
    int k = 0,in;
    vector<int> a;
    cout << "write 0 to stop input.\n";
    while(true){
        cin >> in;
        if(in == 0) break;
        a.push_back(in);
    }
    sort(a.begin(),a.end());
    for(int i = 0; i<a.size(); i++){
        if (k + 1 < a[i]) break;
        k += a[i];
    }
    cout <<endl <<"answer: "<< k + 1;
}
