#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> num;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '0'){
            num.push_back((int)s[i]-'0');
        }
    }
    sort(num.begin(),  num.end());
    if(num.empty()){
        cout << 0;
        return 0;
    }
    for(int i =0; i< num.size(); i++){
        cout << num[i];
    }
    return 0;
}