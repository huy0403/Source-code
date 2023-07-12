#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<char> vt(n);
    for(int i = 0; i< n; i++) cin >> vt[i];
    map<char,int> mp;
    for(int i = 0; i< n; i++){
        mp[vt[i]]++;
    }
    map<char,int>::iterator it;
    it = mp.begin();
    cout << (*it).first << " " << (*it).second << "\n\n";
    
    it = mp.end(); it--;
    cout << (*it).first << " " << (*it).second << "\n\n";
    for(map<char,int>::iterator it = mp.begin(); it != mp.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    cout  << endl;
    
    for(auto it = mp.rbegin(); it != mp.rend(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }
    
    return 0;
}