/* ======================================================================================== */
/* Author 		:	Doaa Maher																*/
/* Date			:	12 Dec 2022																*/
/* File			:	DIO.c File                                                              */
/* Version		:	1.0                                                                     */
/* ======================================================================================== */
#include "Std_Types.h"

#include "DIO_Interface.h"
#include "DIO_Private.h"

/* ======================================== APIs =================================================== */
DIO_tenuErrorStatus DIO_enuInit (DIO_tenuDirection Direction, DIO_tenuPort Port, DIO_tenuPin Pin)
{
	DIO_tenuErrorStatus LocalErrorStatus = DIO_enuOK;
	
	/* =============== Validations =============== */
	if (Port < DIO_enuNumberOfPorts)
	{
		if (Pin < DIO_enuNumberOfPins)
		{
			/* Switching the Port */
			switch (Port)
			{
				case DIO_enuPortA :	
					/* Checking the Direction */
					if (Direction == DIO_enuINPUT)
					{
						// 0
						DDRA &= ~(1<< Pin);
					}
					else if (Direction == DIO_enuOUTPUT)
					{
						// 1
						DDRA |= (1<< Pin);
					}
					else
					{
						LocalErrorStatus = DIO_enuInvalidDirection;
					}
					break;
					
				case DIO_enuPortB :	
					/* Checking the Direction */
					if (Direction == DIO_enuINPUT)
					{
						// 0
						DDRB &= ~(1<< Pin);
					}
					else if (Direction == DIO_enuOUTPUT)
					{
						// 1
						DDRB |= (1<< Pin);
					}
					else
					{
						LocalErrorStatus = DIO_enuInvalidDirection;
					}
					break;
					
					case DIO_enuPortC :	
					/* Checking the Direction */
					if (Direction == DIO_enuINPUT)
					{
						// 0
						DDRC &= ~(1<< Pin);
					}
					else if (Direction == DIO_enuOUTPUT)
					{
						// 1
						DDRC |= (1<< Pin);
					}
					else
					{
						LocalErrorStatus = DIO_enuInvalidDirection;
					}
					break;
					
					case DIO_enuPortD :	
					/* Checking the Direction */
					if (Direction == DIO_enuINPUT)
					{
						// 0
						DDRD &= ~(1<< Pin);
					}
					else if (Direction == DIO_enuOUTPUT)
					{
						// 1
						DDRD |= (1<< Pin);
					}
					else
					{
						LocalErrorStatus = DIO_enuInvalidDirection;
					}
					break;
					
					default:
			}
		}
		else
		{
			LocalErrorStatus = DIO_enuInvalidPin;
		}
	}
	else
	{
		LocalErrorStatus = DIO_enuInvalidPort;
	}
	
	return LocalErrorStatus;
}
/* ======================================================================================== */
DIO_tenuErrorStatus DIO_enuSetPinValue (DIO_tenuPort Port, DIO_tenuPin Pin, DIO_tenuValue Value)
{
	DIO_tenuErrorStatus LocalErrorStatus = DIO_enuOK;
	
	/* =============== Validations =============== */
	if (Port < DIO_enuNumberOfPorts)
	{
		if (Pin < DIO_enuNumberOfPins)
		{
			/* Switching the Port */
			switch (Port)
			{
				case DIO_enuPortA :	
					/* Checking the Value */
					if (Value == DIO_enuLOW)
					{
						// 0
						PORTA &= ~(1<< Pin);
					}
					else if (Value == DIO_enuHIGH)
					{
						// 1
						PORTA |= (1<< Pin);
					}
					else
					{
						LocalErrorStatus = DIO_enuInvalidValue;
					}
					break;
					
				case DIO_enuPortB :	
					/* Checking the Value */
					if (Value == DIO_enuLOW)
					{
						// 0
						PORTB &= ~(1<< Pin);
					}
					else if (Value == DIO_enuHIGH)
					{
						// 1
						PORTB |= (1<< Pin);
					}
					else
					{
						LocalErrorStatus = DIO_enuInvalidValue;
					}
					break;
					
					case DIO_enuPortC :	
					/* Checking the Value */
					if (Value == DIO_enuLOW)
					{
						// 0
						PORTC &= ~(1<< Pin);
					}
					else if (Value == DIO_enuHIGH)
					{
						// 1
						PORTC |= (1<< Pin);
					}
					else
					{
						LocalErrorStatus = DIO_enuInvalidValue;
					}
					break;
					
					case DIO_enuPortD :	
					/* Checking the Value */
					if (Value == DIO_enuLOW)
					{
						// 0
						PORTD &= ~(1<< Pin);
					}
					else if (Value == DIO_enuHIGH)
					{
						// 1
						PORTD |= (1<< Pin);
					}
					else
					{
						LocalErrorStatus = DIO_enuInvalidValue;
					}
					break;
					
					default:
			}
		}
		else
		{
			LocalErrorStatus = DIO_enuInvalidPin;
		}
	}
	else
	{
		LocalErrorStatus = DIO_enuInvalidPort;
	}
	
	
	return LocalErrorStatus;
}
/* ======================================================================================== */
DIO_tenuErrorStatus DIO_enuSetPortValue (DIO_tenuPort Port, u8 Value)
{
	DIO_tenuErrorStatus LocalErrorStatus = DIO_enuOK;
	
	/* =============== Validations =============== */
	if (Port < DIO_enuNumberOfPorts)
	{
		/* Switching the Port */
		switch (Port)
		{
			case DIO_enuPortA :	
				/* Assign the Value */
				if (Value < 255)
				{
					PORTA = Value;
				}
				else
				{
					LocalErrorStatus = DIO_enuInvalidValue;
				}
				break;
				
			case DIO_enuPortB :	
				/* Assign the Value */
				if (Value < 255)
				{
					PORTB = Value;
				}
				else
				{
					LocalErrorStatus = DIO_enuInvalidValue;
				}
				break;
				
				case DIO_enuPortC :	
				/* Assign the Value */
				if (Value < 255)
				{
					PORTC = Value;
				}
				else
				{
					LocalErrorStatus = DIO_enuInvalidValue;
				}
				break;
				
				case DIO_enuPortD :	
				/* Assign the Value */
				if (Value < 255)
				{
					PORTD = Value;
				}
				else
				{
					LocalErrorStatus = DIO_enuInvalidValue;
				}
				break;
				
				default:
			}
	}
	else
	{
		LocalErrorStatus = DIO_enuInvalidPort;
	}
	return LocalErrorStatus;
}
/* ======================================================================================== */
DIO_tenuErrorStatus DIO_enuGetPinValue  (DIO_tenuPort Port, DIO_tenuPin Pin, pu8 Value)
{
	DIO_tenuErrorStatus LocalErrorStatus = DIO_enuOK;
	
	/* =============== Validations =============== */
	if (Port < DIO_enuNumberOfPorts)
	{
		if (Pin < DIO_enuNumberOfPins)
		{
			if (Value != NULL_PTR)
			{
				/* Switching the Port */
				switch (Port)
				{
					case DIO_enuPortA :	
						/* GET the Pin value */
						*Value = (PINA &= (1<< Pin));
						break;
						
					case DIO_enuPortB :	
						/* GET the Pin value */
						*Value = (PINB &= (1<< Pin));
						break;
						
					case DIO_enuPortC :	
						/* GET the Pin value */
						*Value = (PINC &= (1<< Pin));
						break;
						
					case DIO_enuPortD :	
						/* GET the Pin value */
						*Value = (PIND &= (1<< Pin));
						break;
						
					default:
				}
			}
			else
			{
				LocalErrorStatus = DIO_enuNULLPTR;
			}
			
		}
		else
		{
			LocalErrorStatus = DIO_enuInvalidPin;
		}
	}
	else
	{
		LocalErrorStatus = DIO_enuInvalidPort;
	}
	return LocalErrorStatus;
}
/* ======================================================================================== */



