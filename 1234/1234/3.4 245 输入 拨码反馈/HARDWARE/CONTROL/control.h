#ifndef __CONTROL_H
#define __CONTROL_H	 
#include "sys.h"
#include "io.h"

void exfeedback(void);
void outputcontrol(u8);
u8 module_input(void);
void module_indication(void);


#define s1open   	1	
#define s1close	  2	
#define s2open   	3	
#define s2close	  4	
#define s3open   	5	
#define s3close	  6	
#define s4open   	7	
#define s4close	  8	
#define s5open   	9	
#define s5close	  10	
#define s6open   	11
#define s6close	  12
#define s7open   	13
#define s7close	  14	
#define s8open   	15	
#define s8close	  16	

#endif
