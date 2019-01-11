#include<iostream>
using namespace std;
int main()
{
    float x, j = 2;
    float ans = 0, y = 2;
    int i = x;
    while(i < 69){
        j = j+1;
        y = 1/j;
        ans = ans + y;
        i = i + 1;
    }
    cout << ans;
}