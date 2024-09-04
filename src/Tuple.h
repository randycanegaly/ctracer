#include <stdint.h>

typedef struct {
	float x;
	float y;
	float z;	
	float w;
} Tuple;

Tuple Point(Tuple *p, int x, int y, int z);
Tuple Vector(Tuple *p, int x, int y, int z);
