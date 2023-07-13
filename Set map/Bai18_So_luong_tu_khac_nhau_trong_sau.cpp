#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin,s);
    map<string,int> mp;
    stringstream ss(s);
    string token;
    while(ss>>token){
        mp[token] = token.size();
    }
    cout << mp.size() << endl;
    cout << (*mp.begin()).first << " " << (*mp.rbegin()).first;
    return 0;
}