//
// Created by YuXiao on 12/19/17.
//

#ifndef ALISIMULATOR_ALITRACEPREPROCESSOR_H
#define ALISIMULATOR_ALITRACEPREPROCESSOR_H

#include <iostream>
#include <string>

# include <map>
#include <unordered_map>
#include <vector>

using namespace std;

namespace AliSimulator{
    struct TaskIdentifier{

        uint64_t job_id_;
        uint64_t task_id_;
        int64_t create_timestamp_;
        int64_t modify_timestamp_;

        int32_t instance_num_;
        string status_;
        double plan_cpu_;
        double plan_men_;

    };

    struct BatchInstance{
        int64_t  start_timestamp_;
        int64_t  end_timestamp_;
        int64_t  total_runtime;
        uint64_t  job_id_;
        uint64_t  task_id_;
        int32_t machine_ID_;
        string status_;
        int32_t seq_no_;
        int32_t total_seq_no_;

    };

    struct ServiceInstance{
        int64_t ts;
        string event_;
        uint64_t instance_id_;
        uint32_t machine_id_;
        double plan_cpu_;
        double plan_mem_;
        double plan_disk_;
        vector<int32_t> cpuset_;
    };

class AliTracePreProcessor {

private:

public:
};

}


#endif //ALISIMULATOR_ALITRACEPREPROCESSOR_H
