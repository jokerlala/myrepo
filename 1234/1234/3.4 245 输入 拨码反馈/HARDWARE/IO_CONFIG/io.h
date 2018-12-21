#ifndef __IO_H
#define __IO_H	 
#include "sys.h"


void io_Init(void);//≥ı ºªØ

#define  LE1 PAout(5)
#define  LE2 PAout(7)
#define  LE3 PBout(4)
#define  LE4 PEout(11)
#define  LE5 PEout(10)
#define  LE6 PEout(9)
#define  LE7 PBout(3)
#define  LE8 PBout(6)

#define  OE1 PCout(4)
#define  OE2 PAout(6)
#define  OE3 PEout(2)
#define  OE4 PEout(3)
#define  OE5 PCout(2)
#define  OE6 PCout(1)
#define  OE7 PCout(0)
#define  OE8 PCout(3)
#define  OE9 PBout(5)
#define  OE10 PBout(8)
#define  OE11 PBout(7)
#define  OE12 PBout(9)
#define  OE13 PEout(4)

#define B0  PDin(7)
#define B1  PDin(6)
#define B2  PDin(5)
#define B3  PDin(4)
#define B4  PDin(3)
#define B5  PDin(2)
#define B6  PDin(1)
#define B7  PDin(0)

#define D0  PDout(15)
#define D1  PDout(14)
#define D2  PDout(13)
#define D3  PDout(12)
#define D4  PDout(11)
#define D5  PDout(10)
#define D6  PDout(9)
#define D7  PDout(8)
#define alarm PAout(2)

#endif
