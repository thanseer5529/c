///ZZ_prgm\zzz_main\FILES\C




// #include <stdio.h>
// #include <stdlib.h>
// int a =100;
// int main()
// {
//      printf("hello world \n");
//      printf ("value a is : %d",a);
//      if (a>80)
//      {
//          printf("\nthe value of a is grater than 80 ");
//      }//      return 0;
// }








// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int a=10;
//     float b=1234;
//     int c;
//     printf("enter a number ");
//     scanf("%d",&c);
//     printf("the given number is %f",c);
// }







// #include"stdio.h"
// #include"stdlib.h"
// void main()
// {
//     int a;
//     printf("enter a number  :");
//     scanf("%d",&a);
//     if (a%2==0)
//     {
//         printf("the given number is even\n");
//         if (a==4)
//         {
//             printf("the number is 4");
//         }
//         else
//         {
//             printf("non 4 number is entered");
//         }
//     }
//     else
//     {
//         printf("the given number is odd\n");
//     }
//   }








// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int a=120,b=20;
//     int c;
//     c=(a>b)?a:b;
//     printf("%d",c);
// }






// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int a;
//     printf("enter the mark  :");
//     scanf("%d",&a);
//     switch(a)
//     {
//         case (90):
//           printf("exellent \n");
//           break;
//         case (80):
//           printf("good\n ");
//           break;
//         default:
//            printf("faild\n ");
//     }
// }






// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//     int a;
//     printf("enter the limit ");
//     scanf("%d",&a);
//     int i=0;
//     while (i<=a)
//     {
//         printf("%d\n",i);
//         i=i+1;
//         i++;
//     }
// }




// #include<stdio.h>
// #include<stdlib.h>
// void main()
// {
//    int a=0;
//    for(a;a<=14;a++)
//    {
//        printf("%d\n",a);
//    }
// }





// #include<stdio.h>
// #include<stdlib.h>
// void pr(a,b)
// {
//      printf("thanseer\n");
//      printf("sum=%d",a+b);
// }
// void main()
// {
//     int x,y;
//    printf("enter two values  :");
//     scanf("%d %d",&x,&y);
//     pr(x,y);
// }






// #include<stdio.h>
// void main()
// {
//     int a,i;
//     printf("enter the limit :");
//     scanf("%d",&a);
//     for (i=1;i<=a;i++)
//     {
//         if (i%2==0)
//         {
//             printf("%d is even number \n",i);
//         }
//         else
//         {
//             printf("%d is odd number \n",i);
//         }
//     }
// }







// #include<stdio.h>
// #include<stdlib.h>
// int c,d;
// int add(int a,int b)
// {
//  return a+b;
// }
// void main()
// {
//     printf("enter two number to add  :\n");
//     scanf("%d  %d",&c,&d);
//     printf("sum of %d and %d is %d",c,d,add(c,d));
// }





// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=0;i<=5;i++)
//     {
//         printf("\n");
//         for(j=0;j<=i;j++)
//         {
//             printf(" * ");
//         }
//     }
// }






// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=5;i>=0;i--)
//     {
//         printf("\n");
//         for(j=0;j<=i;j++)
//         {
//             printf(" * ");
//         }
//     }
// }






// #include<stdio.h>
// void main()
// {
//     int n,s=0;
//     printf("how many mark you want to enter  :");
//     scanf("%d",&n);
//     int a[n];
//     for (int i=0;i<n;i++)
//     {
//         printf("enter the mark ");
//         scanf("%d",&a[i]);
//         s=s+a[i];
//     }
//     printf("the avarage of the mark is %d (%d/%d)",s/n,s,n);
// }





// #include<stdio.h>
// void main()
// {
//     int a=100,d=450;
//     float b=123456.78900;
//     printf("'\n%.4s","thanseer");
//     printf("\n%d %.2f",a,b);
//     printf("\n%.5d",a);
//     printf("\n %10d",a);
//     printf("\n %*d",10,a);
//     printf("\n %*f",50,b);
//     printf("\n%*s",65,"thanseer");
//     printf("\n %.5s","abcdefghijkllmnopqrstuvw");
//     printf("\n%50s","00123454678900");
//     printf("\n%.5s","12345678900");
//     printf("\n%*d",50,123456789);
// }





// #include<stdio.h>
// void main()
// {
// int a=999999999;
// printf("%d",a);
// }






// #include<stdio.h>
// void main()
// {
//     char a[5]="thanu";
//     char b='r';
//     char c=250;
//     char d=128;
//     char e=127;
//     char f;
//     printf("%d\n",a);
//     printf("%s\n",a);
//     printf("%c\n",b);
//     printf("%d\n",c);
//     printf("%d\n",d);
//     printf("%d\n",e);
//     printf("enter a character : ");
//     scanf("%d",&f);
//     printf("%d",f);
// }





// #include<stdio.h>
// void main()
// {   char a[100]="tha";
//     printf("size is :%d ",sizeof(a));
//     printf("");
// }






// #include<stdio.h>
// void main()
// {
//     int i,a;
//     printf("how many number you want to print  ");
//     scanf("%d",&a);
//     for (i=0;i<=a;i++)
//     {
//         printf("%d\n",i);
//     }
// }






// #include<stdio.h>
// void main()
// {
//     int a,b,i,j;
//     char s[10];
//     printf("enter the data 'length should be less than 11'!   ");
//     scanf("%s",&s);
//     printf("enter the rows ");
//     scanf("%d",&a);
//     printf("enter the column ");
//     scanf("%d",&b);
//     for (i=1;i<=a;i++)
//      {
//      for(j=1;j<=b;j++)
//      {
//         printf("%s ",s);
//      }
//      printf("\n");
//      }
// }






// #include<stdio.h>
// void main()
// {
//    int a=123,b=1234567890;
//    float c=67890.1234;
//    char d[15]="computer";
//    printf("%d\n",a);
//    printf("%d\n",b);
//    printf("%d\n",b);
//    printf("%50.1f\n",c);
//    printf("%.1s\n",d);
// }






// #include<stdio.h>
// void main()
// {
// printf("thasneer\nkoraliyadan\n");
// printf("12345\b67890\n");
// printf("comp\tuter\n");
// printf("engine\rering\n");
// printf("chali\appadm\n");
// printf("\"eda\"vn\"na\"\n");
// printf("thanseer koraliyadan\n");
// printf("com\"put\"er");
// }






// #include<stdio.h>
// int a,i=0;
// void main()
// {
//     printf("enter a number ");
//     scanf("%d",&a);
//     if (a==0)
//       printf("digits is 1");
//     else
//     {
//     while (a>0)
//     {
//         i=i+1;
//         a=a/10;
//     }
//     printf("digits is %d",i);
//     }
// }







// #include<stdio.h>
// void main()
// {
//     int r=0,a,d;
//     printf("enter a number  :");
//     scanf("%d",&a);
//     while(a>0)
//     {
//         d=a%10;
//         r=d+(r*10);
//         a=a/10;
//     }
//     printf("reverse of the number is %d",r);
// }







// #include<stdio.h>
// void main()
// {
//     int a,d,m=0,s;
//     printf("enter a number ");
//     scanf("%d",&a);
//     s=a;
//     while (a>0)
//     {
//         d=a%10;
//         m=m+(d*d*d);
//         a=a/10;
//     }
//     if(s==m)
//     printf("amstrong");
//     else
//     printf("not amstrong");
// }






