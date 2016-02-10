#include <stdio.h>
#include <conio.h>
float minimum (float, float);
main()
{
float a, b, kecil;
printf("Masukkan nilai a : ");
scanf("%f", &a);
printf("Masukkan nilai b : ");
scanf("%f", &b);
kecil = minimum(a, b);
printf("\nBilangan terkecil antara %.f dan %.f adalah %.f\n\n", a, b, kecil);
getch();
}
float minimum(float x, float y)
{
if (x < y)
    return(x);
else
	return(y);
}

