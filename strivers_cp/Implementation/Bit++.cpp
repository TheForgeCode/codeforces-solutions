#include <iostream>
#include <string>
using namespace std;

int main(){
    int x = 0;
    int n = 0;
    cin>>n;
    while(n--){
        string name;
        cin>>name;
        if(name == "++X" || name == "X++"){
            x++;
        }else if(name == "--X" || name == "X--"){
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}