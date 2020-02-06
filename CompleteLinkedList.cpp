#include<iostream>
#include<stdio.h>
#include<process.h>
#include<stdlib.h>
void l_insert_beg();
void l_insert_end();
void l_insert_pos();
void l_delete_beg();
void l_delete_end();
void l_delete_pos();
void d_insert_beg();
void d_insert_end();
void d_insert_pos();
void d_delete_beg();
void d_delete_end();
void d_delete_pos();
void c_insert_beg();
void c_insert_end();
void c_insert_pos();
void c_delete_beg();
void c_delete_end();
void c_delete_pos();
void cd_insert_beg();
void cd_insert_end();
void cd_insert_pos();
void cd_delete_beg();
void cd_delete_end();
void cd_delete_pos();
void display_s();
void display_d();
void display_c();
void display_cd();
using namespace std;

typedef struct node1
 {
    int info;
    struct node1 *next;
 }NODE1;

typedef struct node2
 {
    int info;
    struct node2 *prev;
    struct node2 *next;
 }NODE2;
 
NODE1 *start1=NULL,*temp1=NULL,*loc1=NULL,*cur1,*last1=NULL;
NODE2 *start2=NULL,*temp2=NULL,*loc2=NULL,*cur2,*last2=NULL;
int value;

NODE1* makenode1()
{
    cur1=(NODE1*)malloc(sizeof(NODE1));
    printf("Enter the value: ");
    scanf("%d",&value);
    cur1->info=value;
    cur1->next=NULL;
    return cur1;
}

NODE2* makenode2()
{
    cur2=(NODE2*)malloc(sizeof(NODE2));
    printf("Enter the value: ");
    scanf("%d",&value);
    cur2->info=value;
    cur2->prev=NULL;
    cur2->next=NULL;
    return cur2;
}

NODE1* lastnode1()  //circular linkedlist
{
    temp1=start1;
    while(temp1->next!=start1)
        temp1=temp1->next;
    last1=temp1;
    return last1;
}

NODE2* lastnode2()   //doubly ll
{
    temp2=start2;
    while(temp2->next!=NULL)
        temp2=temp2->next;
    last2=temp2;
    return last2;
}

NODE2* lastnode3()  //circular doubly
{
    temp2=start2;
    while(temp2->next!=start2)
        temp2=temp2->next;
    last2=temp2;
    return last2;
}

