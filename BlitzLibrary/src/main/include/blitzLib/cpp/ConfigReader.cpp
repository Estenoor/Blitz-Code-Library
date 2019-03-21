#include <ConfigReader.hpp>

bool Blitz::ConfigReader::ReadConfig()
{
    error_code error;
    raw_fd_istream InputStream(FilePath, error);
    if (error) 
    {
        wpi::errs() << "could not open '" << FilePath << "': " << error.message() << '\n';
        return false;
    }

    configJson = wpi::json::parse(InputStream);
    try 
    {
        configJson = wpi::json::parse(InputStream);
    } 
    catch (const wpi::json::parse_error& e) 
    {
        wpi::errs() << "byte " << e.byte << ": " << e.what() << '\n';
        return false;
    }

    if (!configJson.is_object()) 
    {
        wpi::errs() << "must be JSON object\n";
        return false;
    }

    return true;
}

int Blitz::ConfigReader::GetInt(string RefString)
{
    return configJson.at(RefString).get<int>();
}

double Blitz::ConfigReader::GetDouble(string RefString)
{
    return configJson.at(RefString).get<double>();
}

bool Blitz::ConfigReader::GetBool(string RefString)
{
    return configJson.at(RefString).get<bool>();
}

string Blitz::ConfigReader::GetString(string RefString)
{
    return configJson.at(RefString).get<string>();
}