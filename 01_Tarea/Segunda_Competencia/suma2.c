#include <stdio.h>
#define MSG	"Ingrese el primer numero\n"
#define MSG2	"Ingrese el segundo numero\n"
int main(void){
	int a,b;
	printf(MSG);
	scanf("%d",&a);
	printf(MSG2);
	scanf("%d",&b);
	printf("El resultado de %d + %d es igual a : %d\n",a,b,(a+b));
	return 0;
}


