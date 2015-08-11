/***********************************************************************
 * Main to test Sphere class.
 ***********************************************************************/


#include "Sphere.cpp"

// Function prototype
void printSphereInfo(Sphere *);

int main(){
	
	int radius;
	
	cout << "Enter the radius of a sphere: ";
	cin >> radius;
	
	Sphere one(radius);
	
	printSphereInfo(&one);
	
	return 0;
}

void printSphereInfo(Sphere *obj){
	cout << "Radius: " << obj->getRadius() << endl;
	cout << "Volume: " << obj->getVolume() << endl;
}
