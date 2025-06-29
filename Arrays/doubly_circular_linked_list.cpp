#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
    struct node*prev;
}*head,*tail;
void create_dcll(){
    struct node*newnode;
    head=0;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    if(head==0){
        head=tail=newnode;
        head->next=head;
        head->prev=head;
    }
    else{
        tail->next=newnode;
        newnode->prev=tail;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
    }
}
void insert_at_beg(){
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   printf("Enter data");
   scanf("%d",&newnode->data);
   if(head==0){
    head=tail=newnode;
    newnode->prev=tail;
    newnode->next=head;
   }
   else{
    newnode->next=head;
    head->prev=newnode;
    newnode->prev=tail;
    tail->next=newnode;
    head=newnode;
   }
}
void insert_at_end(){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    if(head==0){
        head=tail=newnode;
        newnode->prev=tail;
        newnode->next=head;
    }
    else{
        newnode->prev=tail;
        tail->next=newnode;
        newnode->next=head;
        head->prev=newnode;
        tail=newnode;
    }
}
void insert_at_position(){
    struct node *newnode,*temp;
    int pos,i=1,l,temp=head;
    printf("Enter pos");
    scanf("%d",&pos);
    l=getlength();
    if(pos<1||pos>l){
        printf("invalid position");
    }
    else if(pos==1){
        insert_at_beginning();
    }
    else{
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data");
        scanf("%d",&newnode->data);
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next->prev=newnode;
        temp->next=newnode;
    }

}
void delete_from_beginning(){
    struct node *temp;
    temp=head;
    if(head==0){
        printf("list is empty");
    }
    else if(head->next==head){
        head=tail=0;
        free(temp);
    }
    else{
        head=head->next;
        head->prev=tail;
        tail->next=head;
        free(temp);
    }
}
void delete_from_end(){
    struct node *temp;
    temp=tail;
    if(head==0){
        printf("List is empty");
    }
    else if(head->next==head){
        head=tail=0;
        free(temp);
    }
    else{
        tail=tail->prev;
        tail->next=head;
        head->prev=tail;
        free(temp);
    }
}
void delete_from_position(){
    struct node *temp;
    int pos,i=1,l;
    temp=head;
    printf("Enter position");
    scanf("%d",&pos);
    l=getlength();
    if(pos<1||pos>l){
        printf("invlaid position");
    }
    else if(pos==1){
        delete_from_beginning();
    }
    else{
        while(i<pos){
            temp=temp->next;
            i++;
        }
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        if(temp->next==head){
            tail=temp->prev;
            free(temp);
        }
        else{
            free(temp);
        }
    }
}

void display(){
    struct node *temp;
    temp=head;
    if(head==0){
        printf("list is empty");
    }
    else{
        while(temp!=tail){
            printf("%d",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}


int main()