// #include<stdio.h>
// void main()
// {
//     int a,d,m=0,i,c,b;
//     printf("enter a number ");
//     scanf("%d",&a);
//     printf("enter a number ");
//     scanf("%d",&b);
//     for (i=a;i<=b;i++)
//     {
//     m=0;
//     c=i;
//     while (c>0)
//     {
//         d=c%10;
//         m=m+(d*d*d);
//         c=c/10;
//     }
//     if(m==i)
//     printf("%d\n",i);
//     }
// }







// #include<stdio.h>
// int fact(int n)
// {
//     if (n!=0)
//     {
//         return n*fact(n-1);
//     }
//     else
//          return 1;
// }
// int sum(int n)
// {
//     if (n!=0)
//         return n+sum(n-1);
//     else
//         return 0;
// }
// void main()
// {
//     int a;
//     printf("enter a number ");
//     scanf("%d",&a);
//     printf("factorial is %d\n",fact(a));
//     printf("sum  is %d",sum(a));
// }








// #include<stdio.h>
// void main()
// {
//     int a,b,i,c;
//     printf("enter the starting point  ");
//     scanf("%d",&a);
//     printf("enter the ending point  ");
//     scanf("%d",&b);
//     while(a<=b)
//     {
//         i=2;
//         while(i<a)
//         {
//         c=1;
//             if(a%i==0)
//             {
//               c=0;
//               printf("%d is not a prime number\n",a);
//               break;
//             }
//         i++;
//         }
//     if(c==1)
//     {
//     printf("%d is a prime\n",a);
//     }
//     a++;
//     }
// }






// #include<stdio.h>
// int fact(int a)
// {
//  if (a!=0)
//    return a*fact(a-1);
//  else
//    return 1;
// }
// void main()
// {
//     float a,f;
//     printf("enter a number ");
//     scanf("%d",&a);
//     f=fact(a);
//     printf("factorial of the number is %d",f);
// }






// #include<stdio.h>
// void main()
// {
//   char c;
//   printf("enter a character  ");
//   scanf("%c",&c);
//   if(c=='a' || c=='e' || c=='i'  || c=='o' || c=='u'|| c=='A' || c=='E' || c=='I'  || c=='O' || c=='U')
//     printf("the given character is VOWEL");
//   else
//    printf("the given character is not VOWEL ");
// }







// #include<stdio.h>
// void main()
// {   int r,c;
//     printf("number of students ");
//     scanf("%d",&r);
//     printf("number of subjects ");
//     scanf("%d",&c);
//     long a[r+1][c];
//     for(int i=0;i<c;i++)
//     {
//         printf("enter the subjects ");
//         scanf("%d",&a[0][i]);
//     }
//     for(int j=1;j<r;j++)
//     {
//         for(int k=0;k<c;k++)
//         {
//             printf("enter the mark of %d student ",j);
//             scanf("%d",&a[j][k]);
//         }
//     }
//        for(int j=0;j<r;j++)
//     {
//         printf("\n");
//         for(int k=0;k<c;k++)
//         {
//             printf("%d ",a[j][k]);
//         }
//     }
// }







// #include<stdio.h>
// void main()
// {
//  int a;
//  printf("enter a number ");
//  scanf("%d",&a);
//  int c=0;
//  for(int i=2;i<=a;i++)
//  {      if (a%i==0)
//        {
//         c=1;
//         printf("not a prime ");
//         break;
//        }
//  }
//  if(c==0)
//  {
//    printf("prime");
//  }
// }






// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("size of madrix : ");
//     scanf("%d %d",&a,&b);
//     long m1[a][b];
//     long m2[a][b];
//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<b;j++)
//         {
//             printf("enter the data to first madrix : ");
//             scanf("%d",&m1[i][j]);
//         }
//     }
//     for(int i=0;i<a;i++)
//     {
//         for(int j=0;j<b;j++)
//        {
//             printf("enter the data to second madrix : ");
//             scanf("%d",&m2[i][j]);
//         }
//     }
//     for(int i=0;i<a;i++)
//     {
//         printf("\n");
//         for(int j=0;j<b;j++)
//         {
//             printf("%d ",m1[i][j]+m2[i][j]);
//             }
//     }
// }







// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("enter a number 1-3  : ");
//     scanf("%d",&a);
//     switch(a)
//     {
//         case 1:
//           printf("\none");
//           break;
//         case 2:
//           printf("\ntwo")  ;
//           break;
//         case 3:
//           printf("\nthree")  ;
//           break;
//         default:
//           printf("\ninvalid sorry  ")  ;
//               }
// }







// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=5;j>=i;j--)
//         {
//             printf(" %d",i);
//         }
//     printf("\n");
//     }
// }










// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=5;i++)
//     {
//        for(int j=0;j<i;j++)
//         {
//           printf("# ");
//         }
//        printf("\n");
//     }
// }






// #include<stdio.h>
// void main()
// {
//     for(int i=5;i>0;i--)
//     {
//         for(int j=1;j<i;j++)
//         {
//             printf(" $ ");
//         }
//     printf("\n");
//     }
// }






// #include<stdio.h>
// void main()
// {
//     for(int i=5;i>=1;i--)
//     {
//         for(int j=i;j>1;j--)
//         {
//             printf(" ");
//         }
//             for(int k=5;k>=i;k--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }






// #include<stdio.h>
// void main()
// {
//      int n,a;
//      printf("enter the number of line");
//      scanf("%d",&a);
//      for(n=1;n<=a;n++)
//      {
//           for(int i=1;i<=a-n;i++)
//           {
//               printf(" ");
//           }
//            for(int j=1;j<=n;j++)
//           {
//               printf(" * ");
//           }
//           printf("\n");
//      }
// }






// #include<stdio.h>
// void main()
// {
//     int n,i,j,k,c=212;//212(106) for full screen and 105(52) for side by side (terminal pattern view)
//     printf("enter a number");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=(c/2)-i;j++)
//         {
//             printf(" ");
//         }
//         for(k=1;k<=(2*i)-1;k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }






// #include<stdio.h>
// void main()
// {
//     int a,r,s=0;
//     scanf("%d",&a);
//     for(a;a>0;a-- && a++)
//     {
//         r=a%10;
//         s=r+s;
//         a=a/10;
//     }
//     printf("sum of digits is %d",s);
// }







// #include<stdio.h>
// void main()
// {
//     int a;
//     int s=0;
//     scanf("%d",&a);
//     for (int i=1;i<=a;a++)
//     s=s+i;
//     printf("%d",s);
// }








// #include<stdio.h>
// void main()
// {
//     int n,p,ch;
//     printf("enter the starting point ");
//     scanf("%d",&n);
//     printf("enter the starting point ");
//     scanf("%d",&p);
//     for(n;n<=p;n++)
//     {
//     ch=0;
//     for (int i=1;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             ch=ch+i;
//         }
//     }
//     if(ch==n && n!=0)
//     printf("%d is a perfect number\n",n);
//     else
//     printf("%d is not a perfect number\n",n);
//     }
// }









// #include<stdio.h>
// int main(void)
// {
//   int c, d, p, q, m, n, k, tot = 0;
//   int fst[10][10], sec[10][10], mul[10][10];
//   printf(" Please insert the number of rows and columns for first matrix \n ");
//   scanf("%d%d", &m, &n);
//   printf(" Insert your matrix elements : \n ");
//   for (c = 0; c < m; c++)
//     for (d = 0; d < n; d++)
//       scanf("%d", &fst[c][d]);
//   printf(" Please insert the number of rows and columns for second matrix\n");
//   scanf(" %d %d", &p, &q);
//   if (n != p)
//     printf(" Your given matrices cannot be multiplied with each other. \n ");
//   else
//   {
//     printf(" Insert your elements for second matrix \n ");
//     for (c = 0; c < p; c++)
//       for (d = 0; d < q; d++)
//         scanf("%d", &sec[c][d] );
//     for (c = 0; c < m; c++) {
//       for (d = 0; d < q; d++) {
//         for (k = 0; k < p; k++) {
//           tot = tot + fst[c][k] * sec[k][d];

