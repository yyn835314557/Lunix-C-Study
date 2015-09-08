#include<stdio.h>
#include<sys/malloc.h>
// 静态链表所有节点都是静态的
struct weapon
{
	int price;
	int attack;
	struct weapon * next;
};

struct weapon *create()
{
	struct weapon *head,*p1,*p2; // 指向新创建的节点，上一个节点；
	int n = 0;// 当前节点的个数
	p1=p2=(struct weapon*)malloc(sizeof(struct weapon));
	scanf("%d,%d",&p1->price,&p1->attack);
	head = NULL;
	while(p1->price!=0){
		n++;
		if(n==1){
			head = p1;
		}else{
			p2->next = p1;
		}
		p2=p1;
		p1 = (struct weapon*)malloc(sizeof(struct weapon));
		scanf("%d,%d",&p1->price,&p1->attack);
	}
	p2->next = NULL;
	return(head);
};
int main(){
	struct weapon *p;
	p=create();
	printf("%d,%d\n",p->price,p->attack);
	return 0;
}