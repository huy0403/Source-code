#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    string check = "28tech";
    for(int i =0; i< s.size(); i++){
        if(isalpha(s[i])) s[i] = tolower(s[i]);
    }
    stringstream ss(s);
    string token;
    int count = 0;
    while(ss >> token){
        if(token == check) count++;
    }
    cout << count;
    return 0;
}