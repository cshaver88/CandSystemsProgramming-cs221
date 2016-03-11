
#include <stdio.h>


int i	=20;	
void	g(void)	
{	
	static		int i	=	2;	
		if	(i	>0)	
				{	
						int i	=	30;	
						printf("1: %d\n",	i);	
				}	
		i++;	
		printf("2: %d\n",	i);	
}	

void	f(int i)	
{	
		printf("3: %d\n",i++);	
}	
void	h(void)	
{	
		i++;	
		printf("4: %d\n",i);	
}	
int	main()	
{	
		int i=0;	
f(i);	g();	h();	g();	h();	
printf("5: %d\n",i);	
}	







// int getId();




// int main (void){
// 	printf("1: %d\n", getId());
// 	printf("2: %d\n", getId());
// 	printf("3: %d\n", getId());	
// 	printf("4: %d\n", getId());
// }


// int getId(){
// 	static int n = 0;
// 	return n++;
// }