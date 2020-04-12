#include <stdio.h>
#include "point.h"

int main(void)
{
  POINT food_points[5] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  POINT current_location = {18, 86};
  POINT closest_food_location;
  // get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location);
  get_closest_food(food_points, 5, current_location, &closest_food_location);
  printf("Location of organism: [%d %d],  Closest food target : [%d %d]", current_location.x, current_location.y, closest_food_location.x, closest_food_location.y);
  return 0;
}