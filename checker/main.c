#include <stdio.h>
#include <stdlib.h>

struct node
{
    int prime_number;
    int prime_count;
    struct node *next;
};

typedef struct node node;

node *get()
{
    return (node *) malloc(sizeof(node));
}

node *search(node *list,int data)
{
    if(list==NULL)
        return NULL;
    while(list!=NULL)
    {
        if(list->prime_number==data)
            return list;
        list=list->next;
    }
    return NULL;
}

node *insert(node *list, int prime,int count)
{
    node *newn=NULL,*temp=list;
    if(list!=NULL )
    {
        newn=search(list,prime);

        if(newn!=NULL)
        {newn->prime_count=newn->prime_count+count;
        return list;}

    }
    newn=get();
    if(newn==NULL)
    {
        printf("ERROR\n\n");
        return list;
    }

    newn->prime_number=prime;
    newn->prime_count=count;
    newn->next=NULL;
    if(list==NULL)
    {

        return newn;
    }

    while(list->next!=NULL && list->prime_number!=prime)
    {
        list=list->next;
    }
    if(list->prime_number==prime)
        {
        free(newn);
        return list;
        }
    list->next=newn;
    return temp;

}
void display(node *list)
{
    if(list==NULL)
    {
        printf("Empty Element\n");
        return ;
    }
    while(list!=NULL)
    {
        printf("%d\t%d\n",list->prime_number,list->prime_count);
        list=list->next;
    }
}

node *prime(node *list)
{
    int i=0;
    for(i=2;i<100;i++)
    {
        if(i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0)
            {
            list=insert(list,i,0);}
        else if(i==2 || i==3 || i==5 || i==7)
            {
            list=insert(list,i,0);}

    }
    return list;
}
node *searchinter(node *list,int data,int count)
{

    if(list==NULL)
        return NULL;
    while(list!=NULL)
    {
        if(list->prime_number==data)
        {
            if(list->prime_count>count)
                list->prime_count=count;

            return list;
        }
        list=list->next;
    }
    return NULL;
}

node *intersect(node *list_a,node *list_b)
{
    node *ilist=NULL,*temp;
    if(list_a == NULL || list_b == NULL)
        return NULL;
    while(list_a!=NULL)
    {
            if(temp=searchinter(list_b,list_a->prime_number,list_a->prime_count))
               {
                   ilist=insert(ilist,temp->prime_number,temp->prime_count);
               }
    list_a=list_a->next;

    }
    return ilist;
}

int compute(node *prime_list,int gcd_a,int gcd_b)
{
    node *list_a=NULL,*list_b=NULL,*intersection_a_b=NULL,*temp=prime_list;
    int a=gcd_a,b=gcd_b,gcd=1,t;
    //display(temp);
    printf("compute %d %d\n",a,b);
    temp=prime_list;
    while(a!=1  && temp!=NULL)
    {
        if(a==1)
            break;
        t=temp->prime_number;
        if(!(a%t))
            {
            list_a=insert(list_a,temp->prime_number,1);
            a=a/t;
            }
        else
        {
            temp=temp->next;
        }
    }
    display(list_a);
    temp=prime_list;
    while(b!=1 && temp != NULL)
    {
        if(b==1)
            break;
        if(!(b%temp->prime_number))
            {
            list_b=insert(list_b,temp->prime_number,1);
            b=b/temp->prime_number;
            }
        else
        {
            temp=temp->next;
        }
    }
    printf("\n\n");
    display(list_b);
    intersection_a_b=intersect(list_a,list_b);
    printf("\n\n");
    display(intersection_a_b);
    while(intersection_a_b!=NULL)
    {
        gcd=gcd*intersection_a_b->prime_count*intersection_a_b->prime_number;
        intersection_a_b=intersection_a_b->next;
    }
    return gcd;
}

int main()
{
    node *list=NULL;
    int gcd,a,b;

    list=prime(list);
    while(1)
    {
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    gcd=compute(list,a,b);
    printf(" \tgcd(%d,%d)\t=\t%d\n",a,b,gcd);
    }
    return 0;
}
