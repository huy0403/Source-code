#include<bits/stdc++.h>
using namespace std;

int sole(int n){
    int count = 0;
    while(n){
        if((n%10)%2 != 0){
            count++;
        }
        n /= 10;
    }
    return count;
}

bool cmp(int a, int b){
    if(sole(a) != sole(b)){
        return sole(a) > sole(b);
    }
    else{
        return a < b;
    }
}

int main(){
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i< n; i++){
        cin >> vt[i];
    } 
    sort(vt.begin(), vt.end(), cmp);
    for( auto it : vt){
        cout << it << " ";
    }
    return 0;
}