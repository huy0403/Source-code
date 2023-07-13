#include<bits/stdc++.h>
using namespace std;

string reverseStr(string s){
    string tem = "";
    for(int i =s.size()-1; i >= 0; i--){
        tem += s[i];
    }
    return tem;
}

bool cmp(string a, string b){
    return a < b;
}

int main(){
    string s;
    getline(cin , s);
    stringstream ss(s);
    string token;
    vector<string> vt;
    while(ss >> token){
        if(token == reverseStr(token)) vt.push_back(token);
    }
    sort(vt.begin(), vt.end(), cmp);
    for (int i =0; i< vt.size(); i++){
        cout << vt[i] << " ";
    }
    return 0;
}