int main()
{
    int ch;
    printf("=================================================================\n");
    printf("***************************LINKED LIST***************************\n");
    printf("=================================================================\n");
    printf("1. Linear Linked List\n");
    printf("2. Doubly Linked List\n");
    printf("3. Circular Linked List\n");
    printf("4. Circular Doubly Linked List\n");
    printf("\nChoose Type Linked List: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("=================================================================\n");
            printf("***********************Linear Linked List************************\n");
            printf("=================================================================\n");
            printf("1. Insert node at beginning\n");
            printf("2. Insert node at end\n");
            printf("3. Insert node at specify position\n");
            printf("4. Delete node from beginning\n");
            printf("5. Delete node from end\n");
            printf("6. Delete node from specify position\n");
            printf("7. Display\n");
            printf("8. Exit\n");
            do
            {
            printf("Enter your choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1: l_insert_beg();
                    break;
            case 2: l_insert_end();
                    break;
            case 3: l_insert_pos();
                    break;
            case 4: l_delete_beg();
                    break;
            case 5: l_delete_end();
                    break;
            case 6: l_delete_pos();
                    break;
            case 7: display_s();
                    break;
            case 8: printf("Thanks for using this amazing program!");
                    exit(0);
                    break;        
            default: printf("Thanks for using this amazing program!");
                    exit(0);
                    break;
        }
        }while(1);
              
        case 2:
            printf("=================================================================\n");
            printf("***********************Doubly Linked List************************\n");
            printf("=================================================================\n");
            printf("1. Insert node at beginning\n");
            printf("2. Insert node at end\n");
            printf("3. Insert node at specify position\n");
            printf("4. Delete node from beginning\n");
            printf("5. Delete node from end\n");
            printf("6. Delete node from specify position\n");
            printf("7. Display\n");
            printf("8. Exit\n");
            do
            {
            printf("Enter your choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1: d_insert_beg();
                    break;
            case 2: d_insert_end();
                    break;
            case 3: d_insert_pos();
                    break;
            case 4: d_delete_beg();
                    break;
            case 5: d_delete_end();
                    break;
            case 6: d_delete_pos();
                    break;
            case 7: display_d();
                    break;
            case 8: printf("Thanks for using this amazing program!");
                    exit(0);
                    break;        
            default: printf("Thanks for using this amazing program!");
                    exit(0);
                    break;
        }
        }while(1);

        case 3:
            printf("=================================================================\n");
            printf("***********************Circular Linked List************************\n");
            printf("=================================================================\n");
            printf("1. Insert node at beginning\n");
            printf("2. Insert node at end\n");
            printf("3. Insert node at specify position\n");
            printf("4. Delete node from beginning\n");
            printf("5. Delete node from end\n");
            printf("6. Delete node from specify position\n");
            printf("7. Display\n");
            printf("8. Exit\n");
            do
            {
            printf("Enter your choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1: c_insert_beg();
                    break;
            case 2: c_insert_end();
                    break;
            case 3: c_insert_pos();
                    break;
            case 4: c_delete_beg();
                    break;
            case 5: c_delete_end();
                    break;
            case 6: c_delete_pos();
                    break;
            case 7: display_c();
                    break;
            case 8: printf("Thanks for using this amazing program!");
                    exit(0);
                    break;        
            default: printf("Thanks for using this amazing program!");
                    exit(0);
                    break;
        }
        }while(1);

        case 4:
            printf("=================================================================\n");
            printf("***********************Circular Doubly Linked List************************\n");
            printf("=================================================================\n");
            printf("1. Insert node at beginning\n");
            printf("2. Insert node at end\n");
            printf("3. Insert node at specify position\n");
            printf("4. Delete node from beginning\n");
            printf("5. Delete node from end\n");
            printf("6. Delete node from specify position\n");
            printf("7. Display\n");
            printf("8. Exit\n");
            do
            {
            printf("Enter your choice: ");
            scanf("%d",&ch);
            switch(ch)
            {
            case 1: cd_insert_beg();
                    break;
            case 2: cd_insert_end();
                    break;
            case 3: cd_insert_pos();
                    break;
            case 4: cd_delete_beg();
                    break;
            case 5: cd_delete_end();
                    break;
            case 6: cd_delete_pos();
                    break;
            case 7: display_cd();
                    break;
            case 8: printf("Thanks for using this amazing program!");
                    exit(0);
                    break;        
            default: printf("Thanks for using this amazing program!");
                    exit(0);
                    break;
        }
        }while(1);
        default: printf("Thanks for using this amazing program!");
                  exit(0);
			      
    }
}
void l_insert_beg()
{
    cur1=makenode1();
    if(start1==NULL)
        start1=cur1;
    else
	{
      cur1->next=start1;
      start1=cur1;
    }
}

void l_insert_end()
{
    cur1=makenode1();
    if(start1==NULL)
        start1=cur1;
    else
    {
        temp1=start1;
        while(temp1->next!=NULL)
            temp1=temp1->next;
        temp1->next=cur1;
    }
}

void l_insert_pos()
{
    int skey;
    cur1=makenode1();
    printf("Enter the position: ");
    scanf("%d",&skey);
    if(start1==NULL)
        start1=cur1;
    else
    {
        int i=1;
        temp1=start1;
        while(i<skey)
        {
            loc1=temp1;
            temp1=temp1->next;
            i++;
        }
        cur1->next=loc1->next;
        loc1->next=cur1;
    }

}

void l_delete_beg()
{
    if(start1==NULL)
        printf("No node in the linkedlist!!!!\n");
    else
    {
        temp1=start1;
        start1=start1->next;
        free(temp1);
    }
}

void l_delete_end()
{
    if(start1==NULL)
        printf("No node in the linkedlist!!!!\n");
    else
    {
        temp1=start1;
        while(temp1->next!=NULL)
        {
            loc1=temp1;
            temp1=temp1->next;
        }
        loc1->next=temp1->next;
        free(temp1);
        free(loc1);
    }
}

