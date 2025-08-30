#include <iostream>
#include <string>
using namespace std;

int main(){
    long long n;
    cin >> n;
    string s = to_string(n);
    for(int i = 0; i < s.size(); i++){
        int num = s[i] - '0';
        if(num == 9 && i == 0){
            cout << 9;
        }else if(num > 9 - num){
            cout << 9 - num;
        }else{
            cout << num;
        }
    }
    return 0;
}