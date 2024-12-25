#include <stdio.h>
#include <unistd.h> // For usleep

#define MY_SLEEP(ms) usleep((ms) * 1000) // Convert milliseconds to microseconds

void loadingAnimation()
{
    printf("\n\t\t\t\t\t");

    // Divide 5 seconds evenly across 10 iterations
    for (int i = 0; i < 10; i++)
    {
        printf(".");
        fflush(stdout);
        MY_SLEEP(500); // Sleep for 500 milliseconds
    }

    printf("\n");
}

void displayMessage()
{
    printf("=================================================\n");
    printf("=                                               =\n");
    printf("=          Welcome to HaniFusion                =\n");
    printf("=                                               =\n");
    printf("=       Together We can change the world!       =\n");
    printf("=                                               =\n");
    printf("=================================================\n");
}

void animation()
{
    loadingAnimation();
    displayMessage();
}