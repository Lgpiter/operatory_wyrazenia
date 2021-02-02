#include <stdio.h>

float podnoszenie_do_szescianu(float n)
{
    n = n*n*n;
    printf ("%f\n",n);
}

int main()
{
    float wejsciowa;
    printf ("Podaj liczbe zmiennoprzecinkowa: ");
    scanf ("%f", &wejsciowa);
    podnoszenie_do_szescianu(wejsciowa);
}