void l_delete_pos()
{
    if(start1==NULL)
        printf("No node in the linkedlist!!!!\n");
    else
    {
        int skey;
        printf("Enter the element you want to delete: ");
        scanf("%d",&skey);
        temp1=start1;
        while(temp1->info!=skey)
        {
            loc1=temp1;
            temp1=temp1->next;
        }
        loc1->next=temp1->next;
        free(temp1);
    }
}

void d_insert_beg()
{
    cur2=makenode2();
    if(start2==NULL)
        start2=cur2;
    else
    {
        cur2->next=start2;
        start2->prev=cur2;
        start2=cur2;
    }
}

void d_insert_end()
{
    cur2=makenode2();
    if(start2==NULL)
        start2=cur2;
    else
    {
        last2=lastnode2();
        cur2->prev=last2;
        last2->next=cur2;
    }
}

void d_insert_pos()
{
    int i=1,skey;
    cur2=makenode2();
    printf("Enter the position: ");
    scanf("%d",&skey);
    if(start2==NULL)
        start2=cur2;
    else
    {
        temp2=start2;
        while(i<skey)
        {
            loc2=temp2;
            temp2=temp2->next;
            i++;
        }
        cur2->prev=loc2;
        cur2->next=loc2->next;
        loc2->next->prev=cur2;
        loc2->next=cur2;
    }
}

void d_delete_beg()
{
    if(start2==NULL)
        printf("No node in the linkedlist!!!!\n");
    else
    {
        temp2=start2;
        start2=start2->next;
        start2->prev=NULL;
        free(temp2);
    }
}

void d_delete_end()
{
   if(start2==NULL)
        printf("No node in the linkedlist!!!!\n");
   else
   {
     last2=lastnode2();
     temp2=last2;
     last2->prev->next=NULL;
     free(temp2);
   }
}

void d_delete_pos()
{
     if(start2==NULL)
        printf("No node in the linkedlist!!!!\n");
    else
    {
        int skey;
        printf("Enter the element you want to delete: ");
        scanf("%d",&skey);
        temp2=start2;
        while(temp2->info!=skey)
        {
            loc2=temp2;
            temp2=temp2->next;
        }
        loc2->next=temp2->next;
        loc2->next->prev=temp2->prev;
        temp2->next=temp2->prev=NULL;
        free(temp2);
    }
}

void c_insert_beg()
{
    cur1=makenode1();
    if(start1==NULL)
    {
        start1=cur1;
        cur1->next=start1;
    }

    else
    {
      last1=lastnode1();
      cur1->next=start1;
      start1=cur1;
      last1->next=start1;
    }
}

void c_insert_end()
{
   cur1=makenode1();
    if(start1==NULL)
    {
       start1=cur1;
       cur1->next=start1;
    }
    else
    {
        last1=lastnode1();
        last1->next=cur1;
        cur1->next=start1;
    }
}

void c_insert_pos()
{
    int i=1,skey;
    cur1=makenode1();
    printf("Enter the position: ");
    scanf("%d",&skey);
    if(start1==NULL)
        {
         start1=cur1;
         cur1->next=start1;
        }
    else
    {
        temp1=start1;
        while(i<skey)
        {
            loc1=temp1;
            temp1=temp1->next;
            i++;
        }
        cur1->next=loc1->next;
        loc1->next=cur1;
    }
}


void c_delete_beg()
{
	last1=lastnode1();
    if(start1==NULL)
    {
        printf("No node in the linkedlist!!!!\n");
    }
    if(start1==last1)
	{
	   delete(start1);
	   start1=last1=NULL;
    }    
    else
    {
        temp1=start1;
        start1=start1->next;
        last1->next=start1;
        free(temp1);
    }
}

void c_delete_end()
{
   if(start1==NULL)
        printf("No node in the linkedlist!!!!\n");
   else
   {
     temp1=start1;
     last1=lastnode1();
     while(temp1->next!=last1)
        temp1=temp1->next;
     temp1->next=start1;
     free(temp1);
   }
}

