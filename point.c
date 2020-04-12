#include "point.h"
#include <math.h>

unsigned int get_distance(POINT *current_location, POINT *auditing_location)
{
  return hypot(current_location->x - auditing_location->x, current_location->y - auditing_location->y);
}

void get_closest_food(POINT food_points[], int points_length, POINT current_location, POINT *closest_food_location)
{
  unsigned int auditing_distance = 0xffffffff;
  unsigned int current_distance = 0xffffffff;
  for (int index = 0; index < points_length; index++)
  {
    auditing_distance = get_distance(&current_location, &food_points[index]);
    if (auditing_distance < current_distance)
    {
      *closest_food_location = food_points[index];
      current_distance = auditing_distance;
    }
  }
}
