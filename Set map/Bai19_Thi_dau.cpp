#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    cin.ignore();
    map<string,multiset<string>> mp;
    for(int i = 0; i< n; i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string token;
        vector<string> vt;
        while(getline(ss, token, '-')){
            if(token[0] == ' '){
                token.erase(token.begin());
            }
            if(token[token.size()-1] == ' '){
                token.erase(token.end()-1);
            }
            vt.push_back(token);
        }
        mp[vt[0]].insert(vt[1]);
        mp[vt[1]].insert(vt[0]);
    }
    
    for(auto it : mp){
        cout << it.first << " : " << *it.second.begin();
        it.second.erase(it.second.begin());
        for(multiset<string>::iterator i = it.second.begin(); i  != it.second.end(); i++){
            cout << ", " << *i;
        }
        cout << endl;
    }
    return 0;
}