// 3. Read a sequence of double values into a vector.
// Think of each value as the distance betweentwo cities along a given route.
// Compute and print the total distance (the sum of all distances).
// Find and print the smallest and greatest distance between two neighboring cities.
// Find and print the mean distance between two neighboring cities.

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
#include <numeric>
#include <bits/stdc++.h>
#include <algorithm>

std::vector<double> distance = {};

void readCityDistances()
{
    int numberOfDistances = 0;

    std::cout << "Ingresa el número de distancias: \n";
    std::cin >> numberOfDistances;

    for (int i = 1; i <= numberOfDistances; i++)
    {
        double cityDistance = 0;
        std::cout << "Ingresa distancia # " << i << "\n";
        std::cin >> cityDistance;
        distance.push_back(cityDistance);
    }
}

double addCityDistances(std::vector<double> distanceP)
{
    double distanceSum = std::accumulate(distanceP.begin(), distanceP.end(), 0.0);
    std::cout << "Esta es la suma de las distancias: " << distanceSum << "\n";
    return distanceSum;
}

double getGreatestDistance()
{
    std::sort(distance.begin(), distance.end());
    std::cout << "La distancia más grande es: " << distance[distance.size() - 1] << "\n";
    return distance[distance.size() - 1];
}

double getSmallestDistance()
{
    std::sort(distance.begin(), distance.end());
    std::cout << "La distancia más pequeña es: " << distance[0] << "\n";
    return distance[0];
}

int main()
{
    readCityDistances();
    addCityDistances(distance);
    getGreatestDistance();
    getSmallestDistance();
    return 0;
}