#include<stdio.h>
#define R 20
#define M int main(
#define N(n) n*10
#define ADD(a,b) (a+b)
int add(int a,int b){
	return a+b;
}

typedef int tni;
typedef int *p;//给int* 别名p
M){
	tni a = R;
	printf("a=%d\n",a);
	printf("helloworld\n");
	
	int b=N(a);
	printf("b=%d\n",b);
	int c = add(10.0,10.5);
	printf("c=%d\n",c);
	
	float d = ADD(10.5,20.0);
	printf("d=%f\n",d);
	
	int e = ADD(a,b) * ADD(a,b);
	printf("e=%d\n",e);

	return 0;
}
