#include <assert.h>
#include "cyber_spaceship.h"

const char* get_longest_safe_zone_or_null(const char* const cab_start_location, const size_t cab_length, const char* const cluster_start_locations[], const size_t cluster_lengths[], const size_t cluster_count, size_t* out_longest_safe_area_length)

{

	



}

int get_travel_time(const char* const cab_start_location, const size_t cab_length, const char* const cluster_start_locations[],  const size_t cluster_count)
{

/* cluster = 0 */
 if (cluster_count == 0)
{
int result = cab_length/10;
return result;}

 else if (cluster_count == 1) 
{ 
int danger_zone = sizeof(cluster_start_location[0])/5;
int safe_zone = (cab_length - danger_zone)/10;
int result = danger_zone + safe_zone ;
return result;}

 else if (cluster_count ==2)
{}






