#include<bits/stdc++.h>
using namespace std;

int countN(int n){
    int count = 0;
    while(n){
        if((n%10) == 0 || (n%10) == 6 || (n%10) == 8) count++;
        n /= 10;
    }
    return count;
}

bool cmp(int a, int b){
    if(countN(a) != countN(b)){
        return countN(a) > countN(b);
    }else{
        return a < b;
    }
}

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i= 0; i< n; i++) cin >> vt[i];
    sort(vt.begin(), vt.end(), cmp);
    for(int i : vt){
        cout << i << " ";
    }
    return 0;
}