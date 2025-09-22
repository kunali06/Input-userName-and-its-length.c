#include<stdio.h>
void main(){
char name[100];
printf("Enter UserName\n");
fgets(name,100,stdin);
int count=0;
for(int i=0;name[i]!='\0';i++)
{
    if(name[i]=='\n')
    {
        break;
    }
    count++;
}
printf("Lenght of Entered UserName : %d\n",count);
getch();
}
