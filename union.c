/* File:  	union.c
 *
 * Purpose:	
 *
 * Input:	 
 * Output:	
 *
 */

 #include <stdio.h>

struct point { 
	int x;
	int y; 
}; 

struct shape {
	enum {RECTANGLE, CIRCLE} shape_type;
	struct point center; //coordinates of center 
	union {
		struct {
			int height; 
			int width;
		} rectangle; 
		struct {
			int radius; 
		} circle;
	} u; 
};

void display(const struct shape s);
double area(struct shape *s);
struct shape move(const struct shape *s, int addx, int addy);
struct shape scale(const struct shape *s, double c);


 /*------------------------------------------------------------------*/
 int main(void) {

 	struct shape a={RECTANGLE, {0,0}, {3,4}}; 
 	struct shape b={CIRCLE, {0,0}, {5}}; 
 	display(a);
	display(b);
	printf("a area is %f\n", area(&a)); 
	printf("b area is %f\n", area(&b)); 
	display(move(&a, -5, -2)); 
	display(move(&b, -5, -2)); 
	display(scale(&a,1.5)); 
	display(scale(&b,0.8));



} /* main */

 /*-------------------------------------------------------------------
 * this function displays the contents of s based on its shape type.
 * If it is a RECTANGLE, display x, y center point and the height 
 * and width. If it is a CIRCLE, display x, y center point and the 
 * radius.
 */
 void display(const struct shape s) {
 	if(s.shape_type == RECTANGLE){
 		printf("I'm a RECTANGLE! \n");
 		printf("My Center Point is: (%d, %d)\n", s.center.x, s.center.y);
 		printf("My Height is: %d\n", s.u.rectangle.height);
 		printf("My Width is: %d.\n", s.u.rectangle.width);
 	}
 	if(s.shape_type == CIRCLE){
 		printf("I'm a CIRCLE!\n");
 		printf("My Center Point is: (%d, %d)\n", s.center.x, s.center.y);
 		printf("My Radius is: %d.\n", s.u.circle.radius);
 	}

} /* display */

 /*-------------------------------------------------------------------
 * this function returns the area of s.
 */
 double area(struct shape *s) {
 	double area = 0;
 	double pie = 3.14;

 	if(s -> shape_type == RECTANGLE){
 		area = s -> u.rectangle.height * s -> u.rectangle.width;
 	}

 	if(s -> shape_type == CIRCLE){
 		area = pie * s -> u.circle.radius * s -> u.circle.radius; 
 	}

 	return area;

} /* area */

 /*-------------------------------------------------------------------
 * this function moves s by addx units in the x direction and addy 
 * units in the y direction, returning the modified version of s.
 */
 struct shape move(const struct shape *s, int addx, int addy) {
 	struct shape move;

 	if(s -> shape_type == RECTANGLE){
 		move.shape_type = RECTANGLE;
 		move.center.x = s -> center.x + addx;
 		// printf("%d\n", move.center.x);
 		move.center.y = s -> center.y + addy;
 		// printf("%d\n", move.center.y);
 		move.u.rectangle.height = s -> u.rectangle.height;
 		move.u.rectangle.width = s -> u.rectangle.width;
 	}
 	if(s -> shape_type == CIRCLE){
 		move.shape_type = CIRCLE;
 		move.center.x = s -> center.x + addx;
 		move.center.x = s -> center.y + addx;
 		move.u.circle.radius = s -> u.circle.radius;
 	}

 	return move;


} /* move */

 /*-------------------------------------------------------------------
 * this function returns the modified version of s which 
 * is scaled by the factor c.
 */
 struct shape scale(const struct shape *s, double c) {
 	struct shape scale;

 	if(s -> shape_type == RECTANGLE){
 		scale.shape_type = RECTANGLE;
 		scale.center.x = s -> center.x;
 		// printf("%d\n", move.center.x);
 		scale.center.y = s -> center.y;
 		// printf("%d\n", move.center.y);
 		scale.u.rectangle.height = s -> u.rectangle.height * c;
 		scale.u.rectangle.width = s -> u.rectangle.width * c;
 	}
 	if(s -> shape_type == CIRCLE){
 		scale.shape_type = CIRCLE;
 		scale.center.x = s -> center.x;
 		scale.center.x = s -> center.y;
 		scale.u.circle.radius = s -> u.circle.radius * c;
 	}

 	return scale;


} /* scale */



















