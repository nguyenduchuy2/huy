#include <stdio.h>
#include <string.h>
#define MAX_LEN 100                                                                                                                     

int main (){
	char s1 [MAX_LEN], s2[MAX_LEN];
	gets(s1);
	gets(s2);
	strcat(s1, " ");
	strcat(s1, s2);
	printf("%s", s1);
	return 0;
}
