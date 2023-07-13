#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    map<string,string> mp;
    for(int i = 0; i< n; i++){
        string mssv, name;
        cin >> mssv;
        cin.ignore();
        getline(cin,name);
        mp.insert({mssv,name});
    }
    int q; cin >> q;
    for (int  i =0; i< q; i++){
        string mssv;
        cin >> mssv;
        if(mp.find(mssv) != mp.end()){
            cout << mp[mssv] << endl;
        }else{
            cout << "NOT FOUND" << endl;
        }
    }
    return 0;
}