void c_delete_pos()
{
     if(start1==NULL)
        printf("No node in the linkedlist!!!!\n");
    else
    {
        int skey;
        printf("Enter the element you want to delete: ");
        scanf("%d",&skey);
        temp1=start1;
        while(temp1->info!=skey)
        {
            loc1=temp1;
            temp1=temp1->next;
        }
        loc1->next=temp1->next;
        temp1->next=NULL;
        free(temp1);
    }
}

void cd_insert_beg()
{
    cur2=makenode2();
    if(start2==NULL)
      {
        start2=cur2;
        cur2->next=cur2;
        cur2->prev=cur2;
      }
    else
    {
        last2=lastnode3();
        cur2->next=start2;
        start2->prev=cur2;
        start2=cur2;
        cur2->prev=last2;
        last2->next=cur2;
    }
}

void cd_insert_end()
{
    cur2=makenode2();
    if(start2==NULL)
      {
        start2=cur2;
        cur2->next=cur2;
        cur2->prev=cur2;
      }
    else
    {
        last2=lastnode3();
        last2->next=cur2;
        cur2->prev=last2;
        last2=cur2;
        cur2->next=start2;
        start2->prev=cur2;
    }
}

void cd_insert_pos()
{
    int i=1,skey;
    cur2=makenode2();
    printf("Enter the position: ");
    scanf("%d",&skey);
    if(start2==NULL)
    {
        start2=cur2;
        cur2->next=cur2;
        cur2->prev=cur2;
    }
    else
    {
        temp2=start2;
        while(i<skey)
        {
            loc2=temp2;
            temp2=temp2->next;
            i++;
        }
        cur2->next=loc2->next;
        cur2->prev=loc2;
        loc2->next->prev=cur2;
        loc2->next=cur2;
    }
}

void cd_delete_beg()
{
	last2=lastnode3();
    if(start2==NULL)
    {
     printf("No node in the linkedlist!!!!\n");
    }
    if(start2==last2)
    {
    	delete(start2);
    	start2=last2=NULL;
	}
    else
    {
    	temp2=start2;
     	start2=start2->next;
     	start2->prev=last2;
     	last2->next=start2;
     	free(temp2);
   }
}

void cd_delete_end()
{
    if(start2==NULL)
    {
     printf("No node in the linkedlist!!!!\n");
    }
    else
    {
        temp2=last2;
        last2=last2->prev;
        last2->next=start2;
        start2->prev=last2;
        free(temp2);
    }
}

void cd_delete_pos()
{
    if(start2==NULL)
    {
     printf("No node in the linkedlist!!!!\n");
    }
   else
   {
    int skey;
    printf("Enter the element you want to delete: ");
    scanf("%d",&skey);
    temp2=start2;
    while(temp2->info!=skey)
    {
       loc2=temp2;
       temp2=temp2->next;
    }
    loc2->next=temp2->next;
    temp2->next->prev=loc2;
    free(temp2);
   }
}

void display_s()
{
     temp1=start1;
     if(start1==NULL)
        printf(".....empty linkedlist!!!\n");
     while(temp1!=NULL)
     {
         printf("%d -> ",temp1->info);
         temp1=temp1->next;
     }
     printf("\n");
}

void display_d()
{
     temp2=start2;
     if(start2==NULL)
        printf(".....empty linkedlist!!!\n");
     while(temp2!=NULL)
     {
         printf("%d -> ",temp2->info);
         temp2=temp2->next;
     }
     printf("\n");
}

void display_c()
{
     temp1=start1;
     if(start1==NULL)
	 {
        printf(".....empty linkedlist!!!\n");
        return ;
     }
     while(temp1->next!=start1)
     {
         printf("%d -> ",temp1->info);
         temp1=temp1->next;
     }
     printf("%d -> ",temp1->info);
     printf("\n");
}

void display_cd()
{
     temp2=start2;
     if(start2==NULL)
     {
        printf(".....empty linkedlist!!!\n");
        return ;
     }
     while(temp2->next!=start2)
     {
         printf("%d -> ",temp2->info);
         temp2=temp2->next;
     }
     printf("\n");
}
