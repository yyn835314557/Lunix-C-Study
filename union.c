#include<stdio.h>
struct data{
	int a;
	char b;
	int c;
};
union data1{
	int d;
	char e;
	int f;
};
int main(){
	union data1 data_1;
	
	data_1.e = 'C';
	data_1.f = 10;
	printf("%lu\n",sizeof(struct data));
	printf("%p\n,%p\n,%p\n",&data_1.d,&data_1.e,&data_1.f);
	return 0;
}
