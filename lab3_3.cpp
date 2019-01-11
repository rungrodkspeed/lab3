#include<iostream>
using namespace std;
int main()
{
    float x = 1;
    float i = x, ans = 1, j = 1;
    while(i <= 69){
        j = ans + 1;
        ans = 1/j;
        i = i + 1;
    }
    cout << ans;
}