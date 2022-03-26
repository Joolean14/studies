// 3. Read a sequence of double values into a vector. Think of each value as the
// distance betweentwo cities along a given route. Compute and print the total
// distance (the sum of all distances). Find and print the smallest and greatest
// distance between two neighboring cities. Find and print the mean distance
// between two neighboring cities.

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

// void printMeanDistance(std::vector<double> distances, double totalDistanceSum) {
//   double distanceMean = totalDistanceSum / distances.size();
//   std::cout << distanceMean << "\n";
// }

//Refactorizar distance differences a otra funcion

void printLongestDistance(std::vector<double> distances)
{
  std::vector<double> distanceDifferences = {};

  for (double i = 0; i < distances.size() - 1; i++)
  {
    distanceDifferences.push_back(std::abs(distances[i] - distances[i + 1]));
  }
  double lowest =
      *max_element(distanceDifferences.begin(), distanceDifferences.end());

  std::cout << lowest << "\n";
}

void printShortestDistance(std::vector<double> distances)
{
  std::vector<double> distanceDifferences = {};
  // double  lowest = distanceDifferences[0];
  for (double i = 0; i < distances.size() - 1; i++)
  {
    distanceDifferences.push_back(std::abs(distances[i] - distances[i + 1]));
    // Esto seria mejor en otra funcion? para que sea mas bruta?
    // if (lowest > distanceDifferences[i]) {
    //   lowest = distanceDifferences[i];
    // }
    // esto me genera el error
    // zsh: segmentation fault (core dumped)  ./ex-3
    // std::cout << lowest << " es la distancia mas corta entre dos ciudades
    // vecinas" << "\n";
    //
    // std::cout << distanceDifferences[i] << "\n";
  }
  double lowest =
      *min_element(distanceDifferences.begin(), distanceDifferences.end());
  std::cout << lowest << "\n";
}

double printTotalDistanceSum(std::vector<double> distances)
{
  double totalDistanceSum = 0;

  for (double i = 0; i <= distances.size() - 1; i++)
  {
    totalDistanceSum = totalDistanceSum + distances[i];
    // Estas dos siguientes lineas no funcionan, por que?
    // totalDistanceSum = distances[i] + distances[i + 1]
    // accumulator = totalDistanceSum
  }
  std::cout << totalDistanceSum << "\n";

  return totalDistanceSum;
}

void printAllDistances(std::vector<double> distances)
{
  for (double i = 0; i < distances.size(); i++)
    std::cout << distances[i] << "\n";
}

int main()
{
  double distance;
  int numOfCities = 0;
  std::vector<double> distances;

  std::cout << "Ingrese el numero de ciudades a analizar\n";
  std::cin >> numOfCities;

  for (int i = 1; i <= numOfCities; ++i)
  {
    std::cout << "Ingresa el valor #" << i << "\n";
    std::cin >> distance;
    distances.push_back(distance);
  }

  std::cout << "Distancias ingresadas:\n";
  printAllDistances(distances);

  std::cout << "Total suma distancias:\n";
  printTotalDistanceSum(distances);

  std::cout << "Distancia mas corta entre dos ciudades vecinas:\n";
  printShortestDistance(distances);

  std::cout << "Distancia mas larga entre dos ciudades vecinas:\n";
  printLongestDistance(distances);

  std::cout << "Distancia promedio entre dos ciudades vecinas:\n";
  // printMeanDistance(distances , totalDistanceSum);

  return 0;
}
