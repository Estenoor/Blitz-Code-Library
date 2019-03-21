#pragma once

#include <frc/WPILib.h>
#include <wpi/json.h>
#include <wpi/raw_istream.h>

using namespace frc;
using namespace std;
using namespace wpi;

namespace Blitz
{
    class ConfigReader
    {
        public:

            ConfigReader(string fileName)
            {
                FilePath += fileName;
            }

            bool ReadConfig();

            int GetInt(string RefString);
            double GetDouble(string RefString);

            bool GetBool(string RefString);

            string GetString(string RefString);

        private:
            json configJson;

            string FilePath = "/home/lvuser/deploy/";
    };
}