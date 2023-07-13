#include<bits/stdc++.h>
using namespace std;
int x;

bool cmp1(int a, int b){
    if(abs(x-a) != abs(x-b)){
        return abs(x-a) < abs(x-b);
    }else{
        return a < b;
    }
}

bool cmp2(int a, int b){
    if (a % 2 == 0 && b % 2 == 0) {
        return a < b;
    } else if (a % 2 != 0 && b % 2 != 0) {
        return a > b;
    } else {
        return a % 2 == 0;
    }
}

int main(){
    int n; cin >> n; cin >> x;
    vector<int> vt(n);
    for(int i = 0; i< n; i++){
        cin >> vt[i];
    }
    sort(vt.begin(), vt.end(), cmp1);
    for( auto it : vt){
        cout << it << " ";
    }
    cout << endl;
    sort(vt.begin(), vt.end(), cmp2);
    for(auto it : vt){
        cout << it << " ";
    }
    return 0;
}