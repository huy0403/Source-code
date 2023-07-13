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
    }

    for(auto it = mp.begin(); it != mp.end(); it++){
        if((*it).second%2 == 0){
            cout << (*it).first << " " << (*it).second << endl;
        }
    }
    cout << endl;
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        if((*it).second%2 == 0){
            cout << (*it).first << " " << (*it).second << endl;
        }
    }
    return 0;
}