/* ======================================================================================== */
/* Author 		:	Doaa Maher																*/
/* Date			:	12 Dec 2022																*/
/* File			:	DIO Interface File                                                      */
/* Version		:	1.0                                                                     */
/* ======================================================================================== */


#ifndef DIO_INTERFACE_H
#define	DIO_INTERFACE_H


// Error Status 
typedef enum
{
	DIO_enuOK=0,
	DIO_enuInvalidDirection,
	DIO_enuInvalidPort,
	DIO_enuInvalidPin,
	DIO_enuInvalidValue,
	DIO_enuNULLPTR
}DIO_tenuErrorStatus;

// Direction
typedef enum
{
	DIO_enuINPUT=0,
	DIO_enuOUTPUT
}DIO_tenuDirection;


// Port
typedef enum
{
	DIO_enuPortA=0,
	DIO_enuPortB,
	DIO_enuPortC,
	DIO_enuPortD,
	DIO_enuNumberOfPorts
}DIO_tenuPort;


// Pin
typedef enum
{
	DIO_enuPin0=0,
	DIO_enuPin1 ,
	DIO_enuPin2 ,
	DIO_enuPin3 ,
	DIO_enuPin4 ,
	DIO_enuPin5 ,
	DIO_enuPin6 ,
	DIO_enuPin7 ,
	DIO_enuPin8 ,
	DIO_enuPin9 ,
	DIO_enuPin10,
	DIO_enuPin11,
	DIO_enuPin12,
	DIO_enuPin13,
	DIO_enuPin14,
	DIO_enuPin15,
	DIO_enuPin16,
	DIO_enuPin17,
	DIO_enuPin18,
	DIO_enuPin19,
	DIO_enuPin20,
	DIO_enuPin21,
	DIO_enuPin22,
	DIO_enuPin23,
	DIO_enuPin24,
	DIO_enuPin25,
	DIO_enuPin26,
	DIO_enuPin27,
	DIO_enuPin28,
	DIO_enuPin29,
	DIO_enuPin30,
	DIO_enuPin31,
	DIO_enuPin32,
	DIO_enuNumberOfPins
}DIO_tenuPin;

// Value
typedef enum
{
	DIO_enuLOW=0,
	DIO_enuHIGH
}DIO_tenuValue;



#endif