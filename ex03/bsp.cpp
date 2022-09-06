/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarinel <mmarinel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:46:48 by mmarinel          #+#    #+#             */
/*   Updated: 2022/09/06 18:16:57 by mmarinel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

static	bool	is_in_triangle(Fixed x_relative, Fixed y_relative,
	Point edges_Xsort[3], Point edges_Ysort[3]);
static	void	sort_edges(Point edges[], int len,
					bool (*less_than)(const Point& a, const Point& b));
static	bool	X_sort_criteria( const Point& a, const Point& b );
static	bool	Y_sort_criteria( const Point& a, const Point& b );
static	void	Pt_swap(Point *a, Point *b);
//* end of static declarations

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Point	edges_Xsort[3] = {a, b, c};
	Point	edges_Ysort[3] = {a, b, c};
	Fixed	x_relative;
	Fixed	y_relative;

	sort_edges(edges_Xsort, 3, X_sort_criteria);
	sort_edges(edges_Ysort, 3, Y_sort_criteria);
	if (
		point.getX() <= edges_Xsort[0].getX()
		|| point.getX() >= edges_Xsort[2].getX()
		|| point.getY() <= edges_Ysort[0].getY()
		|| point.getY() >= edges_Ysort[2].getY()
	)
		return (false);
	if (point.getX() <= edges_Xsort[1].getX())
		x_relative = point.getX() - edges_Xsort[0].getX();
	else
		x_relative = edges_Xsort[2].getX() - point.getX();
	y_relative = point.getY() - edges_Ysort[0].getY();
	return (is_in_triangle(x_relative, y_relative, edges_Xsort, edges_Ysort));
}

static	bool	is_in_triangle(Fixed x_relative, Fixed y_relative,
	Point edges_Xsort[3], Point edges_Ysort[3])
{
	if (x_relative > edges_Xsort[1].getX())
		return (
			y_relative
				< (x_relative / (edges_Xsort[1].getX() - edges_Xsort[0].getX())
					* (edges_Ysort[2].getY() - edges_Xsort[0].getY())
				)
		);
	else
		return (
			y_relative
				< (x_relative / (edges_Xsort[2].getX() - edges_Xsort[1].getX())
					* (edges_Ysort[2].getY() - edges_Xsort[0].getY())
				)
		);
}

static	void	sort_edges(Point edges[], int len,
					bool (*less_than)(const Point& a, const Point& b))
{
	int	min;

	for (int i = 0; i < len; i++)
	{
		min = i;
		for(int j = i + 1; j < len; j++)
			if (less_than(edges[j], edges[min]))
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

static	void	Pt_swap(Point *a, Point *b)
{
	Point	*backup;

	backup = a;
	*a = *b;
	*b = *backup;
}
