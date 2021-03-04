#include "common.h"
#include "data_import.h"

int main(int argc, char *argv[])
{
    DataImport data_import;

    /*check the results*/
    cout << WHITE"Number of images = " << data_import.camera_data.size() << endl;
    cout << WHITE"Number of IMU measurements = " << data_import.imu_data.size() << endl;

    cout << data_import.camera_data[0].img_name;
    Mat img = imread(data_import.camera_data[0].img_name, IMREAD_GRAYSCALE );

    imshow("test",img);
    waitKey();
    return 0;
}