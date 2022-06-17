#include<bits/stdc++.h>
using namespace std;
#define f(x) x*x*x - x*x + 2
void bisection(float a, float b){
    float c;
    if(f(a)*f(b)>=0){
        cout<<"INVALID GUESS"<<endl;
        return;
    }
    while(b-a > 0.01){
        c = (a+b)/2.0;
        if(f(c) == 0){
            break;
        }
        else if(f(a)<0 && f(c)<0) a = c;
        else b = c;
    }
    cout<<"Solution is "<<c<<endl;
}
int main(){
    bisection(-300, 100);
}
