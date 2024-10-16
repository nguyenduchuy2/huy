#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int main (){
	char s1[MAX_LEN], s2[MAX_LEN];
	int len1, len2;
	scanf("%s", s1);
	scanf("%s", s2);
	int result  = strcasecmp(s1, s2);
	if (result <0)
	printf ("<");
	else if (result > 0)
	printf (">");
	else
	printf ("=");
	return 0;
}

