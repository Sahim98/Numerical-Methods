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
	printf("\n# Integer representation\n");
	printf("%d (int) in binary:\n", 1);
	print_binary(1);

	printf("\n# Float representation\n");
	print_float(-0.0f);
	print_float(1.0f); //1.0 * 2^0 -> Exp=0, E=0+127
	// constants INFINITY and NAN found in math.h
	print_float(INFINITY);
	print_float(-NAN);

	printf("\n# Exploring math\n");
	printf("%g\n", 3.14 +  1e100 - 1e100);
	printf("%g\n", 3.14 + (1e100 - 1e100));
	printf("Not associative!\n");

	printf("%.20g\n", 100 * (0.1 + 0.2) );
	printf("%.20g\n", (100 * 0.1) + (100 * 0.2) );
	printf("Not distributive!\n");
  

}
