#include <iostream>
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#include "ecomm/Portal.h"
#include <fstream>
#include "demo/DemoPortal.h"

using namespace std;
int main()
{
    DemoPortal *mydp = new DemoPortal();
    while (1)
    {
        string cmd;
        getline(cin, cmd);
        if (cmd == "Check")
        {
            mydp->checkResponse();
        }
        else
        {
            mydp->processUserCommand(cmd);
        }
    }
}