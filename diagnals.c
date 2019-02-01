#include<stdio.h>

//absolute difference of diagnals
 int main()
{
int size;
int i,j,suml,sumr,diff;
suml=sumr=0;
int mat[10][10];
int t,s;

printf("Enter size");
scanf("%d",&size);
t=size;
printf("Enter Elements:");
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        scanf("%d",&mat[i][j]);
    }
}
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        if(i==j)
        {
            suml=suml+mat[i][j];
        }
    }
}
for(i=0;i<size;i++)
{
    for(j=0;j<size;j++)
    {
        sumr=sumr+mat[i][t-1];
        t--;
        break;
    }
    continue;
} 

diff=sumr-suml;
if(diff<0)
diff=-1*diff;
printf("\n\nThe Absolute difference of diagnals is %d\n",diff);
return 0;
}

