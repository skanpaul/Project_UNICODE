#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
   char *reception; 
    
    if(argc != 2)
    {
        printf("Wrong Argument number");
        return (0);
    }

    reception = argv[1];

    // write(1, reception, 3);

    // printf("Reception: %s\n", reception) ;
    printf("Reception: %x\n", reception[0]) ;
    printf("Reception: %#02x\n", reception[1]) ;
    printf("Reception: %#02x\n", reception[2]) ;
    printf("Reception: %#02x\n", reception[3]) ;




    return (0);
    

}