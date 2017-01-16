#ifndef __POINT_H__
#define __POINT_H__

struct _point
{
	int x;
	int y;
};

typedef struct _point point;

void point_init (struct _point*, const int, const int);

struct _point point_add (const struct _point*, const struct _point*);
struct _point point_sub (const struct _point*, const struct _point*);
struct _point point_mpl (const struct _point*, const struct _point*);
struct _point point_div (const struct _point*, const struct _point*);

#endif /* __POINT_H__ */
