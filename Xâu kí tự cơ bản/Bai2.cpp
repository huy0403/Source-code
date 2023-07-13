#include<bits/stdc++.h>
using namespace std;

string reverseStr(string s){
    string tem = "";
    for(int i = s.size()-1; i >= 0; i--){
        tem += s[i];
    }
    return tem;
}

string convertLower(string s){
    for(int i =0; i< s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}

string convertUpper(string s){
    for(int i =0; i< s.size(); i++){
        s[i] = toupper(s[i]);
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << reverseStr(s) << endl;
    cout << convertLower(s) << endl;
    cout << convertUpper(s);
    return 0;
}