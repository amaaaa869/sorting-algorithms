#include <cmath>
#include <iostream>

#include "Coordinate.h"


Coordinate::Coordinate(unsigned int t_x, unsigned int t_y) {
	x = t_x;
	y = t_y;
}

void Coordinate::print() {
	std::cout<<"("<<x<<","<<y<<")";
}

void Coordinate::print(std::ofstream& out_stream) {
	out_stream<<"("<<x<<","<<y<<")";
}

unsigned int Coordinate::getX() {
	return x;
}

unsigned int Coordinate::getY() {
	return y;
}

unsigned int Coordinate::getDistance(Coordinate* secondPoint) {
//the shortest distance between two points is a straight line
//return the distance between this point and the secondPoint
	return sqrt(pow(this->x - secondPoint->x, 2) + pow(this->y - secondPoint->y, 2));
	}
