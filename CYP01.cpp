#include <stdio.h>
void main()
{
	int pixeles_anch, pixeles_alto, izqX, izqY, dereX, dereY;
	float porcentajeX, porcentajeY, porcentaje_anch, porcentaje_alto;

	scanf_s("%i", &pixeles_anch);
	scanf_s("%i", &pixeles_alto);
	scanf_s("%f", &porcentajeX);
	scanf_s("%f", &porcentajeY);
	scanf_s("%f", &porcentaje_anch);
	scanf_s("%f", &porcentaje_alto);

	izqX=porcentajeX*pixeles_anch;
	izqY=porcentajeY*pixeles_alto;
	dereX=pixeles_anch*porcentaje_anch+izqX;
	dereY=pixeles_alto*porcentaje_alto+izqY;

	printf("%i %i %5.2f %5.2f %5.2f %5.2f %i %i %i %i", pixeles_anch, pixeles_alto, porcentajeX, porcentajeY, porcentaje_anch, porcentaje_alto, izqX, izqY, dereX, dereY);

}