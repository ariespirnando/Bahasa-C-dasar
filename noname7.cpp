#include <stdio.h>
#include <conio.h>
void tukar (int, int);
main()
{
int a,b;
a=88;
b=77;
printf("Nilai sebelum pemanggilan fungsi\n");
printf("a = %d b = %d\n", a, b);
printf("\nNilai setelah pemanggilan fungsi\n");
printf("a = %d b = %d\n", a, b);
tukar(a,b);
getch();
}
void tukar(int x, int y)
{
int z;
z = x;
x = y;
y = z;
printf("\nNilai di akhir fungsi tukar()\n");
printf("x = %d y = %d\n", x, y);
}
