#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int arr[a];
	    for(int i=0;i<a;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    char s[10000000] = "";
	    for(int i=0;i<a;i++)
	    {
	        if(b >= arr[i])
	        {
	            s[i]='1';
	            b-=arr[i];
	        }
	        else 
	        {
	            s[i]='0';
	        }
	        
	    }
	    printf("%s\n",s);
	}

}

