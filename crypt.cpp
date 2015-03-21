#include<iostream>
#include<stdio.h>

using namespace std;

struct key
{
	struct key *next;
	char sec;
}

struct key *create_list(struct key *start);

struct key *insert_beg(struct key *start, char chr);
struct key *insert_end(struct key *start,char chr);

void main()
{
	clrscr();
	struct key *start=NULL;
	start=create_list(start);
	

}	

struct key *create(struct key *start)
{
	char a[5];
	gets(a);
	start=insert_beg(start,a);
	for(i=1;a[i]!='\0';i++)
	{
		start=insert_end(start, a[i]);
	}
	return start;
}

struct key *insert_beg(struct key *start, char chr)
{
	struct key *tmp;
	tmp = (struct key*)malloc(sizeof(struct key));
	tmp->sec=chr;
	tmp->next=start;
	start=tmp;
	return start;
}

struct key *insert_end(strct key *start, char chr)
{
	struct key *p, *tmp;
	tmp=(struct key*)malloc(sizeof(struct key));
	tmp->sec=chr;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=tmp;
	tmp->next=NULL;
	return start;
}	


	
	
