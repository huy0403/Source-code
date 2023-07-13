#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    if(a.size() != b.size()){
        return a.size() < b.size();
    }else{
        return a < b;
    }
}

int main(){
    string s;
    getline(cin , s);
    vector<string> str;
    stringstream ss(s);
    string token;
    while(ss >> token){
        str.push_back(token);
    }
    sort(str.begin(), str.end(), cmp);
    for(int i = 0; i< str.size(); i++){
        cout << str[i] << " ";
    }
    return 0;
}