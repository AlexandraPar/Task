#include "circles.h"
#include <math.h>
#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

int circles(string path)
{
    vector <int> n;
    vector <double> radius1;
    vector <double> x1;
    vector <double> y1;

    double d = 0.0;
    int maxnum = -1;

    ifstream file;
    file.open(path.c_str());

    if (!file)
    {
        return -1;
    }
    else
    {
        string line;

        if (file.peek() == EOF) return -1;
        while (getline(file, line))
        {
            istringstream iss(line);
            string token;

            int i = 0;
            while (getline(iss, token, ','))
            {
                if (i == 0) n.push_back(atoi(token.c_str()));
                if (i == 1) x1.push_back(atof(token.c_str()));
                if (i == 2) y1.push_back(atof(token.c_str()));
                if (i == 3) radius1.push_back(atof(token.c_str()));
                i++;
            }
        }
    }

    for (int i = 0; i < (n.size() - 1); ++i)
    {
        for (int j = i + 1; j < n.size(); ++j)
        {
            d = sqrt(pow((x1[i] - x1[j]), 2) + pow((y1[i] - y1[j]), 2));

            if (d > radius1[i] + radius1[j])
            {
                if (maxnum == -1)
                {
                    if (radius1[i] > radius1[j])
                        maxnum = n[i];
                    else
                        maxnum = n[j];
                }
                else
                {
                    if ((radius1[i] > radius1[j]) && (radius1[i] > radius1[maxnum]))
                        maxnum = n[i];
                    else
                        if ((radius1[i] < radius1[j]) && (radius1[j] > radius1[maxnum]))
                            maxnum = n[j];
                }
            }
        }
    }
    if (maxnum == -1)
        cout << "File hasn't the circle with the largest radius, without intersections with other circles" << endl;

 //   cout << "ID of the circle with the largest radius, without intersections with other circles: " << maxnum << endl;

    return maxnum;
}
