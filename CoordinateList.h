#include <fstream>
#include <vector>

#include "Coordinate.h"

class CoordinateList {
	 private:
		std::vector<Coordinate*> allPoints;
		Coordinate* center;
		unsigned int findNextClosest(unsigned int start); 
	public:
		CoordinateList(unsigned int size);
		void print();
		void print(std::ofstream& out_stream);
		void createCenterPoint();
		void orderListFromCenter(); 
		Coordinate* getCenter();
		unsigned int getDistanceFromCenter(unsigned int index);
};
