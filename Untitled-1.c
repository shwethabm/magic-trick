
#include<stdio.h>
void main()
{int n,r,i,j,k,temp;
int a[10][10],b[6],c[10][10],e[6];
//test cases
//scanf("%d",&n);

for(k=1;k<=100;k++)
{
//enter the row no
scanf("%d",&r);

//enter the array
for(i=1;i<=4;i++)
        {for(j=1;j<=4;j++)
                scanf("%d",&a[i][j]);
        }
//shifting the row in an array
for(i=1;i<=4;i++)
        b[i]=a[r][i];
 int m;
//printing
//for(i=0;i<4;i++)
//printf("the b array is %d  ",b[i]);
//enter the 2 row no
scanf("%d",&m);

//enter the 2 array 
for(i=1;i<=4;i++)
        {for(j=1;j<=4;j++)
                scanf("%d",&c[i][j]);
  }

//shifting the row in an array
for(i=1;i<=4;i++)
        e[i]=c[m][i];
int count = 0;

//checking for similar
for(i=1;i<=4;i++)
        for(j=1;j<=4;j++)
                if(b[i]==e[j])
                        {count++;
                        temp=b[i];
                        }

//for(i=1;i<=4;i++)
//printf("the b array is %d case %d  ",b[i],k);
//for(i=1;i<=4;i++)
//printf("the b array is %d  case %d",e[i],k);

if(count==1)
{printf("Case #%d:%d\n",k,temp);
}
else if(count==0)
{printf("Case #%d:Volunteer cheated!\n",k);
}
else if(count>1)
{printf("Case #%d:Bad magician!\n",k);
}

}
}

