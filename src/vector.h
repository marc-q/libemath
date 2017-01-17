#ifndef __VECTOR_H__
#define __VECTOR_H__

struct _vector
{
	struct _point parent;
	int z;
};

typedef struct _vector vector;

struct _vector vector_init (const int, const int, const int);

struct _vector vector_add (const struct _vector*, const struct _vector*);
struct _vector vector_sub (const struct _vector*, const struct _vector*);
struct _vector vector_mpl (const struct _vector*, const struct _vector*);
struct _vector vector_div (const struct _vector*, const struct _vector*);

#endif /* __VECTOR_H__ */
