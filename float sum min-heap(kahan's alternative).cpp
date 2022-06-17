/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
 
using ld = long double;
using ll = long long;
#define endl '\n'
#define br cout<<'\n'; 
#define all(a) (a).begin(),(a).end()
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<<endl
 

float get_random()
{
    static std::default_random_engine e;
    static std::uniform_real_distribution<> dis(1e-9, 1e9); // rage 1e-9  - 1e9
    return dis(e);
}


double kahanSum(vector<double> &fa)
{
    double sum = 0.0;
    double c = 0.0;
 
    for(double f : fa)
    {
        double y = f - c;
        double t = sum + y;
        c = (t - sum) - y;
        sum = t;
    }
    return sum;
}


void solve() // minimizing precission loss summation of floationg point numbers
{
    double s = 0 ,s1=0,s2= 0,acc; 

    vector<double> v(30000,0) ;

    for(int i = 0 ; i < 30000;i++){//random floationg point number of size n = 30k
        v[i] = get_random();
    }
  

    priority_queue <double, vector<double>, greater<double> > pq(all(v)); // min-heap

      while(pq.size()>1){
        s1 = pq.top() ;
        pq.pop();
        s2 = pq.top() ;
        pq.pop() ;
        s1 += s2 ;
        pq.push(s1) ;
    }

    s += pq.top() ;

    acc = kahanSum(v) ;

    cout << "acc = " ; prec(10,acc) ;br

    cout << "sum = " ; prec(10,s) ;br
  
}

int main(){
    fast
    int t = 1;
    while(t--)solve() ;
     
}

