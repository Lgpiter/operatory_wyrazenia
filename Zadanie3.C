#include <stdio.h>

#define tydzien 7

int main()
{
    int dni;
    printf ("Podaj liczbe dni ");
    scanf ("%d", &dni);
    int tygodnie = 0;
    
    while (dni >= tydzien)
    {
        dni -= 7;
        tygodnie++;
    }
    
    if (dni == 0)
        printf ("Są to %d tygodnie\n",tygodnie);
    else
        printf ("Jest to %d tygodni i %d dni\n",tygodnie,dni);
}
