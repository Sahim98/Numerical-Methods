/// Bismillahir Rahmanir Rahim
#include <bits/stdc++.h>
using namespace std;
 
const int MOD = 1000000007;
using ld = long double;
using ll = long long;
#define endl '\n'
#define F first
#define S second
#define pb push_back
#define br cout<<'\n'; 
#define inf 0x3f3f3f3f
#define infll 0x3f3f3f3f3f3f3f3fLL
#define lcm(a, b) a /__gcd(a, b)*b
#define digit(n) floor(log10(n))+1
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define case(x) cout<< "Case "<<x<< ": ";
#define ver(expression) cout << (expression ? "YES\n" : "NO\n")
#define fast {ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);}
#define prec(precision,value) cout<<fixed<<setprecision(precision)<<value<<endl
 
#define bug(args...) do {cerr << #args << " : "; dbg(args); } while(0)
void dbg () {cerr << endl;}
template <typename T>
void dbg( T a[], int n ) {for(int i = 0; i < n; ++i) cerr << a[i] << ' ';cerr << endl;}
template <typename T, typename ... hello>
void dbg( T arg, const hello &... rest) {cerr << arg << ' '; dbg(rest...);}
 
 
 
template <typename T>ostream& operator<<(ostream& os, const vector<T>& v){
os << "[";for (int i = 0; i < v.size(); ++i) {os << v[i];
if (i != v.size() - 1)os << ", ";}os << "]\n";return os;}
 
template <typename T>ostream& operator<<(ostream& os, const set<T>& v){
os << "[";for (auto it : v) {os << it;if (it != *v.rbegin())os << ", ";}
os << "]\n";return os;}
 

float get_random()
{
    static std::default_random_engine e;
    static std::uniform_real_distribution<> dis(1e-9, 1e9); // rage 0 - 1
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
void solve()
{
    double s = 0 ,s1=0,s2= 0,acc; 

    vector<double> v(30000,0) ;

    for(int i = 0 ; i < 30000;i++){
        v[i] = get_random();
    }
  

    priority_queue <double, vector<double>, greater<double> > pq(all(v));

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
   // cin >> t ;
    while(t--)solve() ;
     
}

