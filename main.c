#include <stdio.h>
#include <stdint.h>

#define MASK(BIT)   (1 << BIT)

#define spiDeselect()   (NSEL_PORT |= MASK(NSEL_BIT) // Sets NSEL high through the use of a mask
int main()
{

}

void init()
{
    spiDeselect(); // Disable communication to the radio
    // Initializing CSN, SDN, and IRQ
    NSEL_DDR |= MASK(NSEL_BIT); 
    SDN_DDR |= MASK(SDN_BIT);
    //--------------------------------------------------------------
    // Consider Pull up Enable Registers for interrupts
    IRQ_PORT |= MASK(IRQ_BIT); // We don't know why
    //--------------------------------------------------------------
    spi_init(); //CDH will handle this one
    resetDevice();//
    applyStartupConfig();
    interupt(NULL);
    Si446x_sleep();
    //-----------------------------------------------------------------------------------
    //Analyze this line later
    enabledInterrupt[IRQ_PACKET] = (1<<SI$$6X_PACKET_RX_PEND) | (1<<SI446X_CRC_ERROR_PEND);
    //-------------------------------------------------------------------------------------
    Si446x_irq_on(1);  
}

static void resetDevice()
{

}

static void applyStartupConfig()
{

}

static void interrupt(void *buff)
{

}

uint8_t Si446x_sleep()
{


}




/*-------------------------------
LIST OF VARIABLES TO ASSIGN
-----------------------------

---------------------------------*/

/*------------------------
State Mapping
*/
