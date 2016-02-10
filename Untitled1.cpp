#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    char *b,c;
    printf("nama : Achmad Aries Pirnando\n");
    printf("npm  : 13312364\n");
    printf("\n\n===================================");
    printf("\nprogram menentukan kelulusan");
    printf("\n===================================");
    printf("\n\n\nmasukan nama  : ");gets(b);
    printf("\nmasukan nilai : ");scanf("%i",&a);
    if(a>=90)
    {c='A';}
    else if(a>=75)
    {c='B';}
    else if(a>=60)
    {c='C';}
    else if(a>=45)
    {c='D';}
    else
    {c='E';}
    printf("\n===================================");
    printf("\n\nnama        : %s",b);
    printf("\nnilai       : %i",a);
    printf("\nketerangan  : %c",c);
    getch();
}    
    
