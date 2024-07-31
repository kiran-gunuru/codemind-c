#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    int i,flag=0;
    for(i=0;str1[i]!=NULL;i++)
    {
        if(str1[i]==str2[i])
        {
           flag++;
        }
    }
    if(flag==strlen(str1))
    {
        printf("Strings are Equal");
    }
    else
      {
          printf("Strings are not Equal");
      }
    
    
}