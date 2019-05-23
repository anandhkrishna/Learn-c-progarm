#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

 
int main()
{
	int x,y;
	char m[5];
	x=rand();
	y=rand();
	printf("forward :w\nbackward :s\nleft :a\nright :d\n");
	scanf("%s",&m);
    if(strcmp(m,"w")==0)
	{
	    for(int i=0;i<2;++i)
       	{
      		
	       	x=x+i;
		    printf("\t (%d,%d) \n",x,y);
        }
    }
   
    if(strcmp(m,"s")==0)
    {
  	      for (int i=0;i>-2;i--)
          {
  	          	 x=x+i;
  	        	 printf("\t (%d,%d)\n",x,y);
          }
    }
    if(strcmp(m,"a")==0)
    {
    	  for(int i=0;i<2;i++)
    	  {
    	  	     y=y+i;
    	  	     printf("\t (%d,%d)\n",x,y);
    	  }
    }
    if(strcmp(m,"d")==0)
    {
    	  for(int i=0;i>-2;i--)
    	  {
    	  	     y=y+i;
    	  	     printf("\t (%d,%d)\n",x,y);
    	  }
     }
    return 0;
	
}