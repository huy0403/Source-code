#include<bits/stdc++.h>
using namespace std;

int UCLN(int a, int b) {
    if (b == 0)
        return a;
    return UCLN(b, a % b);
}

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i =0; i< n; i++) cin >> vt[i];
    int count = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j< n; j++){
            if(UCLN(vt[i],vt[j]) == 1) count++;
        }
    }
    cout << count;
    return 0;
}