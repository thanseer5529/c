#include<stdio.h>
int main()
{  
    int i=-1,j=0,s,e,k=1,c=0;
    char a[100];
    printf("enter string\n");
    scanf("%s",a);
    
    while(a[i+1]!='\0')
    {
          while(a[j]!='\0')      
          {
              if(a[i]==a[j])
              {
                s=i;
                e=j;
                k=0;
                printf("%d \n %d",s,e);
                break;
              }
              j++;
          }
          if(k==0)
          {
              break;
          }
          else{
          i++;
          }
    }    
    if(k==0)
    {
        while(s<e)
    {        
        if(a[s]!='')
        {

        }               
        s++;
    }
     printf(" \n\n count %d",c);
    }  
    else
    {
        printf("-1");
    }
}





