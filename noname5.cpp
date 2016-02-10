#include <stdio.h>
#include <conio.h>
float nilai_absolut(float);
main()
{
float f1 = -15.5f, hasil;
hasil = nilai_absolut(f1);
printf("Nilai absolut dari %.f adalah %.f\n", f1, hasil);
printf("Nilai absolut dari -6/4 adalah %.f\n");
nilai_absolut(-6/4);
}
float nilai_absolut(float x)
{   
+
if(x < 0)
x = -x;
getch();
}
