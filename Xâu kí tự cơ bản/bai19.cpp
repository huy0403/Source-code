#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin , s);
    for(int i =0; i < s.size(); i++){
        if(isalpha(s[i])) s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string token;
    set<string> se;
    while(ss >> token){
        se.insert(token);
    }
    cout << se.size();
    return 0;
}