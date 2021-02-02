#include <stdio.h>

int main()
{
    int liczba;
    
    printf ("Podaj liczbe, a komputer wypisze Ci liczby do wartosci o 10 wiekszej wlacznie ");
    scanf ("%d", &liczba);
    
    int powiekszona = liczba + 10;
    
    while (liczba <= powiekszona)
    {
        printf ("%d\n",liczba);
        liczba++;
    }
}
