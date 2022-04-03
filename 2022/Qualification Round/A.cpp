#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int r,c;
        cin>>r>>c;
        // int k = 0;
        cout<<"Case #"<<tt<<":"<<endl;
        for(int i=0;i<2*r+1;i++){
            for(int j=0;j<2*c+1;j++){
                if(i<2 && j<2){
                    cout<<".";
                }
                else if(j%2==0 && i%2==0){
                    cout<<"+";
                }
                else if(j%2==1 && i%2==0){
                    cout<<"-";
                }
                else if(j%2==0 && i%2==1){
                    cout<<"|";
                }
                else if(j%2==1 && i%2==1){
                    cout<<".";
                }
                
                /*
                if(i==0 && j==0){
                    cout<<"..+";
                }
                else if(i==1 && j==0){
                    cout<<"..|";
                }
                else if(i>=2){
                    if(i%2==0)
                        cout<<"+";
                    else
                        cout<<"|";
                }
                else{
                    cout<<"-+";
                }
                */
            }
            cout<<endl;
            // k++;
            
        }
    }
}
/*
3
3 4
2 2
2 3
*/
/*
Case #1:
..+-+-+-+
..|.|.|.|
+-+-+-+-+
|.|.|.|.|
+-+-+-+-+
|.|.|.|.|
+-+-+-+-+
Case #2:
..+-+
..|.|
+-+-+
|.|.|
+-+-+
Case #3:
..+-+-+
..|.|.|
+-+-+-+
|.|.|.|
+-+-+-+
*/

