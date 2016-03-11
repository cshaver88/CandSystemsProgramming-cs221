//header.h


// include	files	
// constants	
// extern	variables	
// function	prototypes	

#include <stdio.h>
#include <string.h>

struct entry{	
		char*	quote;	
		int	count;	
		struct	entry*	next;	
};	


const int MAXENTRY = 50; 
const int MAXLEN = 100;
// struct entry quote;


struct entry* process_quote(struct entry *q, int words);
struct entry* free_mem(struct entry *q);
void print(struct entry *q);
int exist(struct entry *q, char *quote);