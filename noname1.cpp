#include <stdio.h>
#include <conio.h>
void cetak_pesan(void);
main()
{
int i;
for(i=1; i<=5; i++)
cetak_pesan();
printf("\n");
}
void cetak_pesan()
{
printf("Cetak pesan ini\n");
getch();
}