#include <stdio.h>
#define MASK(BIT)   (1 << BIT)

#define spiDeselect()   (NSEL_PORT |= MASK(NSEL_BIT) // Sets NSEL high through the use of a mask
int main()
{

}

void init()
{
    spiDeselect(); // Disable communication to the radio
    // Initializing CSN, SDN, and IRQ
    CSN_PORT
    spi_init(); 
   
}


/*-------------------------------
LIST OF VARIABLES TO ASSIGN
-----------------------------
NSEL_BIT
NSEL_PORT

---------------------------------*/
