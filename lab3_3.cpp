#include<iostream>
using namespace std;
int main()
{
    float x =6, j = 5;
    float ans = 0, y = 6;
    int i = x;
    while(i < 19){
        j = j+1;
        y = 1/j;
        ans = ans + y;
        i = i + 1;
    }
    cout << ans;
}