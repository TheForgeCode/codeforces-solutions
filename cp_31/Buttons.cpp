#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a; int b; int c;
        cin>>a; cin>>b; cin>>c;
        if((a==b) && (c%2==0)){
            cout<<"Second"<<endl;
        }else if((a==b) && (c%2!=0)){
            cout<<"First"<<endl;
        }else if(a>b){
            cout<<"First"<<endl;
        }else if(a<b){
            cout<<"Second"<<endl;
        }
    }
    return 0;
}