//         }
//         mul[c][d] = tot;
//         tot = 0;
//       }
//     }
//     printf(" The result of matrix multiplication or product of the matrices is: \n ");
//     for (c = 0; c < m; c++) {
//       for (d = 0; d < q; d++)
//         printf("%d \t", mul[c][d] );
//       printf(" \n ");
//     }
//   }
//   return 0;
// }






// #include<stdio.h>
// void main()
// {
// int n;
// printf("enter the limit");
// scanf("%d",&n);
// int a=0,b=1,c;
// for(int i=0;i<n;i++)
// {
// printf("%d\n",a);
// c=a+b;
// a=b;
// b=c;
// }
// }







// #include<stdio.h>
// int fact(int r)
// {
//   if (r>=1)
//   return r*fact(r-1);
//   else
//   return 1;
// }
// void main()
// {
//    int a,r,s=0,ch,b1,a1,k;
//   printf("starting ");
//   scanf("%d",&a1);
//   printf("ending ");
//   scanf("%d",&b1);
//   while(a1<=b1)
//   {
//   s=0;
//   ch=a1;
//   k=a1;
//   while(ch>0)
//   {
//     r=ch%10;
//     ch=ch/10;
//     s=s+fact(r);
//     //printf("%d is %d\n",r,fact(r));
//   }
//   if(k==s)
//     printf("%d is a strong number\n",k);
//   //else
//      //printf("%d is not strong\n",k);
//   a1++;
//   }
// }






// #include<stdio.h>
// void main()
// {
// int i,k;
// char a[10];
// printf("enter a string ");
// scanf("%s",&a);
// i=0;
// while(a[i]!='\0')
// {
//     i++;
// }
// printf("%d",i);
// }






// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[10];
//     int j,t;
//     printf("enter a string ");
//     scanf("%s",&a);
//     j=strlen(a)-1;
//     int i=0;
//     while(i<j)
//     {
//     t=a[i];
//     a[i]=a[j];
//     a[j]=t;
//     i++;
//     j--;
//     }
//     printf("%s",a);
// }






// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     char a[10];
//     char b[10];
//     int i=0,l;
//     printf("enter first string ");
//     scanf("%s",&a);
//     printf("enter first string ");
//     scanf("%s",&b);
//     l=strlen(a)+strlen(b);
//     char c[l];
//     while(i<strlen(a))
//     {
//         c[i]=a[i];
//         i++;
//     }
//     i=0;
//     while(i<strlen(b))
//     {
//         c[i+strlen (a)]=b[i];
//         i++;
//     }
//     printf("%s\n",c);
//     printf("%d\n",l);
//     printf("%d\n",strlen(c));
// }






// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     int l1,l2;
//     char a[10];
//     char b[3];
//     scanf("%s",&a);
//     scanf("%s",&b);
//     l1=strlen(a);
//     l2=strlen(b);
//     for(int i=0;i<l2;i++)
//     a[l1+i]=b[i];
//     printf("%s",a);
// }







// #include<stdio.h>
// void main()
// {
//     char a[10];
//     for(int i=0;i<10;i++)
//     {
//         scanf("%s",&a[i]);
//     }
//     for(int i=0;i<10;i++)
//     {
//         printf("%d\n",a[i]);
//     }
// }







// #include<stdio.h>
// struct std
//     {
//         int no;
//         char nm[10];
//         int mr;
//     };
// void main()
// {
//     int n;
//     printf("enter the number of student ");
//     scanf("%d",&n);
//     struct std a[n];
//     for(int i=0;i<n;i++)
//     {
//     printf("enter the roll-number of %d student ",i+1);
//     scanf("%d",&a[i].no);
//     printf("enter the student name of %d student ",i+1);
//     scanf("%s",&a[i].nm);
//     printf("enter the mark obtained of %d student ",i+1);
//     scanf("%d",&a[i].mr);
//     }
//     for(int i=0;i<n;i++)
//     {
//     printf("roll number  %d student is      %d\n",i+1,a[i].no);
//     printf("name of      %d student is      %s\n",i+1,a[i].nm);
//     printf("mark of      %d student in 100  %d \n",i+1,a[i].mr);
//     printf("\n\n");
//     }
// }





// #include<stdio.h>
// void main()
// {
//    int i=1044;
//    int* p;
//    p=&i;
//    printf("%d\n",&i);
//    printf("%d\n",p+2);
//    printf("%d\n",&p);
//    printf("%d\n",*&i);
//    printf("%d\n",*p);
// }






// #include<stdio.h>
// void main()
// {
//     int kk();
//     //kk();
//     printf("%d",kk());
// }
// int kk()
// {
//     printf("hello\n");
//     return 110;
// }







// #include<stdio.h>
// #define pi 3.14
// #define x printf("hi thanseer here\n");
// #define  y for(int i=1;i<=10;i++) printf("%d\n",i);
//  void main()
//  {
//     int n=10,i=1,m=5;
//     printf("%d\n",++n);
//     printf("%d\n",n);
//     printf("%d\n",m++);
//     printf("%d\n",m);
//     i=i++;
//     printf("%d\n",i);
//     printf("%20.2f\n",pi+10);
//     x;
//     y;
//     if(printf("thanu from edavanna\n"))
//     {
//         printf("hi hello\n");
//     }
//     printf("%d",printf("thanu from edavanna\n"));//it return the size of the parameter;
//     printf("%d",printf("tha\n"));
//     for(int i=0;i<=2;i++)
//     {
//         x;
//         y;
//     }
// int a;
// printf("\n\n\n");
// a=10<100;
// printf("%d\n",a);
// printf("%d\n",100==120);
// printf("%d\n",100<200);
//  }






// #include<stdio.h>
// int k=1;
// void main()
// {
// int n,m;double s;float a;long k;short h;char p;m=100;
// printf("%d\n",m==100?1:0);
// printf("int %d\n",sizeof(m));
// printf("double %d\n",sizeof(s));
// printf("float %d\n",sizeof(a));
// printf("long %d\n",sizeof(k));
// printf("int %d\n",sizeof(h));
// printf("char %d\n",sizeof(p));
// }







// #include<stdio.h>
// int k=1;
// int main()
// {
// if(k<=2)
// {
//     k++;
//     printf("%d %d \n",main(),k);
// }
// return 10;
// }






// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//    char a;
//   // a=getch();
//    //printf("tt %c\n",a);
//    printf("tt %c",getch());
// }







// #include<stdio.h>
// void main()
// {
//     int a;
//     char ch[10];
//     printf("enter the data  ");
//     scanf("%s",ch);
//     printf("how many time you want to print  ");
//     scanf("%d",&a);
//     for(int i=1;i<=a;i++)
//     printf("%s\n",ch);
// }






// #include<stdio.h>
// #define x(n) for(int i=1;i<=n;i++)printf("%d ",i)
// void main()
// {
//   int a,b;
//   printf("enter the starting point");
//   scanf("%d",&a);
//   printf("enter the ending point");
//   scanf("%d",&b);
//   for(a;a<=b;a++)
//   {
//   x(a);
//   printf("\n");
//   }
// }





