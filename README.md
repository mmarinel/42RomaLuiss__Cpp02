# 42RomaLuiss__Cpp02

Cpp piscine Module 02.

type "make run" when at the root of this directory to run all exercises at once on the given test cases.

There's a Makefile for each exercise and one at the root that binds them all together.

*For a detailed expalantion of the project requirements*, please check the [Subject](en.subject.pdf).

## Explanation

- [BSP](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/README.md#bsp)

## BSP

> Write an algorithm to check whether a point is inside a triangle described by the coordinates of its vertices.

This is a very simple proof of the inner workings of my algorithm.
It uses basic maths and geometry.
The point is that it may not be obvious how to write an algorithm for such problem (and the people who wrote theirs on their own know it), no matter how simple this proof is.

Our input is described as follows

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_vertices.gif)

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_points.gif)

My solution to this problem was to describe each point inside a triangle as a [linear combination](https://en.wikipedia.org/wiki/Linear_combination#:~:text=In%20mathematics%2C%20a%20linear%20combination,a%20and%20b%20are%20constants.)
of two vertices, such as

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_linear_comb.gif)

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/triangle_linear_comb.png)

- If we set `w1 = 1, w2 = 0` we obtain point `B`
- If we set `w1 = 0, w2 = 1` we obtain point `C`
- If we set `w1 = 0, w2 = 0` we obtain point `A`

We notice that by playing with our weights we can get different vectors. Also, by the [parallelogram law](https://en.wikipedia.org/wiki/Parallelogram_law), we go towards the `AB` edge as our weights grow.

Now, the point is to determine the conditions for which our point lies on the `AB` edge, so that we can state a constraint on the weights telling us whether our point is inside or outside the triangle.

Let's picture a case when our point lies on the edge

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_triangle_edge.png)

We immediately recognize, by the [parallelogram law](https://en.wikipedia.org/wiki/Parallelogram_law), that the sum vector forms a similar triangle with respect to the original one.

So, as we can see from our image, the following must be true

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_similar.gif)

Therefore, the following holds

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_similar_2.gif)

which is just 
![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_similar_3.gif)

**So, we can now state that, for our point being inside the triangle, it must be that the sum of its weights must not be greater than `1`!**.


But how can we calculate our weights? And is there a unique set of weights for each point?

The answer to the last question is yes, and by answering why it we will also answer the first one.

Imagine to [translate](https://en.wikipedia.org/wiki/Translation_(geometry)) our plane so that the origin is on point `A`. Then, we can describe equation 

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_linear_comb.gif)

as as system of the equation on two unknowns on the `x, y` components

![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_eq_sys.gif)

that's because we have to subtract the coordinates of point `B` in this new system of coordinates as follows:
- new x of B is old x of B minus old x of A (because we shifted the plane)
- new y of B ...//the same

the same applies for points C and P.

As it turns out (this is basic algebra), the solution to this system of equations is

1. ![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_w1_sol.gif)
2. ![](https://github.com/mmarinel/42RomaLuiss__Cpp02/blob/master/formulas/bsp_w2_sol.gif)
