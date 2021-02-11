# CPPND: Capstone Mandelbrot Fractal Creator 
This is the Capstone project in the [Udacity C++ Nanodegree Program](https://www.udacity.com/course/c-plus-plus-nanodegree--nd213): Capstone.

In this project the Mandelbrot set is created, written and visualized in a bitmap file. In addition to plotting the set, one of the efficient way of coloring the Mandelbrot set is also implemented. The used coloring approach is 'Histogram Coloring'. Later, with the help of image manipulation tool 'GIMP' a particular pixel with (x, y) coordinates are extracted from the developed colored Mandelbrot set image, where the image needed to be zoomed in. Implementation of the zooming is done several times to get a better view of the edges of the Mandelbrot set. Variation in the color is also implemented by defining a separate RGB class, which also utilizes operator overloading concept for subtracting two RGB values.

The user just needs to build and run this project as per the instructions provided below. The expected output would be a bitmap image named 'mandelbrot.bmp'.

Note: The class sturcture of this project is attached as a PDF file.

## Dependencies for Running Locally
* cmake >= 3.7
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions
1. Clone this repo.
2. Make a build directory in the top level directory: `mkdir build && cd build`
3. Compile: `cmake .. && make`
4. Run it: `./FractalCreator`
5. Output image can be seen in the build directory as 'mandelbrot.bmp'.

## Rubric Points Addressed
1. The project demonstrates an understanding of C++ functions and control structures: Lines 8-23 in 'fractalcreator.cpp' is an good example.
2. The project reads data from a file and process the data, or the program writes data to a file: Lines 20-25 in 'bitmap.cpp' is an good example of writing the data to a file.
3. The project uses Object Oriented Programming techniques: This project has five classes and one of the prominent class is defined in 'fractalcreator.h'.
4. Classes use appropriate access specifiers for class members: Lines 17-34 in 'fractalcreator.h' would be an appropriate example for this.
5. Class constructors utilize member initialization lists: Lines 3-6 in 'fractalcreator.cpp' is a good example.
6. The project makes use of references in function declarations: Line 14 in 'zoomlist.h' is a good example where the function uses pass by reference.
7. The project uses smart pointers instead of raw pointers: Line 21 of 'bitmap.h' is a classical example of using the smart pointer named Unique Pointer.# Mandelbrot-Fractal-Creator
