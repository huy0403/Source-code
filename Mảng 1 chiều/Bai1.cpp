#include <bits/stdc++.h>
using namespace std;

#define ll long long

void maxArr(const vector<ll>& arr, ll& max_val, int& index_max) {
    max_val = arr[0];
    index_max = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
            index_max = i;
        }
    }
}

void minArr(const vector<ll>& arr, ll& min_val, int& index_min) {
    min_val = arr[0];
    index_min = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= min_val) {
            min_val = arr[i];
            index_min = i;
        }
    }
}

bool isPrime(ll n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int countPrime(const vector<ll>& arr) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (isPrime(arr[i])) count++;
    }
    return count;
}

ll muiltimax(const vector<ll>& arr) {
    ll max_val = arr[0] * arr[1];
    for (int i = 1; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] * arr[j] > max_val) {
                max_val = arr[i] * arr[j];
            }
        }
    }
    return max_val;
}

string arrDX(const vector<ll>& arr) {
    if (arr.size() == 1) return "YES";
    for (int i = 0; i < arr.size() / 2; i++) {
        if (arr[i] != arr[arr.size() - i - 1]) return "NO";
    }
    return "YES";
}

ll multi(const vector<ll>& arr) {
    const int MOD = 1000000007;
    ll product = 1;
    for (int i = 0; i < arr.size(); i++) {
        product = (product * arr[i]) % MOD;
    }
    return product;
}

int main() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    ll max_val;
    int index_max;
    maxArr(arr, max_val, index_max);
    cout << max_val << " " << index_max << endl;
    ll min_val;
    int index_min;
    minArr(arr, min_val, index_min);
    cout << min_val << " " << index_min << endl;
    cout << countPrime(arr) << endl;
    cout << muiltimax(arr) << endl;
    cout << arrDX(arr) << endl;
    cout << multi(arr);
    return 0;
}
