// I tried to do it for test set 1 , n <= 10 , 2<= p <=3
// but time was short & this code is incomplete & wrong tbh.
// I couldn't even get those easy 14 points.
// I will be sad if 49 points qualified, coz if it will then I just missed it coz of my foolishness
// I learnt a lot from this , that we should not implement anything until we are sure that our solution will work 
// + use functions wherever possible.
// don't copy code.

#include <bits/stdc++.h>
using namespace std;
long long calc(vector<vector<int>> A,int n,int p){
    long long ans1 = 0 , val = 0;
        for(int i=0;i<n;i++){

            for(int j=0;j<p;j++){
                // cin>>A[i][j];
                // if(j==0 && i!=0){
                //     // i==1
                //     // diff val than 0
                //     presses += abs(A[i][j]-val);
                // }
                ans1 += abs(A[i][j]-val);
                val = A[i][j];
            }

            // sort(A[i],A[i]+p);
        }
    return ans1;
}
int main() {
    // cout<<"Hello World!";
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int n,p;
        cin>>n>>p;
        // int A[n][p];
        vector<vector<int>>(p,0)>A(n);
        // int mini[n];
        // vector<int> mini(n,INT_MAX);
        // vector<int> maxi(n,0);

        long long gans = LONG_MAX;
        for(int i=0;i<n;i++){
            for(int j=0;j<p;j++){
                cin>>A[i][j];
                // if(A[i][j]<mini[i]){
                //     mini[i]=A[i][j];
                // }
                // if(A[i][j]>maxi[i]){
                //     maxi[i]=A[i][j];
                // }
            }


            // sort(A[i],A[i]+p);
            // if(i%2==0){
            //     reverse(A[i],A[i]+p);
            // }
        }

        for(int i=0;i<n;i++){
            sort(A[i],A[i]+p);
            do {
                gans = min(calc(A,n,p));
                // display(a, n);
            } while (next_permutation(A[i], A[i] + p));
        }

    // 2 - 3
    // sort()
    // reverse()
    
    // 6 ^ 10
    //  1 2 3 
    //  3 2 1
    //  1 3 2
    //  3 1 2
    //  2 1 3
    //  2 3 1
        // ans = min(ans1,ans2);
        // cout<<ans1<<" "<<ans2<<endl;
        cout<<"Case #"<<tt<<": "<<gans<<endl;
    }
}