// #include<stdio.h>
// int s;
// void main()
// {
// printf("%d",scanf("%d",&s));
// }





// #include<stdio.h>
// void main()
// {
//   // printf("%d \n",'6');
//   // printf("%c\n",55);
//   for(char i='a';i<='z';i++)
//   printf("ascii value of    %c  is %d\n",i,i);
//   printf("\n\n");
//   for(char i='A';i<='Z';i++)
//   printf("ascii value of    %c  is %d\n",i,i);
//   printf("\n\n");
//   for(int i='0';i<='9';i++)
//   printf("ascii value of    %c  is %d\n",i,i);
// }






// #include<stdio.h>
// #include<tt.h>
// void main()
// {
// tt(15);
// }





// #include<stdio.h>
// void main()
// {
//     int i,j;
//     for(i=1;i<=4;i++)
//     {
//     for(j=1;j<=4;j++)
//     if(i==1 || i==4 || j==1 || j==4)
//     printf(" * ");
//     else
//      printf("   ");
//     printf("\n");
//     }
// }







// #include<stdio.h>
// int main()
// {
//     int a,i=2;
//     printf("enter a number ");
//     scanf("%d",&a);
//     while(i<a)
//     {
//         if(a%i==0)
//         {
//             printf("not a prime");
//             break;
//         }
//         i++;
//     }
//     if(i==a)
//     printf("prime");
// }






// #include<stdio.h>
// void  prime(int a)
// {
//     int i=2;
//     while(i<a)
//     {
//         if(a%i==0)
//         {
//             printf("not a prime number ");
//             break;
//         }
//         i++;
//     }
//     if(i==a || a==1)
//     printf("a prime number ");
// }
// void main()
// {
// int n;
// printf("enter a number ");
// scanf("%d",&n);
// prime(n);
// }






// #include<stdio.h>
// int fact(int a)
// {
//      int f=1;
//      for(int i=1;i<=a;i++)
//       f=f*i;
//       return f;
// }
// void main()
// {
//      int a;
//      printf("enter a number");
//      scanf("%d",&a);
//      printf("factorial of %d is %d",a,fact(a));
// }






// #include<stdio.h>
// int s=0,d,a;
// int sum(int a)
// {
//     while(a>0)
//     {
//     d=a%10;
//     s=d+s;
//     a=a/10;
//     }
//     return s;
// }
// void main()
// {
//     printf("enter a number  ");
//     scanf("%d",&a);
//     printf("sum of digit of you given number %d is %d ",a,sum(a));
// }






// #include<stdio.h>
// int f=1,a;
// int fact(int a)
// {
//     for(int i=1;i<=a;i++)
//     f=f*i;
//     return f;
// }
// void main()
// {
//     printf("enter a number");
//     scanf("%d",&a);
//     printf("the factorial of  %d is %d",a,fact(a));
// }







// #include<stdio.h>
// void main()
// {
//  int a,b,d=0,k;
//  printf("enter the first number ");
//  scanf("%d",&a);
//  printf("eneter the second number");
//  scanf("%d",&b);
//  k=b;
//  if(a!=0 && b!=0)
//  {
//  while(b<=a)
//  {
//     b=b+k;
//     d++;
//  }
//  }
//  if(b==0)
//  printf("not defined");
//  else
//  printf("coeffitient is %d",d);
// }






// #include<stdio.h>
// #include<math.h>
// void main()
// {
//     int a,b;
//     unsigned int s;
//     printf("enter the first number  ");
//     scanf("%d",&a);
//     printf("enter the second number ");
//     scanf("%d",&b);
//     s=abs(-a-b);
//     printf("sum is %d",s);
// }







// #include<stdio.h>
// void swap(int *a,int *b)
// {
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// void main()
// {
//     int a,b;
//     printf("enter first number ");
//     scanf("%d",&a);
//     printf("enter second number ");
//     scanf("%d",&b);
//     printf("before swap : a=%d b=%d\n",a,b);
//     swap(&a,&b);
//     printf("after swap  : a=%d b=%d\n",a,b);
// }






// #include<stdio.h>
// void ch(int *a)
// {
//     *a=*a+10;
//     printf("value in function %d\n",*a);
// }
// void main()
// {
//     int a;
//     printf("enter a number ");
//     scanf("%d",&a);
//     ch(&a);
//     printf("value in main     %d",a);
// }







// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=3;j++)
//         {
//         if(i==1 || i==5 || (i==2 && j==1) || (i==4 && j==3) || i==3)
//             printf("* ");
//         else
//           printf("  ");
//         }
//         printf("\n");
//     }
// }






// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=3;j++)
//         {
//         if(i==1 || i==5 || j==1 || j==3)
//             printf("* ");
//         else
//           printf("  ");
//         }
//         printf("\n");
//     }
// }






// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=3;j++)
//         {
//         if ((i==3 && j==2) || j==3 || j==1)
//             printf("* ");
//         else
//           printf("  ");
//         }
//         printf("\n");
//     }
// }


//j==3 || j==4 || j==5 || j==6 || j==7






// #include<stdio.h>
// void main()
// {
//     for(int i=1;i<=5;i++)
//     {
//         for(int j=1;j<=9;j++)
//         {
//         if ((i==1 && j==5) || (i==2 && (j==4 || j==6)) || (i==3 && (j!=1 && j!=2 && j!=8 && j!=9)) || (i==4 && (j==2 || j==8)) || (i==5 && (j==1 || j==9)))
//         printf("* ");
//         else
//           printf("  ");
//         }
//         printf("\n");
//     }
// }







// #include<stdio.h>
// int nat(int a)
// {
// }
// void main()
// {
//      int i;
//      printf("enter a number");
//      scanf("%d",&i);
//      nat(i);
// }






// #include<stdio.h>
// void  main()
// {
// char a[3];
// scanf("%s",a);
// char *i=&a[0];
// while(*i!='\0')
// {
//     printf("%c \n",*i);
//     i++;
// }
// // printf("\n\n %c",a[4]);
// // printf("%s",a);
// }






// #include<stdio.h>
// void main()
// {
// signed short a=100;
// unsigned short b=-4;
// //printf("%d",sizeof(a));
// // scanf("%d",&a);
// // scanf("%d",&b);
// printf("a %d\t",a);
// printf("b %u\n",b);
// printf("a %u\t",a);
// printf("b %d\n",b);
// }







// #include<stdio.h>
// void main()
// {
//     struct std
//     {
//         int r;
//         char a[5];
//         int m;
//     };
//     int n;
//      printf("how many ");
//      scanf("%d",&n);
//     struct std a[3];
//     for(int i=0;i<=3;i++)
//     {
//         printf("roll-no ");
//         scanf("%d",&a[i].r);
//         printf("name    ");
//         scanf("%s",a[i].a);
//         printf("mark    ");
//         scanf("%d",&a[i].m);
//     }
//     for(int j=0;j<=3;j++)
//     {
//         printf("roll no : %d\t",a[j].r);
//         printf("name    : %s\t",a[j].a);
//         printf("mark    : %d\n",a[j].m);
//     }
// }







// #include<stdio.h>
// void main()
// {
// int a[5],t;
// for(int i=0;i<5;i++)
// scanf("%d",&a[i]);
// for(int i=0;i<5;i++)
// {
//     for(int j=i+1;j<5;j++)
//     {
//         if(a[i]>a[j])
//         {
//             t=a[i];
//             a[i]=a[j];
//             a[j]=t;
//         }
//     }
// }
// for(int i=0;i<5;i++)
// printf("\t %d\n",a[i]);
// }






