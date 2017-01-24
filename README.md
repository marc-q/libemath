# libemath
Extra math for C.

## Example
```C
#include <stdio.h>
#include "src/point.h"

int main (int argc, char *argv[])
{
	point a, b;
	
	a = point_init (1, 2);
	b = point_init (3, 4);
	
	a = point_add (&a, &b);
	
	printf ("%i, %i\n", a.x, a.y);
	
	return 0;
}
```
