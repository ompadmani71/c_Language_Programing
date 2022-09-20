#include<stdio.h>

  main()
  {
      int x,y,ans;
	  
	  printf("Enter x and y values");
	  scanf("%d %d",&x ,&y);
	  
	  ans = x * x * x - 3 * x * x * y + 3 * x * y * y - y * y * y;
	  printf("ans = %d",ans);  	
  	
  	
  }
