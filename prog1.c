#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>

int gen_rand(int upper, int lower)
{
    srand(time(NULL));
    return(rand() % (upper + 1 - lower) + lower);
}

int main()
{
    // The main function is the entrypoint of the program. When the program
	// is executed, it will automatically start here.
	int myrand = gen_rand(10, 0);
    if (myrand >= 0 && myrand <= 4)
    {
        printf("Eat more beef, kick less cats.\n");
    }
    else if (myrand >= 5 && myrand <= 9)
    {
        printf("FRODO LIVES\n");
    }
    else if (myrand == 10)
    {
        printf("Larn is the best roguelike.\n");
    }
    else
    {
        printf("something went wrong\n");
    }
    printf("The random number was: %d\n", myrand);
}
