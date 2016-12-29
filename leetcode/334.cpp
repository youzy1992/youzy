#include<stdio.h>
#include<limits.h>
bool isPerfectSquare(int num) {
    if(num ==1)
    {
    	return true;
	}
	int limit = num;
	int i=0;
    while(1)
    {
		
    	for( i=2 ; i< limit; i ++)
    	{
    		int a=num% i;
    		int b=num%(i*i);
    		if (a == 0 && b == 0)
    		{
    			num = num/(i*i);
    			if(num == 1)
    			{
    				return true;
				}
    			break;
			}
			else if(a == 0 && b != 0)
			{
				return false;
			}
			else {
				
				limit = num/i+1;
				if(i >= limit-1)
				{
					return false;
				}
				continue;
			}
		}
	}
    
    
    
}

int main()
{
	int num= 16;
	bool judge = isPerfectSquare(num);
	printf("%d",judge);
	return 0;
}
