#include<iostream>
using namespace std;
int main(){
    int num = 10;
    int count = num;
    int k;
    int ans = 0;
    while(count <= 50){
        k = count*count;
        ans = ans + k;
        count = count + 1;
    }
    cout << ans;
    
}