#include<iostream>
using namespace std;
int main(){
    int num = 3;
    int count = num;
    int k;
    int ans = 0;
    while(count <= 300){
        k = count*count;
        ans = ans + k;
        count = count + 3;
    }
    cout << ans;
    
}