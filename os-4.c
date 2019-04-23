#include<stdio.h>
 
int main()
{
    int bt[20],p[20],wt[20],t[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_t;
    printf("Enter number of students:");
    scanf("%d",&n);
 
    printf("\nEnter no. of gifts taken by each student :\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;           //contains process numbers
    }
}
