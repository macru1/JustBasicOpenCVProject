#include <stdio.h>
#include <opencv2/core.hpp>
#include "opencv2/opencv.hpp"
#include "opencv2/highgui.hpp"

using namespace cv;

///<summary>
///Finding possible video inputs choosing video input cameras or selecting footage file returning selected capture
///</summary>
VideoCapture video_source_capture()
{
	int cameras_avaible = avaible_cameras();
	int selected_camera = -1;
	char c;
	c = waitKey(10);
	if(c<=cameras_avaible)

		switch (c)
		{
		case '-1':
		case '0': // if c is 0
		case '1': // or if c is 1
		case '2': // or if c is 2
		case '3': // or if c is 3
		case '4': // or if c is 4
		case '5': // or if c is 5
		case '6': // or if c is 6
		case '7': // or if c is 7
		case '8': // or if c is 8
		case '9': // or if c is 9
			return true; // then return true
		default:
			return false;
		}
	}

	return
}


///<summary>
///Checking if cameras 0 to 9 are available returning number of cameras
///</summary>
int avaible_cameras()
{
	for (int device = 0; device < 10; device++)
	{
		VideoCapture cap(device);
		if (!cap.isOpened())
			return device;
	}
}