#include <stdio.h>
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

/*
    http://paulbourke.net/fractals/peterdejong/
*/

int main(int argc, char* args[]){
	/*
	xn+1 = d sin(a xn) - sin(b yn)
	yn+1 = c cos(a xn) + cos(b yn)

    a = 1.40, b = 1.56, c = 1.40, d = -6.56
	*/

    double xn = 0, yn = 0, x = 0, y = 0;    // each variable is computed by the values of the previous, so old values must be stored until the update at
                                            // the end of the loop iteration
    double static a = 1.40, b = 1.56, c = 1.40, d = -6.56;

    int iterations;
    int static defaultIterations = 1000;

    if(argc==1){
        cout<<"Iterations not passed when running this program, using default value ("<<defaultIterations<<")"<<endl;
        iterations = defaultIterations;
    }else{
        iterations = atoi(args[1]);
    }

    ofstream myfile;
    myfile.open ("ring.txt");
    //myfile<<"X"<<" "<<"Y"<<endl;
    for(int k=0;k<iterations;k++){
        xn = d * sin(a * x) - sin(b * y);
        yn = c * cos(a * x) + cos(b * y);

        myfile<<xn<<" "<<yn<<endl;

        x = xn;
        y = yn;
    }

    myfile.close();
    char choice;

    cout<<"Do you want to print the result?(Y/n)";
    cin>>choice;
    if(choice == 'Y' || choice == 'y'){
        system("gnuplot -e \"plot 'ring.txt' lc rgb 'grey' pointtype 0\" -p");
    }


    return 0;
}
