#include<Stdio.h>
int main()
{
    int a,*p,**pp;
    a=1;
    p=&a;
    pp=&p;
    printf("%d %d %d",a,*p,**pp);
    printf("\n");
    int b[10],*c,**cc;
    int i;
    for(i=0;i<10;i++)
        b[i]=i;
    c=b;
    cc=&c;
    for(i=0;i<10;i++)
        printf("%d %d %d %d",b[i],*b+i,*c+i,**cc+i),printf("\n");
    int d[2][3]={{1,2,3},{4,5,6}},*q[10],**qq;
    int j;
    for(i=0;i<2;i++)
        q[i]=d[i];
    qq=q;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
            {
                printf("%-3d ",**qq+i+j);
            }
            printf("\n");
    }
}
