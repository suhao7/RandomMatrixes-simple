#include <Eigen\Core>

template <typename T, int row, int col, class U, class E>
void getRandomNum(Eigen::Matrix<T,row,col>& m, U& u, E& e)
{
    for (int j=0; j<col; j++)
    {
        for (int i=0; i<row; i++)
        {
            m(i,j) = u(e);
        }
    }
}
