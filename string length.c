# include <stdio.h>
# include <string.h>

int main(){
char name [30];
float age;

printf("Enter your name:");
fgets(name,sizeof(name),stdin);
name[strcspn(name,"\n")]='\0';

printf("Enter your age :");
scanf("%f",&age);

printf("Hello %s you are %.1f years old.\n",name,age);

return 0;
}
