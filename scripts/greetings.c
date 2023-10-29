#include <stdio.h>
#include <time.h>


int main(int argc, char const *argv[])
{
    time_t now;

    time(&now);
    //if (argc <2)
    //puts("Hello , you handsome beast!");
    //else
    //    printf("Hello, %s!\n", argv[1]);
    printf("The pc thinks it's %ld\n",now);
    printf("%s",ctime(&now));
    return 0;
}