// #include<stdio.h>
// void main()
// {
//     int a;
//     int k=1;
//     for(int i=1;i<=10;i++,i--)
//     {
//         if(k<=10)
//         printf("%d hello \n",i);
//         k++;
//         if(k>=10)
//         break;
//     }
// }






// #include<stdio.h>
// void main()
// {
//     int a=0;
//     for(int i=1;i<=10;/*i>5 or i++,i-- or i=5*/)
//     {
//     a++;
//     printf("%d hello \n",a);
//     }
// }





// #include<stdio.h>
// void main()
// {
//     for(int i=2147483640;i<=2147483647;i++)//2147483647 is the largest posituve integer number
//     {
//      printf("%d hello \n",i);
//     }
// }






// #include<stdio.h>
// void dis(int *a,int b)
// {
//     for(int i=0;i<b;i++)
//     {
//         printf("%d\n",*a);
//         a++;
//     }
// }
// void main()
// {
//     int a[5]={1,2,3,4,5};
//     dis(&a[0],5);
// }






// #include<stdio.h>
// void main()
// {
//     void sum(int a,int b)
//     {
//         printf("sum is %d",a+b);
//     }
//   int a,b;
//   scanf("%d",&a);
//   scanf("%d",&b);
//   sum(a,b);
// }






// #include<stdio.h>
// void main()
// {
//    int i=0,j=0;
//    printf("before i %d\n",i++);
//    printf("before j %d\n",++j);
//    printf("after  i %d\n",i);
//    printf("after  j %d\n",j);
// }






// #include<stdio.h>
// void main()
// {
// int i=5,j=10;
// i=i++;
// j++;
// printf("%d\n",i);
// printf("%d\n",j);
// }





// #include<stdio.h>
// void main()
// {
//     int x=10,y=20,z;
//     z=x++*--y;// execution precedancy >pre_increament/pre_decreament,post_increament/post_decreament
//     printf("%d %d  %d",x,y,z);
// }







// #include<stdio.h>
// void main()
// {
//     // int x=5;
//     // x = x++ + ++x;
//     // printf("%d",x);
//     int a=2,b=3;
//     b=a++ + b--;
//     a=a-- + ++b;
//     b=++a + --b;
//     printf("%d %d",a,b);
// }







// #include<stdio.h>
// void main()
// {
//     char a[10]="abcd";
//     int i=0;
//     while(a[i]!='\0')
//     {
//         printf("%c",a[i]);
//         i++;
//     }
// }







// #include<stdio.h>
// void main()
// {
// int i;
// char a[10];
// printf("enter a string ");
// scanf("%s",&a);
// i=0;
// while(a[i]!='\0')
// {
//     printf("%c",a[i]);
//     i++;
// }
// printf("    %d",i);
// }







// #include<stdio.h>
// int d;
// int sum(int a)
// {
//     if(a>0)
//     {
//       d=a%10;
//       printf("d =%d \t a =%d \n" ,d,a/10);
//       return a%10+sum(a/10);
//       // return a%10+sum(a/10);
//     }
//     // else
//     // return 10;
// }
// void main()
// {
//     int a;
//     printf("enter a number ");
//     scanf("%d",&a);
//     printf("\nsum of digits is %d",sum(a));
// }





// #include<stdio.h>
// void main()
// {
//     for(;;)
//     {
//         printf("%d hello\n");
//     }
// }




// #include<stdio.h>
// int main(int a)
// {
//     printf("%d thanseer\n",a);
//     printf("%d",main(a+2));
//     return 0;
// }




// #include"thanu.h"
// void main()
// {
// fact("thanseer");
// }





// #include<stdio.h>
// void main()
// {
// int n,*a;
// a=&n;
// int i=1;
// while(i<=100)
// {
// printf(" %d %d %d \n",i,a,*a);
// a++;
// i++;
// }
//printf("");
// printf("%d    ",a);
// a=a+4;
// printf("%d %d  ",a,*a);
//}






// #include<stdio.h>
// #include<string.h>
// void main()
// {
// char a[10]="aaa";
// char b[10]="zz";
// char c[10];
// //strcat(a,b);

// // strncat(a,b,3);

// // strcpy(c,b);

// // strncpy(c,a,3);

// // strcmp(a,b);
// printf("%s %s %d",a,b,strcmp(a,b));
// }








// #include<stdio.h>
// void main()
// {
//     int a[2][2],b[2][2],c[2][2],sum=0;
//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//             scanf("%d",&a[i][j]);
//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//             scanf("%d",&b[i][j]);
//     for(int i=0;i<2;i++)
//         for(int j=0;j<2;j++)
//         {
//             for(int k=0;k<2;k++)
//                 sum=sum+a[i][k]*b[k][j];
//             c[i][j]=sum;
//             sum=0;
//         }
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             printf("%d\t ",c[i][j]);
//         }
//         printf("\n");
//     }
// }







// #include<stdio.h>
// void main()
// {
//     int a=100,*n;
//     n=&a;
//     for(int i=1;i<=10;i++)
//     {
//         printf("%d %d %u %p \n",i,&a,&a,&a);
//         n++;
//     }
// }







// #include<stdio.h>
// void main()
// {
//     int a[5];
//     for(int i=0;i<5;i++)
//     {
//         printf("data %d position of array ",i+1);
//         scanf("%d",&a[i]);
//     }
//     int n;
//     printf("which number you want to search ");
//     scanf("%d",&n);
//     int c=0;
//     for(int i=0;i<5;i++)
//     if(a[i]==n)
//     {
//         c=1;
//         printf("%d located in position %d of you given array",n,i+1);
//         break;
//     }
//     if(c==0)
//     printf("%d is found in you given array",n);
// }







// #include<stdio.h>
// void main()
// {
//     int a[2][2],b[2][2];
//     for(int i=0;i<2;i++)
//     for(int j=0;j<2;j++)
//     scanf("%d",&a[i][j]);
//     printf("\n\n");
//     for(int i=0;i<2;i++)
//     for(int j=0;j<2;j++)
//     scanf("%d",&b[i][j]);
//     for(int i=0;i<2;i++)
//     for(int j=0;j<2;j++)
//     a[i][j]=a[i][j]+b[i][j];
//     printf("\n\n");
//     for(int i=0;i<2;i++)
//     {
//     for(int j=0;j<2;j++)
//     printf("%d\t",a[i][j]);
//     printf("\n");
//     }
// }







// #include<stdio.h>
// void main()
// {
//     int a[2][2],g;
//     for(int i=0;i<2;i++)
//     for(int j=0;j<2;j++)
//     scanf("%d",&a[i][j]);
//     printf("\n\n");
//     g=a[0][0];
//     for(int i=0;i<2;i++)
//     for(int j=0;j<2;j++)
//     if(g<a[i][j])
//     g=a[i][j];
//     printf("largest element in you given madrix is %d",g);
// }







// #include<stdio.h>
// void main()
// {
//     int a[2][2];
//     for(int i=0;i<2;i++)
//     for(int j=0;j<2;j++)
//     scanf("%d",&a[i][j]);
//     printf("\n\n");
//     for(int i=0;i<2;i++)
//     {
//     for(int j=0;j<2;j++)
//     {
//     if(i==j)
//     printf("%d\t",a[i][j]);
//     else
//     printf("\t");
//     }
//     printf("\n");
//     }  
// }







