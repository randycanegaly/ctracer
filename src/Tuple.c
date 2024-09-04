#include "Tuple.h"

Tuple Point(Tuple *p, int x, int y, int z) {
	p->x = x;
	p->y = y;
	p->z = z;
	p->w = 1.0;
}

Tuple Vector(Tuple *p, int x, int y, int z) {
	p->x = x;
	p->y = y;
	p->z = z;
	p->w = 0.0;
}
