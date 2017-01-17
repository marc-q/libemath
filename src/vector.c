/* Copyright 2017 Marc Volker Dickmann */
#include "point.h"
#include "vector.h"

struct _vector vector_init (const int x, const int y, const int z)
{
	return (struct _vector) {point_init (x, y), z};
}

struct _vector vector_add (const struct _vector *a, const struct _vector *b)
{
	return (struct _vector) {point_add (a->parent, b->parent), a->z + b->z};
}

struct _vector vector_sub (const struct _vector *a, const struct _vector *b)
{
	return (struct _vector) {point_sub (a->parent, b->parent), a->z - b->z};
}

struct _vector vector_mpl (const struct _vector *a, const struct _vector *b)
{
	return (struct _vector) {point_mpl (a->parent, b->parent), a->z * b->z};
}

struct _vector vector_div (const struct _vector *a, const struct _vector *b)
{
	return (struct _vector) {point_div (a->parent, b->parent), a->z / b->z};
}
