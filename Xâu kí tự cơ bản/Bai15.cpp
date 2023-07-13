#include<bits/stdc++.h>
using namespace std;

string reverseStr(string s){
    string tem = "";
    for(int i = s.size()-1; i>=0; i--){
        tem += s[i];
    }
    return tem;
}

int main(){
    string s;
    getline(cin, s);
    vector<string> str;
    stringstream ss(s);
    string token;
    while(ss >> token){
        str.push_back(token);
    }
    cout << str[0];
    for(int i = 1; i < str.size(); i++){
        if(i%2 != 0){
            cout << " " + reverseStr(str[i]);
        }else{
            cout << " " + str[i];
        }
    }
    return 0;
}