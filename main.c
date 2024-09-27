#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int nombreuser;

srand(time(NULL));
int random_number = rand() % 100 + 1;
printf("Choisisser un nombre entre 1 et 100.\n");
scanf("%d",&nombreuser);

if (nombreuser > random_number) {
	printf("C'est moins !\n");
}
else if (nombreuser < random_number)
{
	printf("C'est plus !\n");
}
do
{
	printf("Choisissez un nombre entre 1 et 100.\n");
	scanf("%d", &nombreuser);

if (nombreuser > random_number) {
	printf("C'est moins !\n");
}
else if (nombreuser < random_number)
{
	printf("C'est plus !\n");
}

}while(nombreuser != random_number);


if (nombreuser == random_number)
{
	printf("Bravo !,vous avez trouvé le bon nombre !\n");
	exit(0);
	
}
}