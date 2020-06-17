#include<stdio.h>
#include<math.h>

int main() {

	int a, b,x,result;
	int gcd;
	srand(time(NULL));
	//a,b를 1~1000까지 수 랜덤으로넣기
	a = rand() % 1000+1;
	b = rand() % 1000+1;
	x = a;
	gcd = b;
	result = x % gcd;
	while (result != 0) {
		x = gcd;
		gcd = result;

		result = x % gcd;
	}
	printf("(%d, %d)최대공약수=%d\n",a,b,gcd);
	return 0;
}