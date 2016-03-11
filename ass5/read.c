//read.c

int exist(struct entry *q, char *quote){
	struct entry *current = q;

	while(current != NULL){
		if(current -> quote == quote){
			return 1;
		}
		else{
			current = current -> next;
		}
	}
	return 0;
}