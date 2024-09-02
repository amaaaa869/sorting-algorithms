#include <fstream>

class Coordinate {
	 private:
		unsigned int x;
		unsigned int y;
	public:
		Coordinate(unsigned int x, unsigned int y);
		unsigned int getX();
		unsigned int getY();
		void print();
		void print(std::ofstream& out_stream);
		unsigned int getDistance(Coordinate* second);
};
