#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node* head=NULL;

void free_mem(struct node* a)
{
  if(a == NULL) 
    return;
  else
    {
      free_mem(a->next);
      free(a->next);
    }
  return;
}
struct node* add_head(int value) { 
  struct node* newNode=(struct node*) malloc(sizeof(struct node));
  newNode->data=value;
  newNode->next=head;
  return newNode;
}

void add_tail(int value) {

  struct node* newNode=(struct node*) malloc(sizeof(struct node));
  newNode->data=value;
  newNode->next=NULL;

  struct node* a = head;
  while(a->next != NULL)
    {
      a=a->next;
    }
  a->next=newNode;
}
struct node* remove_head() { 
  if(head == NULL) return NULL;
  struct node* new_head=head->next;
  free(head);
  return new_head;
}

void remove_tail()
{ 
  if(head == NULL) return;
  struct node* a = head;
  while(a->next->next != NULL)
    {
      a=a->next;
    }
  struct node* removed=a->next;
  free(removed);
  a->next=NULL;
}

int main(){
  head=add_head(10); head=add_head(20); head=add_head(30);

  add_tail(100); add_tail(200);
  struct node* a = head;
  while(a != NULL)
    {
      printf("%d, ", a->data);
      a=a->next;
    }

  free_mem(head);
  return 0;
}