// #include<stdio.h>
// void main()
// {
//   int a[10];
//   for(int i=0;i<10;i++)
//       scanf("%d",&a[i]);
//   for(int i=0;i<10;i++)
//       printf("%d",a[i]);
// }









// #include<stdio.h>
// void main()
// {
//     char m[6];
//     int a[6]={3,6,3,3,2,4};
//     float t=0,c=0;
//     printf("english for communication 1 ");
//     gets(&m[0]);
//     printf("engineering mathematics 1   ");
//     gets(&m[1]);
//     printf("engineering physics 1       ");
//     gets(&m[2]);
//     printf("engineering chemistry 1     ");
//     gets(&m[3]);
//     printf("health & physical education ");
//     gets(&m[4]);
//     printf("computing fundamentals      ");
//     gets(&m[5]);
//     printf("\n\n");
//     for(int i=0;i<6;i++)
//     {
//         switch(m[i])
//         {
//             case ('s'):
//                 t=t+(a[i]*10);
//                 break;
//             case ('a'):
//                 t=t+(a[i]*9);
//                 break;
//             case ('b'):
//                 t=t+(a[i]*8);
//                 break;
//             case ('c'):
//                 t=t+(a[i]*7);
//                 break;
//             case ('d'):
//                 t=t+(a[i]*6);
//                 break;
//             case ('e'):
//                 t=t+(a[i]*5);
//                 break;
//             case ('f'):
//                 t=t+(a[i]*0);
//                 break;
//             default:
//                 printf("%c is not a valid  grade\n",m[i]);
//                 c=1;
//         }
//     }
//     printf("\n");
//     if(c!=1)
//     printf("cgpa is %.2f",t/21);
//     else
//     printf("please enter  valid grades\n");
// }








// #include<stdio.h>
// void main()
// {
//     char a[10]="thanseer";
//     int i=0,l=0;
//     while(a[i]!='\0')
//     {
//     l+=1;
//     i++;    
//     }
//     printf("%d",i);
// }






// #include<stdio.h>
// void main()
// {
//     int len(char *);
//     char a[100];
//     printf("enter a string  ");
//     scanf("%s",&a);
//     printf("%d",len(a));
// }
// int len(char *s)
// {
//     int l=0;
//     while(*s!='\0')
//     {
//         l+=1;
//         s++;
//     }
//     return l;
// }







// #include<stdio.h>
// void main()
// {
//     char a[10],b[10],c[50];
//     printf("enter the first string ");
//     scanf("%s",a);
//     printf("enter the second string ");
//     scanf("%s",b);
//     int i=0,j=0;
//     while(a[i]!='\0')
//     {
//         c[i]=a[i];
//         i++;
//     }    
//     c[i]=' ';
//     i++;
//     while(b[j]!='\0')
//     {
//         c[i]=b[j];
//         j++;
//         i++;
//     }
//     printf("the concatinate string is %s...",c);
// }







// #include<stdio.h>
// void main()
// {
//     char a[100];
//     printf("enter a string ");
//     scanf("%s",a);
//     int i=0,l=0;
//     while(a[i]!='\0')
//     {
//         l+=1;
//         i++;
//     }
//     int j=l-1,t;
//     for(i=0;i<l/2;i++)
//     {   
//         t=a[i];
//         a[i]=a[j];
//         a[j]=t;
//         j--;
//     }
//     printf("%s",a);
// }






// #include<stdio.h>
// void main()
// {
//    char a[20]="computer";
//    int i=0;
//    while(a[i]!='\0')
//    {
//        printf("%c.",a[i]);
//        i++;
//    }
//     printf("\n\n");
// }





// #include<stdio.h>
// void main()
// {
//     struct student
//     {
//         int roll;
//         char name[25];
//         char place[25];
//     };
//     struct student a[2];
//     for(int i=0;i<2;i++)
//     {
//         printf("enter the roll number of %d",i+1);
//         scanf("%d",&a[i].roll);
//         printf("enter the name of %d        ",i+1);
//         scanf("%s",a[i].name);
//         printf("enter the place of %d       ",i+1);
//         scanf("%s",a[i].place);
//     }
//     for(int i=0;i<2;i++)
//     {
//         printf("%d student data\t\t\t",i+1);
//         printf("%d\t",a[i].roll);
//         printf("%s\t",a[i].name);
//         printf("%s\n",a[i].place);
//     }
// }







// #include<stdio.h>
// void main()
// {
//     int a;
//     printf("enter the limit ");
//     scanf("%d",&a);
//     char b[a];
//     scanf("%s",b);
//     printf("%s",b);
// }








// #include<stdio.h>
// void main()
// {
//    int a[2][2][2];
//    for(int i=0;i<2;i++)
//    for(int j=0;j<2;j++)
//    for(int k=0;k<2;k++)
//    scanf("%d",&a[i][j][k]);
// for(int i=0;i<2;i++)
// {
// for(int j=0;j<2;j++)
// {
// for(int k=0;k<2;k++)
// {
// printf("%d\t",a[i][j][k]);
// }
// printf("\t\t\t\t");
// }
// printf("\n");
// }
// }








// #include<stdio.h>
// void main()
// {
//    int a[5],t;
//    for(int i=0;i<5;i++)
//    scanf("%d",&a[i]);
//    printf("\n");
//    for(int i=0;i<5;i++)
//    printf("%d\t",a[i]);
//    printf("\nthe sorted array\n");
//    for(int i=0;i<5;i++)
//    for(int j=i+1;j<5;j++)
//       if(a[i]<a[j])
//       {
//          t=a[i];
//          a[i]=a[j];
//          a[j]=t;
//       }
//    for(int i=0;i<5;i++)
//    printf("%d\n",a[i]);
// }







// #include<stdio.h>
// void main()
// {
//    char a[10];
//    printf("enter a string with maximum length of 10\n");
//    scanf("%s",a);
//    int i=0,j=0,t;
//    while(a[i]!='\0')
//       i++;
//       i--;
//    while(j<i)
//    {
//       t=a[j];
//       a[j]=a[i];
//       a[i]=t;
//       j++;
//       i--;
//    }
//    printf("%s",a); 
// }








// #include<stdio.h>
// #define x(i) int i;
// void main()
// {
//     x(b);
//     printf("%d",b);
// }










// #include<stdio.h>
// void main()
// {   int a,b,i,c=0,j;
//     printf("enter the limit  ");
//     scanf("%d",&a);
//     for(i=2;i<=a;i++)
//     {
//         for(j=2;j<i;j++)
//            if(i%j==0)
//             break;
//         if(i==j)
//         printf("%d\n",i);
//     }    
// }    
    







// #include<stdio.h>
// void main()
// {
//     int n,i,f,j;
//     printf("enter the range ");
//     scanf("%d",&n);
//     printf("numbers are\n");
//     for(i=1;i<=n;i++)
//     {
//         f=0;
//         for(j=1;j<=i;j++)
//         {
//             if(i%j==0)
//             f++;
//         }
//         if(f==2)
//         printf("%d\n",i);
//     }
// }








// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("how many string you want to enter ");
//     scanf("%d",&n);
//     char a[n][10];
//     for(int i=0;i<n;i++)
//     scanf("%s",a[i]);
//     printf("string is ");
//     for(int i=0;i<n;i++)
//     printf("%s\n",a[i]);
// }









// #include<stdio.h>
// void main()
// {   int j=0;
//      //for(int i=0;i<100;i++)
//      //printf(" %d %c\n",i,i);
//      for(char i='a';j<100;i++)
//      {
//      printf("%d %c \n",i,i);
//      j++;
//      }
// }








