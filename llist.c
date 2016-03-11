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

void insert(int value)
{
  struct node *curr, *prev, *newNode;
  newNode = (struct node *) malloc(sizeof(struct node));
  newNode->data=value;
  newNode->next=NULL;
  if(head == NULL){
    // newNode->next = head;
    head = newNode;
  }
  prev=head;
  curr=prev->next;
  // if(prev->data >= newNode->data){
  //   head = newNode;
  //   newNode->next = prev;
  // }
  while(curr != NULL){
    // printf("Here\n");
    if(curr->data > newNode->data){
      // printf("%d\n", curr->data);
      prev->next = newNode;
      newNode->next = curr;
    }
  }

}
void print_list()
{
  struct node* a;
  a = head;
  printf("list: ");
  while(a != NULL)
    {
      printf("%d, ", a->data);
      a=a->next;
    }
  printf("\n");
}
int main()
{
  printf("insert 10\n");
  insert(10); 
  print_list();

  printf("insert 5\n");
  insert(5); 
  print_list();

  printf("insert 7\n");
  insert(7);
  print_list();

  printf("insert 20\n");
  insert(20);
  print_list();

  free_mem(head);
  return 0;
}
