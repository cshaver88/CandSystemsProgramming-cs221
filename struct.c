
/* File:  	struct.c
 *
 * Purpose:	A point structure stores the x and y coordinates 
 * 			of a pointe on the screen. A rectangle structure 
 * 			stores the coordinates of the upper left and 
 *			lower right corners of a rectangle.
 *
 *
 */

 #include <stdio.h>

 struct point{
 	int x;
 	int y;
 };

 struct rectangle{
 	struct point upper_left;
 	struct point lower_right;
 };


 int area(const struct rectangle *r);
 struct point center(const struct rectangle *r);
 struct rectangle move(const struct rectangle *r, int addx, int addy);
 int inside(const struct rectangle *r, const struct point *p);


 /*-------------------------------------------------------------------*/
 int main(void) {

	struct rectangle box = {{2,8},{10,3}};
	//						x1, y1  x2, y2
	struct rectangle boxC = {{2,8},{10,2}};
	struct point p = {3,6};
	printf("area is %d\n", area(&box));
	struct point c = center(&boxC);
	printf("center is (%d,%d)\n", c.x, c.y);
	struct rectangle box2 = move(&box, 3, 6);
	printf("moved to (%d,%d) and (%d,%d)\n", box2.upper_left.x, 
		box2.upper_left.y, box2.lower_right.x, box2.lower_right.y);
	printf("inside function test result is %d\n", inside(&box,&p));

	return 0;

} /* main */


 /*-------------------------------------------------------------------
 * this function returns the area of r.
 */

 int area(const struct rectangle *r) {
 	int area = 0;
 	int len = r -> lower_right.x - r -> upper_left.x;
 	int wid = r -> upper_left.y - r -> lower_right.y;

 	area = len * wid;

 	return area;


} /* area */

 /*-------------------------------------------------------------------
 * this function returns the center point of r. 
 * If either the x or y coordinate of the center is not an integer,
 * store its truncated value in the point structure.
 */
  struct point center(const struct rectangle *r) {
  	struct point center;
  	int len = r -> lower_right.x - r -> upper_left.x;
  	int wid = r -> upper_left.y - r -> lower_right.y; 
  	center.x = len / 2;
  	center.y = wid / 2;

  	return center;

} /* center */

 /*-------------------------------------------------------------------
 * this function moves r by addx units in the x direction and 
 * addy units in the y direction, returning the modified version of r.
 */
 struct rectangle move(const struct rectangle *r, int addx, int addy) {
 	struct rectangle move;
 	int x1 = r -> upper_left.x + addx;
 	int y1 = r -> upper_left.y + addy;

 	int x2 = r -> lower_right.x + addx;
 	int y2 = r -> lower_right.y + addy;

 	move.upper_left.x = x1;
 	move.upper_left.y = y1;

 	move.lower_right.x = x2;
 	move.lower_right.y = y2;

 	return move;
} /* move */

 /*-------------------------------------------------------------------
 * this function returns 1 if point p lies within rectangle r 
 * and 0 otherwise.
 */
 int inside(const struct rectangle *r, const struct point *p) {
 	int inside;

 	if (p -> x < r -> lower_right.x && p -> x > r -> upper_left.x
 		&& p -> y < r -> upper_left.y && p -> y > r -> lower_right.y){
 		inside = 1;
 	}
 	else{
 		inside = 0;
 	}


 	return inside;
} /* inside */