// #include<stdio.h>
// void main()
// {
// int a[2][2]={{0,0},{0,0}};
// for(int i=0;i<2;i++)
// for(int j=0;j<2;j++)
// for(int k=1;k<=10;k++) 
// {
//     printf("%d %d %d\n",i,j,k);
//     a[i][j]=k;
//     if(a[0][0]+a[0][1]==10 && a[0][0]+a[1][0]==8 && a[1][0]-a[1][1]==4 && a[1][1]+a[0][1]==5)
//     {
//         printf("\n\n\n\n\n");
//         for(int m=0;m<2;m++)
//         {
//         for(int n=0;n<2;n++)
//         printf("%d\t",a[m][n]);
//         printf("\n");
//         }      
//     }
// }
// }








// #include<stdio.h>
// void main()
// {
// float a[2][2]={{0,0},{0,0}};
// for(float i=-10;i<=10;i+=.5)
// for(float j=-10;j<=10;j+=.5)
// for(float k=-10;k<=10;k+=.5)
// for(float l=-10;l<=10;l+=.5)
//     {
//     if(i+j==8 && k-l==6 && i+k==13 && j+l==8)
//     printf("%f\t%f\n%f\t%f\n\n",i,j,k,l);
//    }
// }








// #include<stdio.h>
// void main()
// {
//     char a[100];
//     int i;
//     printf("enter your string  ");
//     scanf("%[^\n]s",a);
//     for(i=0;a[i]!='\0';i++)
//     {}
//     printf("the length of you entered string is %d",i);
// }








// #include<stdio.h>
// void main()
// {
//     char a[100],b[100];
//     printf("enter a string  ");
//     scanf("%[^\n]s",a);
//     int i=0;
//     while(a[i]!='\0')
//     {
//         b[i]=a[i];
//         i++;
//     }
//     b[i]='\0';
//     printf("you entered string is %s \ncopied string is      %s",a,b);
// }







// #include<stdio.h>
// void main()
// {
// int a;
// printf("please enter your array length ");
// scanf("%d",&a);
// int n[a];
// printf("enter the elemenets\n");
// for(int i=0;i<a;i++)
//     scanf("%d",&n[i]);
// int s=0;
// for(int i=0;i<a;i++)
// s=s+n[i];
// printf("sum and average of elemets from you entered array is %d and %d",s,s/a);
// }







// #include<stdio.h>
// void main()
// {
//     int a,b,s;
//     printf("enter the row  ");
//     scanf("%d",&a);
//     printf("enter the column  ");
//     scanf("%d",&b);
//     int n[a][b];
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     scanf("%d",&n[i][j]);
//     printf("enter which element you want to search  ");
//     scanf("%d",&s);
//     int ch=0;
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     if(n[i][j]==s)
//     {
//         ch=1;
//         printf("%d is found",s);
//     }
//     if(ch!=1)
//     printf("%d is not found",s);
// }









// #include<stdio.h>
// void main()
// {
//     int a,b,s;
//     printf("enter the row  ");
//     scanf("%d",&a);
//     printf("enter the column  ");
//     scanf("%d",&b);
//     int n[a][b],r=0,c=0;
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     scanf("%d",&n[i][j]);
//     s=n[0][0];
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     if(s>n[i][j])
//     {
//       r=i;
//       c=j;
//       s=n[i][j];
//     }
//     printf("\n\n\n");
//     for(int i=0;i<a;i++)
//     {
//     for(int j=0;j<b;j++)
//     printf("%d\t",n[i][j]);
//     printf("\n");
//     }
//     printf("smallest is %d located in  %d row of %d column",s,r+1,c+1);      
// }









// #include<stdio.h>
// void main()
// {
//     int a[10],t;
//     for(int i=0;i<10;i++)
//     {
//     printf("enter %d element in to array\t",i+1);
//     scanf("%d",&a[i]);
//     }
//     for(int i=0;i<10/2;i++)
//     {
//         t=a[i];
//         a[i]=a[9-i];
//         a[9-i]=t;
//     }
//     printf("reverse order of you entered array is\n");
//     for(int i=0;i<10;i++)
//     printf("%d \t",a[i]);
// }








///penting

// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     int n;
//     char a[26]="abcdefghijklmnopqrstuvwxyz";
//     printf("enter a number");
//     scanf("%d",&n);
// }







// #include<stdio.h>
// int sum(int *a,int b)
// {
//     int s=0;
//     for(int i=0;i<b;i++,a++)
//     s=s+*a;
//     return s;
// }
// void main()
// {
// int n;
// printf("how many data you want to enter ");
// scanf("%d",&n);
// int a[n];
// for(int i=0;i<n;i++)
// scanf("%d",&a[i]);
// printf("sum of the elements is %d",sum(a,n));
// }







// #include<stdio.h>
// void tt(int a)
// {
//   int m;
//   if(a>1)
//   return a+tt(a-1);
//   else
//   return 1;
// }
// void main()
// {
//     printf("%d",tt(5));
// }








// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("enter the row ");
//     scanf("%d",&a);
//     printf("enter the column ");
//     scanf("%d",&b);
//     int n[a][b];
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     scanf("%d",&n[i][j]);
//     printf("\n\n\n");
//     for(int i=0;i<a;i++)
//     {
//     for(int j=0;j<b;j++)
//     printf("%d\t",*(*(n+i)+j));
//     printf("\n");
//     }
// }







// penting

// #include<stdio.h>
// void disp(int *n,int a,int b)
// {
//     for(int i=0;i<a;i++,n++)
//     {
//     for(int j=0;j<b;j++,n++)
//     printf("%d\t",*(*(n+i)+j));
//     printf("\n");
//     }
// }
// void main()
// {
//     int a,b;
//     printf("enter the row ");
//     scanf("%d",&a);
//     printf("enter the column ");
//     scanf("%d",&b);
//     int n[a][b];
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     scanf("%d",&n[i][j]);
//     disp(&n[0][0],a,b);
// }







// penting 

// #include<stdio.h>
// void disp(int *n,int a,int b)
// {
//     for(int i=0;i<a;i++,n++)
//     {
//     for(int j=0;j<b;j++,n++)
//     printf("%d\t",*n);
//     printf("\n");
//     }
// }
// void main()
// {
//     int a,b;
//     printf("enter the row ");
//     scanf("%d",&a);
//     printf("enter the column ");
//     scanf("%d",&b);
//     int n[a][b];
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     scanf("%d",&n[i][j]);
//     disp(&n[0][0],a,b);
// }









// #include<stdio.h>
// void main()
// {
//     int a,b;
//     printf("enter the row ");
//     scanf("%d",&a);
//     printf("enter the column ");
//     scanf("%d",&b);
//     int n[a][b];
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     scanf("%d",&n[i][j]);
//     dis(n[a][b]);
// }







//pending

// #include<stdio.h>
// int sum(int *n,int a,int b)
// {
//     int s=0;
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     s=s+*(*(n+i)+j);
//     return s;
// }
// void main()
// {
//     int a,b;
//     printf("enter the row ");
//     scanf("%d",&a);
//     printf("enter the column ");
//     scanf("%d",&b);
//     int n[a][b];
//     for(int i=0;i<a;i++)
//     for(int j=0;j<b;j++)
//     scanf("%d",&n[i][j]);
// printf("sum of the elements is %d",sum(&n[0][0],a,b));
// }









//pending

