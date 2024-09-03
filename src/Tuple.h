#include <stdint.h>

struct Tuple {
	float x;
	float y;
	float z;	
	float point;
};

float is_point(struct Tuple tup); 
float x_coord(struct Tuple tup);
float y_coord(struct Tuple tup);
float z_coord(struct Tuple tup);
