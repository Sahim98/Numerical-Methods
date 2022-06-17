#include<bits/stdc++.h>
using namespace std;
#define f(x) cos(x) - 3*x + 1
#define g(x) (cos(x) + 1)/3

void fixed_point(int n, float x0, float e){
    float x1;
    do{
        x1 = g(x0);
        cout<<x1<<" "<<f(x0)<< " "<<f(x1)<<endl;
        x0 = x1;
    } while(n-- && fabs(f(x0))> e);
}
int main(){
    int n;
    fixed_point(100, 2, 0.0001);
}
