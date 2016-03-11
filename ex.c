#include <stdio.h>
#include <string.h>

// int	my_strlen(char *s);

int main (void){

// int m = 3;
// int n = 100;
// int *p, *q;

// p = &m;

// printf("1.%d\n", *p);

// *p = *p + 1;

// printf("2.%d\n", *p);

// p = &n;

// printf("3.%d\n", *p);

// q = p;

// printf("4.%d\n", *q);

// int a[]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

// int *p= &a[2];

// printf("1..%d\n", a[0]);
// printf("2..%d\n", p[0]);
// printf("3..%d\n", *(a+9));
// printf("4..%d\n", p+9);


// char s[] = "Hello";
// 	int c, i, j;
// 	for (i = 0; (j = strlen(s)-1); i++){
//         	printf("%d %d %s \n",i, j, s);
//   		c = s[i]; s[i] = s[j]; s[j] = c;
// 	}
// 	printf("%s \n", s);
// 	char x[8] = {0, 1, 2, 3, 4, 5, 6};
// 	char *p = x;
// int i = 0;
// i = my_strlen(p);
// printf("Size is: %d\n", i);


// int x2 = 10;
// int *p2 = &x2;
// printf("??? %d\n", *p2);

// char str[100];
// strcpy(str, "tire-bouchon");
// strcpy(&str[4], "d-or-wi");
// strcat(str, "red");

// printf("%lu\n", strlen(str));

// if(strcmp(str, "tired") > 0){
// 	printf("%s\n", str);
// }
// else{
// 	printf("%s\n", "tired");
// }



	// char s1[100], s2[100];
 // strcpy(s1,"computer"); //s1 ?
 // printf("%s\n",s1);
 // strcpy(s2,"science");
 // printf("%s\n",s2);
 // if(strcmp(s1,	s2) < 0)
 //    strcat(s1,s2);
 // else
 //    strcat(s2,s1);
 // printf("%s\n",s1);
 // printf("%s\n",s2);
 // s1[strlen(s1)-6]='\0';
 // printf("%s\n",s1);




//   char *greeting[2]={"Hello","World"};
//   printf("%s \n",greeting[0]);
//   printf("%s \n",greeting[1]);
//   printf("%s \n",*greeting);
//   printf("%s \n",*(greeting+1));



// *names = "Smith";
// printf("%p \n",*names);
//  printf("%s \n",*names);

//    printf("%p \n",*names);
// printf("%p \n",*names+1);


  // int i;
  // for (i = 0; i < argc; i++)
  //   printf("%s\n", argv[i]);

// for (int i = 0; i < argc; i++){
// 	printf("%s\n", *(argv+i));
// }


int a[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

printf("1: %d\n", (*a+1)[4]);
printf("2: %d\n", (*a+2)[3]);
printf("3: %d\n", (*a+7)[1]);
printf("4: %d\n", (*a+1)[7]);


return 0;
}


// int	my_strlen(char *s){
// 	int count = 0;

// 	int i;

// 	count = sizeof(s);


// 	for (i = 0; i < sizeof(s); i ++){
// 		printf("%d\n", s[i]);
// 	}
// 	return count;

// }











