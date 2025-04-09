#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <climits>

#define N 5

using namespace std;

void printMatrix(float m[N][N])
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << setw(8) << setprecision(5) << m[i][j];
    }
    cout << endl;
  }
}

float minMatrix(float m[N][N])
{
  float minVal = m[0][0];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (m[i][j] < minVal)
      {
        minVal = m[i][j];
      }
    }
  }
  return minVal;
}

float maxMatrix(float m[N][N])
{
  float maxVal = m[0][0];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (m[i][j] > maxVal)
      {
        maxVal = m[i][j];
      }
    }
  }
  return maxVal;
}

float maxLowerTriangle(float m[N][N])
{
  float maxVal = m[0][0];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (m[i][j] > maxVal)
      {
        maxVal = m[i][j];
      }
    }
  }
  return maxVal;
}

float maxUpperTriangle(float m[N][N])
{
  float maxVal = m[0][0];
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {
      if (m[i][j] > maxVal)
      {
        maxVal = m[i][j];
      }
    }
  }
  return maxVal;
}

float minLowerTriangle(float m[N][N])
{
  float minVal = m[0][0];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (m[i][j] < minVal)
      {
        minVal = m[i][j];
      }
    }
  }
  return minVal;
}

float minUpperTriangle(float m[N][N])
{
  float minVal = m[0][0];
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {
      if (m[i][j] < minVal)
      {
        minVal = m[i][j];
      }
    }
  }
  return minVal;
}

float minMainDiagonal(float m[N][N])
{
  float minVal = m[0][0];
  for (int i = 0; i < N; i++)
  {
    if (m[i][i] < minVal)
    {
      minVal = m[i][i];
    }
  }
  return minVal;
}

float maxMainDiagonal(float m[N][N])
{
  float maxVal = m[0][0];
  for (int i = 0; i < N; i++)
  {
    if (m[i][i] > maxVal)
    {
      maxVal = m[i][i];
    }
  }
  return maxVal;
}

float minSecondaryDiagonal(float m[N][N])
{
  float minVal = m[0][N - 1];
  for (int i = 0; i < N; i++)
  {
    if (m[i][N - 1 - i] < minVal)
    {
      minVal = m[i][N - 1 - i];
    }
  }
  return minVal;
}

float maxSecondaryDiagonal(float m[N][N])
{
  float maxVal = m[0][N - 1];
  for (int i = 0; i < N; i++)
  {
    if (m[i][N - 1 - i] > maxVal)
    {
      maxVal = m[i][N - 1 - i];
    }
  }
  return maxVal;
}

float averageMatrix(float m[N][N])
{
  float sum = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      sum += m[i][j];
    }
  }
  return sum / (N * N);
}

float averageLowerTriangle(float m[N][N])
{
  float sum = 0;
  int count = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      sum += m[i][j];
      count++;
    }
  }
  return sum / count;
}

float averageUpperTriangle(float m[N][N])
{
  float sum = 0;
  int count = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {
      sum += m[i][j];
      count++;
    }
  }
  return sum / count;
}

void rowSums(float m[N][N], float sums[N])
{
  for (int i = 0; i < N; i++)
  {
    sums[i] = 0;
    for (int j = 0; j < N; j++)
    {
      sums[i] += m[i][j];
    }
  }
}

void columnSums(float m[N][N], float sums[N])
{
  for (int j = 0; j < N; j++)
  {
    sums[j] = 0;
    for (int i = 0; i < N; i++)
    {
      sums[j] += m[i][j];
    }
  }
}

void minRows(float m[N][N], float mins[N])
{
  for (int i = 0; i < N; i++)
  {
    mins[i] = m[i][0];
    for (int j = 1; j < N; j++)
    {
      if (m[i][j] < mins[i])
      {
        mins[i] = m[i][j];
      }
    }
  }
}

void minColumns(float m[N][N], float mins[N])
{
  for (int j = 0; j < N; j++)
  {
    mins[j] = m[0][j];
    for (int i = 1; i < N; i++)
    {
      if (m[i][j] < mins[j])
      {
        mins[j] = m[i][j];
      }
    }
  }
}

void maxRows(float m[N][N], float maxs[N])
{
  for (int i = 0; i < N; i++)
  {
    maxs[i] = m[i][0];
    for (int j = 1; j < N; j++)
    {
      if (m[i][j] > maxs[i])
      {
        maxs[i] = m[i][j];
      }
    }
  }
}

void maxColumns(float m[N][N], float maxs[N])
{
  for (int j = 0; j < N; j++)
  {
    maxs[j] = m[0][j];
    for (int i = 1; i < N; i++)
    {
      if (m[i][j] > maxs[j])
      {
        maxs[j] = m[i][j];
      }
    }
  }
}

