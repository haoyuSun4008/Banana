#ifndef _MAIN_
#define _MAIN_ 1

typedef unsigned char uint8_t;
typedef unsigned int uint32_t;
 
typedef signed char sint8_t;
typedef signed int sint32_t;

typedef struct
{
	uint32_t milsec;
	uint8_t sec;
	uint8_t min;
}clock;

#endif