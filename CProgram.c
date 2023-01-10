#include<stdio.h>
void main(){
int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
#include<stdio.h>
void main(){
int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
//Q WAP to read and print element in array?

#inclide<stdio.h>
void main()
 int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
//Q WAP to print negative element in an array?
#inclide<stdio.h>

 int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        printf("%d",a[i]);
    }

#inclide<stdio.h>

 int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
//Q WAP to find maximum and minimum element from an array?
#inclide<stdio.h>

  int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
     for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("%d %d",max,min);
//Q  WAP to print second largest element of an array/
#inclide<stdio.h>

 int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int max1=a[0],max2=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max1)
        {
            max2=max1;
            max1=a[i];
        }
        else if(a[i]>max2 && a[i]<max1);
        {
            max2=a[i];
        }
    }
    printf("%d",max2);
//Q WAP TO PRINT TOTAL COUNT OF EVEN AND ODD ELEMENT IN AN ARRAY?
#inclide<stdio.h>

 int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int even=0,odd=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
           odd++; 
        }
    }
    printf("%d %d",even,odd);
     
// WAP to print count of negative element of an array?
#inclide<stdio.h>

 int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int negative=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
           negative++;
        }
       
    }
    printf("%d",negative);
// WAP TO COPY AN ARRAY ELEMENT TO ANOTHER ARRAY?
#inclide<stdio.h>

  int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int a1[n];
    for(int i=0;i<n;i++)
    {
       a1[i]=a[i];
       
    }
    for(int i=0;i<n;i++)
    {
      printf("%d ",a1[i]);
       
    }
   
   
   Q WAP to print 2d array?
#include<stdio.h>
ANS
   int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
       }
       printf("\n");
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d ",a[i][j]);
           
       }
       printf("\n");
       
   }
Q WAP to substract to matrix?
#include<stdio.h>

ANS  int n,m;
   scanf("%d %d",&n,&m);
   int a1[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a1[i][j]);
       }
       printf("\n");
   }
    
   
   int a2[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a2[i][j]);
       }
       printf("\n");
   }
   int a3[n][m];
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           a3[i][j]=a2[i][j]-a1[i][j];
           
       }
       
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d ",a3[i][j]);
           
       }
       printf("\n");
       
   }
   
Q WAP TO ADD TO MATRIX?
#include<stdio.h>

ANS  int n,m;
   scanf("%d %d",&n,&m);
   int a1[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a1[i][j]);
       }
       printf("\n");
   }
    
   
   int a2[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a2[i][j]);
       }
       printf("\n");
   }
   int a3[n][m];
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           a3[i][j]=a2[i][j]+a1[i][j];
           
       }
       
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d ",a3[i][j]);
           
       }
       printf("\n");
       
   }
       
Q WAP TO find whether matrix is equal or not ?
#include<stdio.h>

ANS int n,m;
   scanf("%d %d",&n,&m);
   int a1[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a1[i][j]);
       }
       printf("\n");
   }
    
   
   int a2[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a2[i][j]);
       }
       printf("\n");
   }
   int flag=0;
  for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if(a1[i][j]==a2[i][j])
           {
              flag=1;
               
           }
           else
           {
               flag=0;
               break;
           }
               
           
       }
       
   }
   if(flag=1)
   {
       printf("equal");
       
   }
   else
   printf("not equal");
}

Q WAP to find trace of matrix?
#include<stdio.h>

ANS int n,m;
   scanf("%d %d",&n,&m);
   int a1[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a1[i][j]);
       }
       printf("\n");
   }
    
   int sum=0;
   
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           if (i==j)
           {
               sum=sum+a1[i][j];
               
           }
       }
       
       
   }
   printf("%d",sum);

Q WAP a program to print sum of diagonal element of matrix?
#include<stdio.h>

ANS  int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
  int sum=0;
   for(int i=0;i<n;i++)
   {
       
       
           sum=sum+a[i][i];
        
       
   }
   printf("%d",sum);
Q WAP to print sum of minor dioagonal element?
#include<stdio.h>

ans int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
  int sum=0;
   for(int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
           if(i+j == ((n+1)-2))
            {
                sum += a[i][j];
            }
       }
       
   }
   printf("%d",sum);

Q WAP to print upper tringular matrix ?
#include<stdio.h>

ANS  int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
 
  for(int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
          
            if(i>=j)
            {
                printf("%d ",a[i][j]);
            }
            else
               printf("%d ",0);
               
       }
       printf("\n");
       
   }
   
Q WAP to print lower tringular matrix ?
#include<stdio.h>

ans int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
 
  for(int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
          
            if(j>=i)
            {
                printf("%d ",a[i][j]);
            }
            else
            printf("%d ",0);
               
       }
       printf("\n");
       
Q WAP to print sum of lower tringular matrix?
#include<stdio.h>

ans int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   int sum=0;
  for(int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
          
            if(j>=i)
            {
                sum=sum+a[i][j];
            }
       }
       
   }
   printf("%d",sum);

Q WAP to print sum of upper trianguar matrix?

ans
#include<stdio.h>

 int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   int sum=0;
  for(int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
          
            if(j<=i)
            {
                sum=sum+a[i][j];
            }
       }
       
   }
   printf("%d",sum);
   
Q WAP to transpose of a matrix?
ans
#include<stdio.h>

 int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   printf("\n");
  
   int transpose[n][m];
   
  for(int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
          
            transpose[j][i]=a[i][j];
       }
       
   }
    for(int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
           printf("%d",transpose[i][j]);
       }
       printf("\n");
   }
Q WAP to print whether matrix is sparse or not ?
ans
#include<stdio.h>

 int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   printf("\n");
  
  int count=0,count1=0;
  for(int i=0;i<n;i++)
   {
       for (int j=0;j<m;j++)
       {
          
          if(a[i][j]==0)
          count++;
          else
          count1++;
       }
       
   }
   if(count>count1)
   printf("sparse matrix");
   else
   printf("not sparse matrix");
Q WAP to print whether matrix is identity matrix or not?
ans
#include<stdio.h>

 int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   printf("\n");
  int flag=0;
  
  for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
          if (i==j && a[i][j]==1 )
          flag=1;
          else if (i!=j && a[i][j]==0 )
           flag=1;
           else
           {
               flag=0;
               break;
           }
              
          
      }
       
   }
   if(flag=1)
   printf("identity matrix");
   else
   printf("not identity matrix");
   
Q WAP to print matrix is symmetric or not?
ans
#include<stdio.h>

  int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   printf("\n");
 int flag=0;
  
  for(int i=0;i<n;i++)
   {
      for(int j=0;j<m;j++)
      {
          if (a[i][j]==a[j][i])
          flag=1;
          else
          {flag=0;
          break;}
              
          
      }
       
   }
   if(flag=1)
   printf("summetric matrix");
   else
   printf("not symmetric matrix");
Q WAP to sclar product in a matrix?
ANS 

#include<stdio.h>
 int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   int scalar_number;
   scanf("%d",&scalar_number);
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           a[i][j]=scalar_number*a[i][j];
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
Q wap to print multiple of two matrix?
ans

#include<stdio.h>
  int n,m;
   scanf("%d %d",&n,&m);
   int a[n][m];
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a[i][j]);
           
       }
   }
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a[i][j]);
       }
       printf("\n");
   }
   int a1[n][m];
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           scanf("%d",&a1[i][j]);
           
       }
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a1[i][j]);
       }
       printf("\n");
   }
    int a2[n][m];
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           a2[i][j]=a[i][j]*a1[i][j];
           
       }
   }
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++)
       {
           printf("%d",a2[i][j]);
       }
       printf("\n");
   }

   
