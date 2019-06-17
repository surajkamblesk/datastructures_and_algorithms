#include<stdio.h>
#include<string.h>

int count=0;
int str_algo(char t[50],char p[50])
{
int i,j,n,m;
n=strlen(t);
m=strlen(p);
for(i=0;i<n-m;i++)
{   
     count = count+1;
    j=0;
    while(j<m && p[j]==t[i+j]){
        j=j+1;
       
    }
    
    if(j==m)
    return 1;
}
return -1;

}


int main()
{
char t[50],p[50];
printf("enter the string text\n");
gets(t);
printf("enter the string pattern\n");
gets(p);

if(str_algo(t,p)==-1){
    printf("pattern not found\n");
}
else{
    printf("pattern found\n");
}
printf("count = %d\n",count);
}
