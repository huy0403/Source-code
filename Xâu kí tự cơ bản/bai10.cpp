#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char,int> mp;
    for(int i = 0; i< s.size(); i++){
        if(mp[s[i]] == 0){
            mp[s[i]]++;
        }else{
            cout << s[i];
            return 0;
        }
    }
    cout << "NONE";
    return 0;
}