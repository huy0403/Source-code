#include<bits/stdc++.h>
using namespace std;

int countN(int n){
    int count = 0;
    while(n){
        if((n%10) == 3 || (n%10) == 5 || (n%10) == 7 || (n%10) == 2) count++;
        n /= 10;
    }
    return count;
}

bool cmp(int a, int b){
    return countN(a) > countN(b);
}

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i= 0; i< n; i++) cin >> vt[i];
    stable_sort(vt.begin(), vt.end(), cmp);
    for(int i : vt){
        cout << i << " ";
    }
    return 0;
}