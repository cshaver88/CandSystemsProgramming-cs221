//main.c

int main(void){
  struct entry quote;
  int quoteNo = 0;



  do{
    printf("Please enter a Quote or Q to quit. \n");
    scanf("%c", &quote.quote);
    if(quote != Q && strlen(quote.quote) < MAXLEN 
      && !exist(quote.quote) && ++quoteNo < MAXENTRY){
      process_quote(quote.quote);
    }
  } while (input != Q);

  free_mem(tail);

  return 0;

}