void averageRows(float m[N][N], float avgs[N])
{
  for (int i = 0; i < N; i++)
  {
    avgs[i] = 0;
    for (int j = 0; j < N; j++)
    {
      avgs[i] += m[i][j];
    }
    avgs[i] /= N;
  }
}

void averageColumns(float m[N][N], float avgs[N])
{
  for (int j = 0; j < N; j++)
  {
    avgs[j] = 0;
    for (int i = 0; i < N; i++)
    {
      avgs[j] += m[i][j];
    }
    avgs[j] /= N;
  }
}

float sumLowerTriangle(float m[N][N])
{
  float sum = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      sum += m[i][j];
    }
  }
  return sum;
}

float sumUpperTriangle(float m[N][N])
{
  float sum = 0;
  for (int i = 0; i < N; i++)
  {
    for (int j = i; j < N; j++)
    {
      sum += m[i][j];
    }
  }
  return sum;
}

float closestToAverage(float m[N][N])
{
  float avg = averageMatrix(m);
  float closest = m[0][0];
  float minDiff = abs(m[0][0] - avg);
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      float diff = abs(m[i][j] - avg);
      if (diff < minDiff)
      {
        minDiff = diff;
        closest = m[i][j];
      }
    }
  }
  return closest;
}

int main()
{
  float m[N][N];
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      m[i][j] = rand() / 10.0;
    }
  }

  printMatrix(m);
  cout << "Average of matrix: " << averageMatrix(m) << endl;
  cout << "Average of lower triangle: " << averageLowerTriangle(m) << endl;
  cout << "Average of upper triangle: " << averageUpperTriangle(m) << endl;
  cout << "Min of matrix: " << minMatrix(m) << endl;
  cout << "Max of matrix: " << maxMatrix(m) << endl;
  cout << "Min of main diagonal: " << minMainDiagonal(m) << endl;
  cout << "Max of main diagonal: " << maxMainDiagonal(m) << endl;
  cout << "Min of secondary diagonal: " << minSecondaryDiagonal(m) << endl;
  cout << "Max of secondary diagonal: " << maxSecondaryDiagonal(m) << endl;
  cout << "Max of lower triangle: " << maxLowerTriangle(m) << endl;
  cout << "Max of upper triangle: " << maxUpperTriangle(m) << endl;
  cout << "Min of lower triangle: " << minLowerTriangle(m) << endl;
  cout << "Min of upper triangle: " << minUpperTriangle(m) << endl;

  float rowSumsArray[N];
  rowSums(m, rowSumsArray);
  cout << "Row sums: ";
  for (int i = 0; i < N; i++)
  {
    cout << rowSumsArray[i] << " ";
  }
  cout << endl;

  float columnSumsArray[N];
  columnSums(m, columnSumsArray);
  cout << "Column sums: ";
  for (int j = 0; j < N; j++)
  {
    cout << columnSumsArray[j] << " ";
  }
  cout << endl;

  float minRowsArray[N];
  minRows(m, minRowsArray);
  cout << "Min of rows: ";
  for (int i = 0; i < N; i++)
  {
    cout << minRowsArray[i] << " ";
  }
  cout << endl;

  float minColumnsArray[N];
  minColumns(m, minColumnsArray);
  cout << "Min of columns: ";
  for (int j = 0; j < N; j++)
  {
    cout << minColumnsArray[j] << " ";
  }
  cout << endl;

  float maxRowsArray[N];
  maxRows(m, maxRowsArray);
  cout << "Max of rows: ";
  for (int i = 0; i < N; i++)
  {
    cout << maxRowsArray[i] << " ";
  }
  cout << endl;

  float maxColumnsArray[N];
  maxColumns(m, maxColumnsArray);
  cout << "Max of columns: ";
  for (int j = 0; j < N; j++)
  {
    cout << maxColumnsArray[j] << " ";
  }
  cout << endl;

  float averageRowsArray[N];
  averageRows(m, averageRowsArray);
  cout << "Average of rows: ";
  for (int i = 0; i < N; i++)
  {
    cout << averageRowsArray[i] << " ";
  }
  cout << endl;

  float averageColumnsArray[N];
  averageColumns(m, averageColumnsArray);
  cout << "Average of columns: ";
  for (int j = 0; j < N; j++)
  {
    cout << averageColumnsArray[j] << " ";
  }
  cout << endl;

  cout << "Sum of lower triangle: " << sumLowerTriangle(m) << endl;
  cout << "Sum of upper triangle: " << sumUpperTriangle(m) << endl;
  cout << "Element closest to average: " << closestToAverage(m) << endl;

  return 0;
}