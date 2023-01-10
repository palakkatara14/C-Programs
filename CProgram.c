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
   
