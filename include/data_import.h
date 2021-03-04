#ifndef DATA_IMPORT_H
#define DATA_IMPORT_H

#include "common.h"
#include "data_structures.h"
//#include "ConsoleColor.h"

class DataImport
{
public:
    DataImport();
    ~DataImport();
    bool importImu();
    bool importCamera();

    vector<IMU> imu_data;
    vector<Camera> camera_data;
};

#endif // DATA_IMPORT_H