# 42RomaLuiss__Cpp02

Cpp piscine Module 02.

type "make run" when at the root of this directory to run all exercises at once on the given test cases.

There's a Makefile for each exercise and one at the root that binds them all together.

*For a detailed expalantion of the project requirements*, please check the [Subject](en.subject.pdf).

## Explanation

- [BSP](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/README.md#bsp)

## BSP

> Write an algorithm to check whether a point is inside a triangle described by the coordinates of its vertices.

Our input is described as follows

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_vertices.gif)

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_points.gif)

My solution to this problem was to describe each point inside a triangle as a [linear combination](https://en.wikipedia.org/wiki/Linear_combination#:~:text=In%20mathematics%2C%20a%20linear%20combination,a%20and%20b%20are%20constants.)
of the vertices, such as

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_linear_comb.gif)



