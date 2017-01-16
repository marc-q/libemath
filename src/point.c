/* Copyright 2017 Marc Volker Dickmann */
#include "point.h"

void point_init (struct _point *self, const int x, const int y)
{
	self->x = x;
	self->y = y;
}

struct _point point_add (const struct _point *a, const struct _point *b)
{
	return (struct _point) {a->x + b->x, a->y + b->y};
}

struct _point point_sub (const struct _point *a, const struct _point *b)
{
	return (struct _point) {a->x - b->x, a->y - b->y};
}

struct _point point_mpl (const struct _point *a, const struct _point *b)
{
	return (struct _point) {a->x * b->x, a->y * b->y};
}

struct _point point_div (const struct _point *a, const struct _point *b)
{
	return (struct _point) {a->x / b->x, a->y / b->y};
}
