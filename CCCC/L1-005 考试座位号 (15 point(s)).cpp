#include<stdio.h>
int main()
{
    				
    int n;
    scanf("%d",&n); 
    
    int i;
    long a[n];
    int b[n][2];
    for(i=0;i<n;i++)
        scanf("%ld %d %d",&a[i],&b[i][0],&b[i][1]);
    
    int m;
    scanf("%d",&m);
    				
    int x;//试机号
    int j;//b的行数和a的位数
    for(i=0;i<m;i++)//查询次数
    {
        scanf("%d",&x);
        for(j=0;j<n;j++)
        {
            if(x==b[j][0])
                {
    printf("%ld %d\n",a[j],b[j][1]);
             break;			//break一定在if中
       }
  }
