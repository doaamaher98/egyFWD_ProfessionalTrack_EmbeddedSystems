/* ======================================================================================== */
/* Author 		:	Doaa Maher																*/
/* Date			:	12 Dec 2022																*/
/* File			:	DIO Private File                                                        */
/* Version		:	1.0                                                                     */
/* ======================================================================================== */


#ifndef DIO_PRIVATE_H
#define	DIO_PRIVATE_H


/*********************** Register Addresses ****************************/
/***************************** DDRx ************************************/
#define 	DDRA			(*(volatile u8*) 0x3A)
#define 	DDRB			(*(volatile u8*) 0x37)			
#define 	DDRC			(*(volatile u8*) 0x34)	
#define 	DDRD			(*(volatile u8*) 0x31)	

/***************************** PORTx ************************************/
#define 	PORTA			(*(volatile u8*) 0x3B)
#define 	PORTB			(*(volatile u8*) 0x38)			
#define 	PORTC			(*(volatile u8*) 0x35)	
#define 	PORTD			(*(volatile u8*) 0x32)	

/***************************** PINx ************************************/
#define 	PINA			(*(volatile u8*) 0x39)
#define 	PINB			(*(volatile u8*) 0x36)			
#define 	PINC			(*(volatile u8*) 0x33)	
#define 	PIND			(*(volatile u8*) 0x30)	


/***************************** NULL POINTER ************************************/
#define 	NULL_PTR 			((void*) 0)











#endif