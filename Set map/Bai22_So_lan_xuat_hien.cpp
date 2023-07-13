#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> vt(n);
    for(int i = 0; i < n; i++) cin >> vt[i];
    map<int,int> mp;
    for(int i = 0; i< n; i++){
        mp[vt[i]]++;
        cout << mp[vt[i]] << " ";
    }
    return 0;
}