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
	 struct snake snake;
	 snake.direct=left;
	 snake.snake_head_abscissa=0;
	 snake.snake_head_ordinate=0;
	
		 
		switch (snack->direct){
		 case back:
			snake_back(&snake);
			break;
		 case force:
			snake_force(&snake);
			break;
		 case left:
			snack_left(&snake);
			break;
		 case right:
			snack_right(&snake);
			break;
		 default:
			break;
		}
	while(1){
		snake_show(&snake);
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
	 if(snack->direct == force)
		 return;
	 snack->snake_head_ordinate++;
 }
 
 void snake_force(snack * snack)
 {
	 if(snack->direct == back)
		 return;
	 snack->snake_head_ordinate--;
 }
 
 void snake_show(snack * snack)
 {
	
	int snake_map[abscissa_map][ordinate_map];
	clc();
	for(int i=0;i<snake_head_abscissa;i++)
	{
		for(int j=0;j<snake_head_ordinate;j++)
		{
			printf("*");
		}
	}
	 
	 printf("*");
	sleep(500);
 } 
