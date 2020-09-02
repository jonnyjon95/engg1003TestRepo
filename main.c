#include <stdio.h>
#include <stdlib.h>

/*int main()
{

    //Task 1

    int k;
    scanf("%d", &k);
    printf("You entered: %d\n", k);

    //Task 2...4 <optional - OnlineGDB>

    //Task 5

    printf("You entered: %d\n", k);

    return 0;
}
*/

//Task 6

/*main()
{
    int k;
    scanf("%d", &k);
    printf("You entered: %d\n", k);
    return 0;

}
*/

//Task 7 <comments>

/* Hello, testing 1..2..3 */
/*int main()
{
    int x;
    x = 5;
    printf("%d\n", x); //%d formats an integer
}
*/

//Task 8

/*int main()
{
    int k;
    printf("Please enter an integer: ");
    scanf("%d", &k);
    k = 2 * k;
    printf("That integer doubled is: %d\n", k);
    return 0;
}
*/

//Task 9

/*int main()
{
    float x, y;
    printf("Enter a number: ");
    scanf("%f", &x); //note the change from %d to %f
    //complete the y = line below
    y = 2 * x + 3 * 5;
    printf("y: %f\n", y);
    return 0;
}
*/

//Task 10

int main()
{
    float x, y;
    printf("Enter a number: ");
    scanf("%f", &x);
    y = 9 * x + 32;
    printf("y = %f\n", y);

    printf("Enter a number: ");
    scanf("%f", &x);
    y = x / (1 - x);
    printf("y = %f\n", y);

    printf("Enter a number: ");
    scanf("%f", &x);
    y = x * x + 2 * x;
    printf("y = %f\n", y);

    printf("Enter a number: ");
    scanf("%f", &x);
    y = (x + 2) / (x - 1);
    printf("y = %f\n", y);

    return 0;
}
