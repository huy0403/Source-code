#include<bits/stdc++.h>
using namespace std;

string fotmat(int num, int limited){
    string result = to_string(num);
    for(int i = 1; i <= limited-to_string(num).size(); i++){
        result.insert(0,"0");
    }
    return result;
}

int main(){
    string s;
    cin >> s;
    stringstream ss(s);
    vector<int> num;
    string token;
    while(getline(ss,token,'/')){
        num.push_back(stoi(token));
    }
    cout << fotmat(num[0],2) + "/" + fotmat(num[1],2) + "/" + fotmat(num[2],4);
    return 0;
}