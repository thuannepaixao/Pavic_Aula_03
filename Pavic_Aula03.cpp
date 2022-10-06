#include<iostream>
#include<fstream>


using namespace std;

int main() {

	//create images
	ofstream image;

	image.open("./images/RGB.ppm");


	if (image.is_open()) {
		//headings
		image << "P3" << endl;
		image << "3 2" << endl;
		image << "255" << endl;

		//image body

		image << "255 0 0" << endl;				//red
		image << "0 255 0" << endl;				//green
		image << "0 0 255" << endl;				//blue
		image << "255 255 0" << endl;			//yellow
		image << "255 255 255" << endl;			//white
		image << "0 0 0" << endl;				//black


	}

	image.close();

}