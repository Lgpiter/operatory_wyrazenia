#include <stdio.h>

int main()
{
    int iloczyn = 1;
    int suma = 0;
    int od_ilu_zaczynasz;
    printf ("Podaj liczbe pieniedzy od jakiej zaczynasz ");
    scanf ("%d", &od_ilu_zaczynasz);
    
    int pom = od_ilu_zaczynasz + 20;
    
    while (od_ilu_zaczynasz < pom)
    {
        iloczyn = od_ilu_zaczynasz*od_ilu_zaczynasz;
        printf ("%d\n", iloczyn);
        suma += iloczyn;;
        od_ilu_zaczynasz++;
        iloczyn = 1;        
    }
    printf ("Bedziesz mial %d\n",suma);
}