// #include<stdio.h>
// void main()
// {
//     int s=0,n;
//     printf("enter the size of your array ");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//     scanf("%d",&arr[i]);
//     s=s+arr[i];
//     }
//     s=s/n;
//     printf("\nelements which are above %d\n",s);
//     for(int i=0;i<n;i++)
//     if(s<arr[i])
//     printf("%d \t",arr[i]);
// }    







//pending

// #include <stdio.h>
// int n = 3;
// void print(int arr[][n], int m)
// {
// int i, j;
// for (i = 0; i < m; i++)
// for (j = 0; j < n; j++)
// printf("%d ", arr[i][j]);
// }
// int main()
// {
// int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
// print(arr, 3);
// return 0;
// }  







//penting

// #include <stdio.h>
// void print(int arr[][n], int m)
// {
// int i, j;
// for (i = 0; i < m; i++)
// for (j = 0; j < b; j++)
// printf("%d ", n[i][j]);
// }
// void main()
// {
// int a,b;
// printf("enter the row");
// scanf("%d",&a);
// printf("enter the column");;
// scanf("%d",&b);
// int n[a][b];
// for(int i=0;i<a;i++)
// for(int j=0;j<b;j++)
// scanf("%d",&a[i][j]);
// print(arr,b);
// }








// #include <stdio.h>
// int p = 3;
// void print(int n[][p], int m)
// {
// int i, j;
// for (i = 0; i < m; i++)
// {
// for (j = 0; j < p; j++)
// printf("%d ", n[i][j]);
// printf("\n");
// }
// }
// void main()
// {
// int a,b;
// printf("enter the row ");
// scanf("%d",&a);
// printf("enter the column ");;
// scanf("%d",&b);
// int n[a][b];
// for(int i=0;i<a;i++)
// for(int j=0;j<b;j++)
// scanf("%d",&n[i][j]);
// printf("\n\n\n");
// printf("n ....%d\n",n);
// print(n, a);
// }








// #include<stdio.h>
// void main()
// {
// int n;
// printf("how many element you want to enter  ");
// scanf("%d",&n);
// int a[n];
// for(int i=0;i<n;i++)
// scanf("%d",a+i);
// printf("you entered elements are...\n");
// for(int i=0;i<n;i++)
// printf("%d\t", *(a + i));
// }









// #include<stdio.h>
// int  prn(int *m,int r,int c)
// {
// for(int i=0;i<r;i++)
// for(int j=0;j<c;j++)
// printf("%d\t",**(m+i)+j);
// return 0;
// }
// void main()
// {
//    int r,c;
//    printf("enter the rows and column  ");
//    scanf("%d %d",&r,&c);
//    printf("\n\n\n");
//    int m[r][c];
//    for(int i=0;i<r;i++)
//    for(int j=0;j<c;j++)
//    scanf("%d",&m[i][j]);
//    printf("sum is %d",prn(m,r,c));
//    // printf("\n\n%d\t\t%d",*(*m),*(*&m[0][0]));
// }








// #include<stdio.h>
// void main()
// {
//     float w,l,a;
//     printf("enter your written test score\t");
//     scanf("%f",&w);
//     printf("enter your lab exams score\t");
//     scanf("%f",&l);
//     printf("enter your assignments\t\t");
//     scanf("%f",&a);
//     printf("grade of the student is \t%.1f",(w*70)/100+(l*20)/100+(a*10)/100); 
// }
 







// #include<stdio.h>
// void main()
// {
//     float annual;
//     printf("\n\n");
//     printf("enter the annual income\t");
//     scanf("%f",&annual);
//     if(annual<=250000)
//     printf("income tax amount =0");
//     else if(500000>=annual && annual>250000)
//     printf("income tax amount =%.2f",annual*5/100);
//     else if(1000000>=annual && annual>500000)
//     printf("income tax amount =%.2f",annual*20/100);
//     else if(5000000>=annual && annual>1000000)
//     printf("income tax amount =%.2f",annual*30/100);
//     printf("'\n\n");
// }








// #include<stdio.h>
// void main()
// {
//     int a=1;
//     for(int i=0;i<5;i++)
//     {
//     for(int j=0;j<i;j++)
//     {
//     printf("%d\t",a);
//     a++;
//     }
//     printf("\n\n");
//     }
// }








// #include<stdio.h>
// void main()
// {
//     int n;
//     printf("\n\n");
//     printf("enter length of array ");
//     scanf("%d",&n);
//     printf("\n");
//     int a[n],b[n-1];
//     for(int i=0;i<n;i++)
//     {
//         printf("enter a element into %d position of the array   ",i+1);
//         scanf("%d",&a[i]);
//     }
//     printf("\n");
//     for(int i=0;i<n-1;i++)
//     {
//         b[i]=a[i]*a[i+1];
//     }
//     for(int i=0;i<n-1;i++)
//     printf("%d ",b[i]);
//     printf("\n\n");`
// }  








// #include<stdio.h>
// char keys[3][5]={"name","age","place"};
// void main()
// {
//     void getarray(int a);
//     void displayarray(int a);
//     int a,b,c,d;
//     printf("enter the size of array");
//     scanf("%d",&a);
//     char arr[a][3][100];
//     getarray(a);
//     displayarray(a);
// }
// void getarray(int arr)
// {
//     for(int i=0;i<a;i++)
//     {
//         printf("enter the record of student %d",i+1);
//         for(int j=0;j<3;j++)
//         {
//             printf("enter the %s",keys[j]);
//             scanf("%s",arr[i][j]);
//         }
//     }
// }
// void displayarray(int arr)
// {
//    for(int i=0;i<a;i++)
//    {
//        for(int j=0;j<3;j++)
//            printf("%s\t",arr[i][j]);
//        printf("\n");
//    }
// }









// #include<stdio.h>
// void main()
// {
//     char n[3][3][10];
//     for(int i=0;i<3;i++)
//     for(int j=0;j<3;j++)
//         scanf("%s",n[i][j]);
//     printf("\n\n");
//     for(int i=0;i<3;i++)
//     {
//     for(int j=0;j<3;j++)
//         printf("%s\t",n[i][j]);
//     printf("\n\n");
//     }    
// }








// #include<stdio.h>
// void main()
// {
//     int n[2][4];
//     for(int i=0;i<2;i++)
//     scanf("%s",n[i]);
//     for(int i=0;i<2;i++)
//     printf("%s\n",n[i]);`
// }








// #include<stdio.h>
// void main()
// {
//     int a[10]={1,2,3,4,5,6,7,8,9,10};
//     printf("%d %u %d %d",a,a,&a,*a);
// }








// #include <stdio.h>
// void print(int *arr, int m, int n)
// {
//     int i, j;
//     for (i = 0; i < m; i++)
//       for (j = 0; j < n; j++)
//         printf("%d ", *((arr+i*n) + j));
// }
// int main()
// {

//     int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int m = 3, n = 3;
//     print((int *)arr, m, n);
//     return 0;
// }








// #include <stdio.h>
// int main() {
//     int n;
//     printf("enter the size of array: ");
//     scanf("%d",&n);
//     int data[n];
//     printf("Enter elements:\n");
//     for (int i = 0; i < n; ++i)
//         scanf("%d", data + i);
//     printf("You entered: \n");
//     for (int i = 0; i < n; ++i)
//         printf("%d\n", *(data + i));
//     return 0;
// }
  






// #include<stdio.h>
// void main()
//     {
//         int a,b;
// printf("enter two number");
// scanf("%d %d",&a,&b);
// printf("sum of %d and %d is %d",a,b,a+b);
//     }






