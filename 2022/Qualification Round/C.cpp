#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        // int r,c;
        // cin>>r>>c;
        // int k = 0;
        // int C[3],M[3],Y[3],K[3];
        int C[3][4];
        for(int i=0;i<3;i++){
            for(int j=0;j<4;j++){
                cin>>C[i][j];
            }
        }
        int c=1e6,m=1e6,y=1e6,k=1e6;
        // for(int j=0;j<4;j++){
            for(int i=0;i<3;i++){
                // cin>>C[i][j];
                c=min(c,C[i][0]);
                m=min(m,C[i][1]);
                y=min(y,C[i][2]);
                k=min(k,C[i][3]);
            }
        // }
        // range is [0-min(a,b,c)]
        // | _
        // int P[3];
        if(c+m+y+k<1e6){
            cout<<"Case #"<<tt<<": "<<"IMPOSSIBLE"<<endl;
        }
        else{
            cout<<"Case #"<<tt<<": ";
            // a+b+c+d=1e6
            //
            if(c>=1e6){
                cout<<"1000000 0 0 0"<<endl;
            }
            else if(c+m>=1e6){
                cout<<c<<" "<<(1e6-c)<<" 0 0"<<endl;
            }
            else if(c+m+y>=1e6){
                cout<<c<<" "<<m<<" "<<(1e6-(c+m))<<" 0"<<endl;
            }
            else
            cout<<c<<" "<<m<<" "<<y<<" "<<(1e6-(c+m+y))<<endl;
        }
        
    }
}
/*
3
300000 200000 300000 500000
300000 200000 500000 300000
300000 500000 300000 200000
1000000 1000000 0 0
0 1000000 1000000 1000000
999999 999999 999999 999999
768763 148041 178147 984173
699508 515362 534729 714381
949704 625054 946212 951187
*/
/*
Case #1: 300000 200000 300000 200000
Case #2: IMPOSSIBLE
Case #3: 699508 148041 152451 0
*/





