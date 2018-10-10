#include <stdio.h>
int main()  
{  
    int sidea, sideb, sidec; //are three sides of a triangle  
  
    /* 
     * Reads all sides of a triangle 
     */  
    printf("Input three sides of triangle: ");  
    scanf("%d %d %d", &sidea, &sideb, &sidec);  
  
    if(sidea==sideb && sideb==sidec) //check whether all sides are equal  
    {  
        printf("This is an equilateral triangle.\n");  
    }  
    else if(sidea==sideb || sidea==sidec || sideb==sidec) //check whether two sides are equal  
    {  
        printf("This is an isosceles triangle.\n");  
    }  
    else //check whether no sides are equal  
    {  
        printf("This is a scalene triangle.\n");  
    }  
  
    return 0;  
} 