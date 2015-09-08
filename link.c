#include<stdio.h>
// 静态链表所有节点都是静态的
struct weapon
{
	int price;
	int attack;
	struct weapon * next;
};

int main(){
	struct weapon a,b,c,*head;
	a.price = 100;
	a.attack = 100;
	b.price = 200;
	b.attack = 200;
	c.price = 300;
	c.attack = 300;
	//将a,b,c连接起来
	head = &a;
	a.next = &b;
	b.next = &c;
	c.next = NULL;
	struct weapon *p;
	p = head;
	while(p!=NULL){
		printf("%d,%d\n",p->attack,p->price);
		p = p->next;	
	}
	return 0;
}