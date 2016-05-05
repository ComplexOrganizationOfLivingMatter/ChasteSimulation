
#include "ChasteBuildRoot.hpp"

const char* ChasteBuildRootDir()
{
    return "/home/pablo/chaste-source/";
}

const char* ChasteSourceRootDir()
{
    return "/home/pablo/chaste-source/";
}

std::string ChasteComponentBuildDir(const std::string& rComponent)
{
    return std::string(ChasteBuildRootDir()) + rComponent + "/build/debug/";
}

std::string ChasteBuildDirName()
{
    return "debug";
}

std::string ChasteBuildType()
{
    return "default";
}

