#include "0921.h"

 int main()
 {
	while(true){
		init_snake();
	}
	return 0; 
 }
 //snack
 
 snack init_snake(snack * snack)
 {
	 	 switch (snack->direct){
		 case back:
			snake_back();
			break;
		 case force:
			snake_force();
			break;
		 case left:
			snack_left();
			break;
		 case right:
			snack_right();
			break;
		 default:
			break;
	 }
 }
 
 
 void snack_left(snack * snack)
 {
	 if(snack->direct == right)
		 return;
	 snack->snake_head_abscissa--;

 }
 
 void snack_right(snack * snack)
 {
	 if(snack->direct == left)
		 return;
	 snack->snake_head_abscissa++;
 }
 
 void  snake_back(snack * snack)
 {
	 if(snack->direct == left)
		 return;
	 snack->snake_head_abscissa++;
 }
 
 void snake_force(snack * snack)
 {
	 if(snack->direct == left)
		 return;
	 snack->snake_head_abscissa++;
 }
 
 void snake_show(snack * snack)
 {
	 int snake_map[20][20];

	 
	 printf("*");
	 
 } 
