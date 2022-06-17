#include<bits/stdc++.h>
using namespace std;
#define f(x) x*x*x - 2*x - 5
void secant(float x0, float x1, int n, float e){
    float f1, f0, x2, f2;

    do{
        f1 = f(x1);
        f0 = f(x0);
        if(f1==f0) {
            cout<<"error";
            break;
        }
        x2 = x1 - (x1-x0)*f1/(f1-f0);
        f2 = f(x2);
        cout<<x2<<" "<< f2<< endl;
        x0 = x1;
        x1 = x2;
        f0 = f1;
        f1 = f2;

    }while(fabs(f2)> e && n--);
}
int main(){
    secant(0, 1, 10, 0.00001);
}
