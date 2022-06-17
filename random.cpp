#include<bits/stdc++.h>
using namespace std;

double randT(double M, double N)
{
    srand(time(0));
    return M + (rand() / ( RAND_MAX / (N-M) ) ) ;  
}
int main(){

srand(time(0));

double d = rand()/double(RAND_MAX); // output: d = 0.968993
double range_nmbr = d*1e-9;
printf("%.12lf\n", range_nmbr);
printf("%.12lf\n", randT(1E-9,1E9));
 
}