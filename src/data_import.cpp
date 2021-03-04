#include "data_import.h"
#include <fstream>

DataImport::DataImport()
{
    std::cout << BLUE"#### Importing Imu and Camera data ####\n";

    if (importImu() && importCamera() )
       std::cout << GREEN"#### Imu and Camera data imported suscessfully! ####\n";
    else
       std::cout << RED"#### Imu and Camera data not imported. Check the path. ####\n";
}

DataImport::~DataImport() {}


bool DataImport::importImu()
{
    bool success = false;
    string imu_path = "../mav0/imu0/data.txt";
    ifstream inFile;
    inFile.open(imu_path.c_str());
    while (inFile.good())
    {
        success = true;
        IMU imu;
        inFile >> imu.time_stamp >> imu.wx >> imu.wy >> imu.wz >> imu.ax >> imu.ay >> imu.az;
        imu_data.push_back(imu);
        inFile.get();
    }
    imu_data.pop_back();

    return success;
}

bool DataImport::importCamera()
{
    bool success = false;
    string cam_path = "../mav0/cam0/data.txt";
    ifstream inFile;
    inFile.open(cam_path.c_str());
    while (inFile.good())
    {
        success = true;
        Camera cam;
        inFile >> cam.time_stamp >> cam.img_name;
        cam.img_name  = "../mav0/cam0/data/" + cam.img_name;
        camera_data.push_back(cam);
        inFile.get();
    }
    camera_data.pop_back();

    return success;
}