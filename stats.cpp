#include "stats.h"


Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
    float sum = 0.0;
    Stats structObj;
    structObj.min = structObj.max = sum = vec[0]; //{1.5, 8.9, 3.2, 4.5}

    for (int i = 1; i < vec.size(); i++) {

        if (vec[i] < structObj.min)
            structObj.min = vec[i];
        if (vec[i] > structObj.max)
            structObj.max = vec[i];

        sum = sum + vec[i];
    }

    structObj.average = sum / vec.size();

    return structObj;
}

Stats Statistics::ComputeStatisticsNAN(const std::vector<float>& vec) {
    //Implement statistics here
    float sum = 0.0;
    Stats structObj;
    structObj.min = structObj.max = sum = vec[0]; //{1.5, 8.9, 3.2, 4.5}

    for (int i = 1; i < vec.size(); i++) {

        if (vec[i] < structObj.min)
            structObj.min = vec[i];
        if (vec[i] > structObj.max)
            structObj.max = vec[i];

        sum = sum + vec[i];
    }

    structObj.average = sum / vec.size();

    return structObj;
}

