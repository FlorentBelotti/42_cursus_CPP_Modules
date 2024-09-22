/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbelotti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 23:58:49 by fbelotti          #+#    #+#             */
/*   Updated: 2024/09/22 19:38:24 by fbelotti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void printTestHeader(int testNumber) {
	std::cout << "\n--- Test " << testNumber << " ---\n";
}

void printTriangle(const Point &a, const Point &b, const Point &c) {
	std::cout << "Triangle vertices:\n";
	std::cout << "A(" << a.getX().toFloat() << ", " << a.getY().toFloat() << ")\n";
	std::cout << "B(" << b.getX().toFloat() << ", " << b.getY().toFloat() << ")\n";
	std::cout << "C(" << c.getX().toFloat() << ", " << c.getY().toFloat() << ")\n";
}

void printPoint(const Point &p) {
	std::cout << "Point P(" << p.getX().toFloat() << ", " << p.getY().toFloat() << ")\n";
}

void checkPointInTriangle(const Point &a, const Point &b, const Point &c, const Point &p) {
	if (bsp(a, b, c, p)) {
		std::cout << "Result: Point is inside the triangle.\n";
	} else {
		std::cout << "Result: Point is outside the triangle.\n";
	}
}

int main(void) {
	printTestHeader(1);
	Point a1(0.0f, 0.0f);
	Point b1(10.0f, 0.0f);
	Point c1(0.0f, 10.0f);
	Point p1(2.0f, 2.0f);
	printTriangle(a1, b1, c1);
	printPoint(p1);
	checkPointInTriangle(a1, b1, c1, p1);
	printTestHeader(2);
	Point a2(0.0f, 0.0f);
	Point b2(10.0f, 0.0f);
	Point c2(0.0f, 10.0f);
	Point p2(10.0f, 10.0f);
	printTriangle(a2, b2, c2);
	printPoint(p2);
	checkPointInTriangle(a2, b2, c2, p2);
	printTestHeader(3);
	printTriangle(a1, b1, c1);
	Point p3a(0.0f, 0.0f);
	printPoint(p3a);
	checkPointInTriangle(a1, b1, c1, p3a);
	Point p3b(10.0f, 0.0f);
	printPoint(p3b);
	checkPointInTriangle(a1, b1, c1, p3b);
	Point p3c(0.0f, 10.0f);
	printPoint(p3c);
	checkPointInTriangle(a1, b1, c1, p3c);
	printTestHeader(4);
	printTriangle(a1, b1, c1);	
	Point p4a(5.0f, 0.0f);
	printPoint(p4a);
	checkPointInTriangle(a1, b1, c1, p4a);	
	Point p4b(5.0f, 5.0f);
	printPoint(p4b);
	checkPointInTriangle(a1, b1, c1, p4b);	
	Point p4c(0.0f, 5.0f);
	printPoint(p4c);
	checkPointInTriangle(a1, b1, c1, p4c);	
	printTestHeader(5);
	Point a5(-10.0f, -10.0f);
	Point b5(-20.0f, 0.0f);
	Point c5(0.0f, -20.0f);
	Point p5(-15.0f, -15.0f);
	printTriangle(a5, b5, c5);
	printPoint(p5);
	checkPointInTriangle(a5, b5, c5, p5);	
	return 0;
}


