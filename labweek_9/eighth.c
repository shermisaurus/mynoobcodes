//To find quadratic roots of an equation
 #include <stdio.h>
 #include <math.h>

 int main()
 {
     float a, b, c;
     float d, r1, r2;

     printf("Enter quadratic equation in the format ax^2+bx+c: ");
     scanf("%f%f%f",&a,&b,&c);
     d = b * b - 4 * a * c;

     if(d < 0){
         printf("Roots are complex numbers.\n");
         return 0;

     }
     else if(d==0){
         printf("Roots are equal.\n");
         r1 = - b / (2 * a);
         printf("Roots of quadratic expression is: %.3f ",r1);

     }
     else{
         printf("Roots are real numbers.\n");
         r1 = ((-b + sqrt(d)) / 2 * a);
         r2 = ((-b - sqrt(d)) / 2 * a);

         printf("Roots of the equation are: %.3f ,%.3f", r1, r2);
         }
    return 0;

 }