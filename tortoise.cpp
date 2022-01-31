#include<stdio.h>  
  
int z,y,a[400],q[5];  
int f[50][50][50][50];  
  
int main()  
{  
    scanf("%d%d",&z,&y);  
    int i,j,k,t,x;  
    
    for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);  
	} 
    for(i=1;i<=m;i++)
	{
	    scanf("%d",&x);sum[x]++;
	}  
    f[0][0][0][0]=a[1];  
    for(i=0;i<=sum[1];i++)  
        for(j=0;j<=sum[2];j++)  
            for(k=0;k<=sum[3];k++)  
                for(t=0;t<=sum[4];t++)  
                {  
                    if(i>=1)
                      if(f[i][j][k][t]<f[i-1][j][k][t]+a[1+i*1+j*2+k*3+t*4])  
                         f[i][j][k][t]=f[i-1][j][k][t]+a[1+i*1+j*2+k*3+t*4];  
                    if(j>=1)
                      if(f[i][j][k][t]<f[i][j-1][k][t]+a[1+i*1+j*2+k*3+t*4])
                        f[i][j][k][t]=f[i][j-1][k][t]+a[1+i*1+j*2+k*3+t*4];  
                    if(k>=1)
                        if(f[i][j][k][t]<f[i][j][k-1][t]+a[1+i*1+j*2+k*3+t*4])
                        f[i][j][k][t]=f[i][j][k-1][t]+a[1+i*1+j*2+k*3+t*4];  
                    if(t>=1)
                        if(f[i][j][k][t]<f[i][j][k][t-1]+a[1+i*1+j*2+k*3+t*4])
                        f[i][j][k][t]=f[i][j][k][t-1]+a[1+i*1+j*2+k*3+t*4];
                }  
    printf("%d",f[q[1]][q[2]][q[3]][q[4]]);  
    return 0;  
}
