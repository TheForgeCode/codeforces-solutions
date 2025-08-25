#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int c=0;
        int d = 0;
        for(int j = 0; j < n; j++){
            if(arr[j]==0){
                c+=1;
            }else{
                c=0;
            }
 
            
            if(c>d){
                d = c;
                }
        }
        cout<<d<<endl;
    }
    return 0;
}