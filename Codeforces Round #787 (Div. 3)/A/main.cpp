#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int a,b,c,x,y;
        cin >> a >> b >> c >> x >> y;
        int x_ = max(x-a,0);
        int y_ = max(y-b,0);
        cout << (x_+y_ <= c ? "YES":"NO") << '\n';
    }
}