#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node* head=NULL;

void insertB(int v, int where);
void Print(struct node* list_p);

int main(){
	// struct node* stuff;

	insertB(2, 0);
	Print(head);

	insertB(4, 2);
	Print(head);

	insertB(6, 4);
	Print(head);

	insertB(8, 6);
	Print(head);

	return 0;
}

void Print(struct node* list_p) {
   struct node* curr_p = head;

   printf("list = ");

   while (curr_p != NULL) {
      printf("%d ", curr_p->data);
      curr_p = curr_p->next;
   }
   printf("\n");
}  /* Print */

void insertB(int v, int where) {
	struct node* mine = (struct node *) malloc(sizeof(struct node));
	mine->data = v;
	mine -> next = NULL;
	if (head == NULL){
		head = mine;
	}
	struct node *curr, *prev;
	prev = head;
	curr = prev -> next;
	while (curr != NULL){
		if(curr->data == where){
			prev -> next = mine;
			mine -> next = curr;
		}
	}
} 