#include "stats.h"


Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
    float sum = 0.0;
    status.min = status.max = vec[0]; //{1.5, 8.9, 3.2, 4.5}

    for (int i = 1; i < vec.size() ; i++) {

        if (vec[i] < status.min)
            status.min = vec[i];
        if (vec[i] > status.max)
            status.max = vec[i];

        sum = sum + vec[i]+ vec[0];
    }

    status.average = sum / vec.size();

    return status;
}

