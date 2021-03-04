#include "common.h"
#include "data_import.h"

int main(int argc, char *argv[])
{
    DataImport data_import;

    int frames = 0;
    /*check the results*/
    cout << WHITE"Number of images = " << data_import.camera_data.size() << endl;
    cout << WHITE"Number of IMU measurements = " << data_import.imu_data.size() << endl;

    Mat img = imread(data_import.camera_data[0].img_name, IMREAD_GRAYSCALE );

     for( Camera cam : data_import.camera_data)
    {
        Mat img = imread(cam.img_name, IMREAD_GRAYSCALE );
        imshow("test",img);
        waitKey(50);
        frames++;
    }
    return 0;
}