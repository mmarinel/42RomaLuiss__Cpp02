/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:46:48 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 16:06:48 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"

static	void	sort_edges(Point edges[], int len,
					bool (*less_than)(const Point& a, const Point& b));
static	bool	X_sort_criteria( const Point& a, const Point& b );
static	bool	Y_sort_criteria( const Point& a, const Point& b );
static	Point	*Pt_swap(Point *a, Point *b);
//* end of static declarations

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point	edges_Xsort[3] = {a, b, c};
	Point	edges_Ysort[3] = {a, b, c};

	sort_edges(edges_Xsort, 3, X_sort_criteria);
	sort_edges(edges_Ysort, 3, Y_sort_criteria);
	if (point.getX().toFloat() <= edges_Xsort[0].getX().toFloat()
		|| point.getX().toFloat() >= edges_Xsort[2].getX().toFloat()
		|| point.getY().toFloat() <= edges_Ysort[0].getY().toFloat()
		|| point.getY().toFloat() >= edges_Ysort[2].getY().toFloat())
		return (false);
	
}

static	void	sort_edges(Point edges[], int len,
					bool (*less_than)(const Point& a, const Point& b))
{
	int	min;

	for (int i = 0; i < len; i++)
	{
		min = i;
		for(int j = i + 1; j < len; j++)
			if (edges[j].getX().toFloat() < edges[min].getX().toFloat())
				min = j;
		Pt_swap(edges + i, edges + min);
	}
}

static	bool	X_sort_criteria( const Point& a, const Point& b )
{
	return (a.getX().toFloat() < b.getX().toFloat());
}

static	bool	Y_sort_criteria( const Point& a, const Point& b )
{
	return (a.getY().toFloat() < b.getY().toFloat());
}

static	Point	*Pt_swap(Point *a, Point *b)
{
	Point	*backup;

	backup = a;
	*a = *b;
	*b = *backup;
}
