#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
void backwardsExample()
{
    float fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3.2f \t %10.2f \n", fahr, (5.0/9.0)*fahr-32);
}

int main()
{
    float fahr, celcius;
    int lower, upper, step;

    fahr = LOWER;
    printf("%3s %7s", "farenheight", "celcius");
    printf("\n");
    while(fahr <= UPPER) {
        celcius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.2f \t %10.2f \n", fahr, celcius);
        fahr = fahr + STEP;
    }
    printf("\n\n EXAMPLE \n\n");
    backwardsExample();
    return 0;
}
