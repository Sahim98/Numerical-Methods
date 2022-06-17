#include<bits/stdc++.h>
using namespace std;

float randT(float M, float N)
{
    return M + (rand() / ( RAND_MAX / (N-M) ) ) ;  
}


void print_binary(int x) {
	int i;
	for(i=31; i>=0; i--) {
		printf("%d", (x>>i) & 0x1);
		if(i%8 == 0) printf(" ");
		if(i%4 == 0) printf(" ");
	}
	printf("\n");
}



void print_binary_fp(float x) {
	int i;
	unsigned u = *(unsigned*)&x;
	for(i=31; i>=0; i--) {
		printf("%d", (u >> i) & 0x1);
		if(i==32-1) printf(" ");
		if(i==32-9) printf(" ");
	}
}



void print_float(float x) {
	printf("%4gf: 0x%08x (", x, *(int*)&x);
	print_binary_fp(x);
	printf(")\n");
}



int main(int argc, char const *argv[]) {
	 srand(time(0)) ;
  int n = 200;

  vector<float> v(n) ;

  for(int i = 0 ; i < n ; i++){
    v[i] = randT(0,1);
  }

  cout << "Five randomly picked numbers: \n\n" ;
   

  for(int i = 0 ; i < 5 ; i++){
     int x = rand()%200 ;
     float f = v[x];
     cout <<"float value: " <<  f << endl ;
     cout <<"Binary value: ";
	 print_binary_fp(f) ;
	 cout << endl << endl;

  }
  cout << endl ;

}
