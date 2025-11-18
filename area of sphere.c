# include <stdio.h>
# define PI 3.141
int main(){
float radius , area;

printf("Enter radius of the sphere:");
scanf("%f" ,&radius);

area = 4 * PI * radius * radius;

printf("The area of the sphere is: %2f\n" ,area);
return 0;
}
