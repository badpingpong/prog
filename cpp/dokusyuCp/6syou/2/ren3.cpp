#include <iostream>
using namespace std;


class coord{
	int x,y;
	public:
	coord(int i=0,int j=0){x=i;y=j;}
	void getxy(int &i,int &j){i=x;j=y;}
	int operator+(coord ob2);
	coord operator-(coord ob2);
	coord operator=(coord ob2);
	coord operator*(coord ob2);
	coord operator/(coord ob2);
	
};

int coord::operator+(coord ob2){
	coord temp;
	temp.x= x + ob2.x;
	temp.y= y + ob2.y;
	return temp.x;
}

coord coord::operator-(coord ob2){
	coord temp;
	temp.x= x - ob2.x;
	temp.y= y - ob2.y;
	return temp;
}


coord coord::operator=(coord ob2){
	coord temp;
	x= ob2.x;
	y= ob2.y;
	return *this;
}


coord coord::operator*(coord ob2){
	coord temp;
	temp.x= x * ob2.x;
	temp.y= y * ob2.y;
	return temp;
}

coord coord::operator/(coord ob2){
	coord temp;
	temp.x= x / ob2.x;
	temp.y= y / ob2.y;
	return temp;
}


int main(){
	coord o1(10,10), o2(5,3) , o3;
	int x,y;

	o3 = o1+o2;
	o3.getxy(x,y);
	cout << "(o1+o2) X: " << x << ",Y: " << y << "\n";

	o3 = o1-o2;
	o3.getxy(x,y);
	cout << "(o1-o2) X: " << x << ",Y: " << y << "\n";


	o3 = o1*o2;
	o3.getxy(x,y);
	cout << "(o1*o2) X: " << x << ",Y: " << y << "\n";


	o3 = o1/o2;
	o3.getxy(x,y);
	cout << "(o1/o2) X: " << x << ",Y: " << y << "\n";


	o3 = o1;
	o3.getxy(x,y);
	cout << "(o3=o1) X: " << x << ",Y: " << y << "\n";


	return 0;
}
