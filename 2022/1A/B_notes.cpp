#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<endl;
        int B[n];

        for(int i=0;i<n;i++){
            cin>>B[i];
        }
        // x + y = 2*N
        // c + d = 2*N
        // c=N d=N
        // 1e9 , 1e9 , 1e9/8
        // 10 12 13
        // 10 3 7
        // partition .
        // a+3+7   b+10
        // even => get even
        // odd => get odd
        // odd => (n is even) => sum even
        // odd => (n is odd) => sum odd
        
    }
}
