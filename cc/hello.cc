#include<iostream>

using namespace std;

class Box{
	public:
		double length;
		double breadth;
		double height;
		double get(void);
		void set(double len, double bre, double hei);
};

double Box::get(void){
	return length * breadth * height;
}

void Box::set(double len, double bre, double hei){
	length = len;
	breadth = bre;
	height = hei;
}

class gamebox:public Box{
	public:
		int getArea(){
			return (length * breadth);
		}
};
int main(void){
	int num;
	cout << "please input a num:" << endl;
	cin >> num;
	cout << num << endl;

	Box box;
	gamebox gbx;

	box.height = 2;
	box.length = 2;
	box.breadth = 2;
	cout << "box's volume: " << box.get() << endl;
	
	gbx.height = 4;
	gbx.length = 2;
	gbx.breadth = 3;

	cout << "gamebox's volume: " << gbx.get() << endl;
	cout << "gamebox's area: " << gbx.getArea() << endl;
	return 0;
}


