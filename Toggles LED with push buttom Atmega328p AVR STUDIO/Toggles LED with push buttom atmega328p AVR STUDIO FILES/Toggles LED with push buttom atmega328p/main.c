/*
 * Assign2FA21.c
 *
 * Created: 10/23/2021 9:43:38 PM
 * Author : Khiyam Iftikhar 
 
 */  //Push button with LED

#include <avr/io.h>
#include "portsreadwrite.h"

int main(void)
{
    
  configure_ports();			//For input and output
     
    while (1) 
    {
		
		
		(button_pressed());
		
		{		//button_pressed returns 1 when button is pressed 
			
			toggle_LED();	}
						
   
    }
}

