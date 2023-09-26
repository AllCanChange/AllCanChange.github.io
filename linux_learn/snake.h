#ifndef __0921__H
#define __0921__H
#include <stdio.h>


enum directions {
	back=0,
	force=1,
	left,
	rigth,
};

struct snake{
	
	int  snake_head_abscissa,snake_head_ordinate;
	directions driect;
	int snake_length;
	
	
} ;


#endif 
