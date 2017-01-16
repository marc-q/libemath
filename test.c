/* Copyright 2017 Marc Volker Dickmann */
#include <stdio.h>
#include "src/point.h"
#include "src/vector.h"

#define TEST_FAILED 0
#define TEST_SUCCESS 1

static int tst_point_init (void)
{
	point a = point_init (10, -5);
	
	if (a.x == 10 &&
	    a.y == -5)
	{
		return TEST_SUCCESS;
	}
	return TEST_FAILED;
}

static int tst_point_add (void)
{
	point a, b;
	
	a = point_init (10, -5);
	b = point_init (5, 5);
	
	a = point_add (&a, &b);
	
	if (a.x == 15 &&
	    a.y == 0)
	{
		return TEST_SUCCESS;
	}
	return TEST_FAILED;
}

static int tst_point_sub (void)
{
	point a, b;
	
	a = point_init (10, -5);
	b = point_init (5, 5);
	
	a = point_sub (&a, &b);
	
	if (a.x == 5 &&
	    a.y == -10)
	{
		return TEST_SUCCESS;
	}
	return TEST_FAILED;
}

static int tst_point_mpl (void)
{
	point a, b;
	
	a = point_init (10, -5);
	b = point_init (5, 5);
	
	a = point_mpl (&a, &b);
	
	if (a.x == 50 &&
	    a.y == -25)
	{
		return TEST_SUCCESS;
	}
	return TEST_FAILED;
}

static int tst_point_div (void)
{
	point a, b;
	
	a = point_init (10, -5);
	b = point_init (5, 5);
	
	a = point_div (&a, &b);
	
	if (a.x == 2 &&
	    a.y == -1)
	{
		return TEST_SUCCESS;
	}
	return TEST_FAILED;
}

int main (int argc, char *argv[])
{
	int score = 0;
	
	printf ("libemath v. 0.0.1 A (C) 2017 Marc Volker Dickmann\n\n");
	
	score += tst_point_init ();
	score += tst_point_add ();
	score += tst_point_sub ();
	score += tst_point_mpl ();
	score += tst_point_div ();

	printf ("Score:\t%i/%i\n", score, 5);
	
	return 0;
}
