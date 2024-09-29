#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int v[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d %d",&a[i],&v[i]);
	    }
	    int max = 0;
	    int scores = 0;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            scores = a[i]*v[j]+v[i]*a[j];
              if(scores > max)
	            {
	            max = scores;
	            }
	        
	        }

	    }
	    printf("%d\n",max);
	}

}

