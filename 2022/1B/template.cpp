#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n;
        cin>>n;
        int ans = 0;
        vector<int> A(n,0);
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
}
