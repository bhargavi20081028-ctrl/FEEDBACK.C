#include<stdio.h>
int main()
{
int ch;
FILE *fp;
fp=fopen("data.txt","w");
fprintf(fp,"first i though Cprogram is soo easy but it is little bit tough i felt array too tough to learn i felt argument is easier to learn");
fclose(fp);
fp=fopen("data.txt","a");
fprintf(fp,"For sometimes i can't understand the sir language and also i can't understand his handwriting but if i ask any doubts rectify it immediately");
fclose(fp);
fp=fopen("data.txt","r");
while((ch=fgetc(fp))!=EOF)
{
printf("%c",ch);
}
fclose(fp);
return 0;
}