#ifndef TESTS_H
#define TESTS_H

#include <iostream>
#include "DAGTask.h"
#include "Taskset.h"

bool Graham1969(const Taskset& taskset, const int m); 

bool G_EDF_Baruah2012_C(const DAGTask& task, const int m);
bool G_EDF_Baruah2012_A(const DAGTask& task, const int m);

bool G_EDF_Bonifaci2013_A(const Taskset& taskset, const int m);
bool G_DM_Bonifaci2013_A(const Taskset& taskset, const int m);
bool G_DM_Bonifaci2013_C(const Taskset& taskset, const int m);

bool G_EDF_Li2013_I(const Taskset& taskset, const int m);

bool G_EDF_Qamhieh2013_C(Taskset taskset, const int m); 

bool G_EDF_Baruah2014_C(Taskset taskset, const int m); //TODO

#endif /*TESTS_H*/