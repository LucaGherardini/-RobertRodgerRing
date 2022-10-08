# JohnnySvenssonRing
Simple c++ application to plot the Johnny Svensson's ring equation (http://paulbourke.net/fractals/peterdejong/) in a text file usable for plotting. The code doesn't require particular libraries or settings. Running the program passing the desired number of iterations is recommended.
> ./JohnnySvenssonRing 1000

The output will be contained in a text file named 'ring.txt' in the same folder.

## Plotting using gnuplot
how to plot correctly = 	plot 'ring.txt' lc rgb 'grey' pointtype 0
[rgb 'code'] [pointtype 0 = simple point]

point types --> https://i.imgur.com/xNZa7Rz.png

To change background color in gnuplot, set object 1 rectangle from screen 0,0 to screen 1,1 fillcolor rgb "black" behind


## interesting colours (RGB code)

dark grey =  #494444

light blue = #6666CC

deep blue = #0D53BD

dark blue = #011F4D

![ring](https://user-images.githubusercontent.com/27780725/153289280-b77cff80-18f4-4a47-afc1-fc9e7324d5f7.png)
