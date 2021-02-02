#include <stdio.h>

#define godzina 60
int main()
{
    int minuty;
    int godziny = 0;
    printf ("Podaj czas w minutach : ");
    scanf ("%d", &minuty);
    
    while (minuty >= godzina)
    {
        minuty -= 60;
        godziny++;
    }
    
    if ( minuty != 0)
        printf ("Jest to %d godzin i %d minut\n",godziny,minuty);
    else
        printf ("Jest to %d godzin\n",godziny);
    return 0;
}
