#include<stdio.h>
#include<stdlib.h>
int c=0;
struct node
{
int data;
struct node *next;
};
struct node *temp,*head=NULL,*newnode,*new1;
void insert()
{
int x;
newnode=(struct node*) malloc(sizeof(struct node));
printf ("\nENTER THE VALUE: ");
scanf ( "%d",&x);
printf("%d",x);
if(head==NULL)
{
newnode->data=x;
head=newnode;
new1=  head;
temp=newnode;
}
else
{
newnode->data=x;
temp->next=newnode;
temp=newnode;
newnode->next=NULL;
}
c++;
}
void delet()
{
if(head==0)
{
printf("EMPTY");
}
else
{
printf("\nNO  DELETE IS %d\n",head->data);
head=head->next;
new1=head;
c--;
}
}
void display ()
{
printf("\nLINKED LIST\n");
while(new1!=NULL)
{
printf ("%d\n",new1->data);
new1=new1->next;
}
new1=head;
}
void insertF()
{
struct node*newnode;	
newnode=(struct node*) malloc(sizeof(struct node));	
printf("ENTER THE VALUE: ");
int a;
scanf("%d",&a);
printf("%d\n",a);
newnode->data=a;
newnode->next=head;
new1=head=newnode;	
c++;
}

void insertS()
{
if(head==0)
{
printf("EMPTY");
}
else
{
struct node*newnode;
newnode=(struct node*) malloc(sizeof(struct node));
struct node*temp3=head;
printf("\nENTER THE POSITION : ");
int i;
scanf("%d",&i);
printf("%d",i);
int j=1;
for(j=1;j<i-1;j++)
{
temp3=temp3->next;	
}
printf("ENTER THE VAL: ");
int a;
scanf("%d",&a);
printf("%d\n",a);
newnode->data=a;
newnode->next=temp3->next;
temp3->next=newnode;
c++;
}
}
void deletel()
{
if(head==0)	
{
printf("\nEMPTY\n");
}
else{
struct node*temp4=head;
int i;
for(i=1;i<c-1;i++)
{
temp4=temp4->next;
}
temp4->next=0;
free(temp);
temp=temp4;
new1=head;
c--;	
}
}
void delsp()
{
struct node *temp5=head,*temp6=head;
if(head==0)
{
printf("\nEMPTY\n");
}
else {

printf("\nENTER THE POSITION: ");
int pos;
scanf("%d",&pos);
printf ("%d\n",pos);
int i;
for(i=1;i<pos;i++)
{
temp6=temp6->next;
}
for( i=1;i<pos-1;i++)
{
temp5=temp5->next;
}
temp5->next=temp6->next;
c--;
}
}
int ex()
{
printf(" \nI M EXITING ");
return 1;
}
int main()
{
int ch,i=0;
while(i<1)
{
printf("\nMAIN MENU\n\n1.INSERT\n2.DELETE\n3.DISPLAY\n4.INSERT FIRST\n5.INSERT SPECFIC\n6.DELETE LAST\n7.DELETE SPECIFIC\n8.EXIT\n");
scanf("%d",&ch);
printf("YOUR CHOICE IS: %d",ch);
switch (ch)
{
case 1:
insert();
break;
case 2:
delet();
break;
case 3:
display();
break;
case 4:
insertF();
break;
case 5:
insertS();
break;
case 6:
deletel();
break;
case 7:
delsp();
break;	
case 8:
i=ex();
break;
}
}
return 0;
}
