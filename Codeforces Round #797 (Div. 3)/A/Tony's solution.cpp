#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int division = n / 3;
        if (n%3 == 0) {
            cout << division << " " << division + 1 << " " << division - 1 << "\n";
        } else if (n%3 == 1) {
            cout << division << " " << division + 2 << " " << division - 1 << "\n";
        } else if (n%3 == 2){
            cout << division+1 << " " << division + 2 << " " << division - 1 << "\n";
        }
    }
    return 0;
}