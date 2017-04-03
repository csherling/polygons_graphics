#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * transform;
  struct matrix * polygons;

  edges = new_matrix(4, 4);
  transform = new_matrix(4, 4);
  polygons = new_matrix(4, 4);

  color color;
  color.red = MAX_COLOR;
  color.green = 0;
  color.blue = 0;

  clear_screen(s);
    
  /* print_matrix( make_bezier() ); */
  /* printf("\n"); */
  /* print_matrix( make_hermite() ); */

  /* if ( argc == 2 ) */
  /*   parse_file( argv[1], transform, edges, s ); */
  /* else */
  /*   parse_file( "stdin", transform, edges, s ); */


  add_polygon(polygons,100.0,100.0,0.0,
	      200.0,100.0,0.0,
	      200.0,200.0,0.0);
  draw_polygons(polygons, s, color);

  print_matrix(polygons);
  
  display(s);
  
  free_matrix( edges );
  free_matrix( transform );
}  
