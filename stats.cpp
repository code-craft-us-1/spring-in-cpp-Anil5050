#include "stats.h"


Stats Statistics::ComputeStatistics(const std::vector<float>& vec) {
    //Implement statistics here
    float sum = 0.0;
    status.min = status.max = vec[0];

    for (int i = 1; i < array_size; i++) {

        if (array[i] < smallest)
            status.min = vec[i];
        if (array[i] > largest)
            status.max = vec[i];

        sum = sum + vec[i]+ vec[0];
    }

    status..average = sum / vec.size();

    return status;
}

