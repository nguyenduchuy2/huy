#include <stdio.h>
#include <string.h>
#define MAX_LEN 100                                                                                                                     

int main (){
	char s1 [MAX_LEN], s2[MAX_LEN];
	gets(s1);
	gets(s2);
	if (strstr(s1, s2) !=NULL)
	printf("YES");
	else
	printf ("NO");
	return 0;
}
