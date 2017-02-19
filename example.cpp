#include <Eigen\Core>
#include <iostream>
#include <random>
#include <time.h>
#include "randomeigen.h"

using namespace std;
using namespace Eigen;

int main()
{
    time_t Time = time(NULL);
    default_random_engine E;
    E.seed(Time);
    default_random_engine& qE=E;

    normal_distribution<double> R;
    normal_distribution<double>& qR=R;

    Matrix<double, 30,1> Mat;
    Matrix<double, 30,1>& qMat=Mat;

    getRandomNum(qMat,qR,qE);
    cout << qMat << endl;
    return 0;
}
