#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<string> vt(n);
    for(int i = 0; i < n; i++) cin >> vt[i];
    map<string,int> mp;
    for(int i = 0; i< n; i++){
        mp[vt[i]]++;
    }

    int max = 0; string name_max = vt[0];
    int min = mp[vt[0]]; string name_min = vt[0];
    for(auto it = mp.begin(); it != mp.end(); it++){
        if((*it).second > max){
            max = (*it).second;
            name_max = (*it).first;
        }
        if((*it).second < min){
            min = (*it).second;
            name_min = (*it).first;
        }
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout << endl;
    cout << name_min << " " << min << endl;
    cout << name_max << " " << max;
    return 0;
}