#include<stdio.h>
#include<string.h>
#include<malloc.h>
int main()
{
char str1[100],str2[100],*temp;
printf("First String:");
gets(str1);
printf("Second String:");
gets(str2);
printf("%s\n",str1);
printf("%s\n",str2);
temp=(char*)malloc(100);
strcpy(temp,str1);
strcpy(str1,str2);
strcpy(str2,temp);
printf("%s\n",str1);
printf("%s\n",str2);
return 0;
}
