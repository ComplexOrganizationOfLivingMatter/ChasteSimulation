/*

Copyright (c) 2005-2016, University of Oxford.
All rights reserved.

University of Oxford means the Chancellor, Masters and Scholars of the
University of Oxford, having an administrative office at Wellington
Square, Oxford OX1 2JD, UK.

This file is part of Chaste.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
 * Redistributions of source code must retain the above copyright notice,
   this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.
 * Neither the name of the University of Oxford nor the names of its
   contributors may be used to endorse or promote products derived from this
   software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

*/

/**
 * @file
 * 
 * This is a template file for generating the Version.cpp source on the fly.
 * Content of the form %(example)s is replaced by suitable values.
 * See the function GetVersionCpp in python/SConsTools.py for more details.
 */

#include "Version.hpp"
#include <sstream>
#include <ctime>
#include <climits>

std::string ChasteBuildInfo::GetLicenceText()
{
    return "Copyright (c) 2005-2016, University of Oxford.\nAll rights reserved.\n\nUniversity of Oxford means the Chancellor, Masters and Scholars of the\nUniversity of Oxford, having an administrative office at Wellington\nSquare, Oxford OX1 2JD, UK.\n\nRedistribution and use in source and binary forms, with or without\nmodification, are permitted provided that the following conditions are met:\n * Redistributions of source code must retain the above copyright notice,\n   this list of conditions and the following disclaimer.\n * Redistributions in binary form must reproduce the above copyright notice,\n   this list of conditions and the following disclaimer in the documentation\n   and/or other materials provided with the distribution.\n * Neither the name of the University of Oxford nor the names of its\n   contributors may be used to endorse or promote products derived from this\n   software without specific prior written permission.\n\nTHIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS \"AS IS\"\nAND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE\nIMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE\nARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE\nLIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR\nCONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE\nGOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)\nHOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT\nLIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT\nOF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n";
}

const char* ChasteBuildInfo::GetRootDir()
{
    return "/home/pablo/chaste-source";
}

std::string ChasteBuildInfo::GetVersionString()
{
    std::stringstream version;
    version << GetMajorReleaseNumber() << "." << GetMinorReleaseNumber()
            << "." << GetRevisionNumber();
    return version.str();
}

unsigned ChasteBuildInfo::GetMajorReleaseNumber()
{
    return 3u;
}

unsigned ChasteBuildInfo::GetMinorReleaseNumber()
{
    return 4u;
}

unsigned ChasteBuildInfo::GetRevisionNumber()
{
    return 26039;
}

bool ChasteBuildInfo::IsWorkingCopyModified()
{
    return false;
}

const char* ChasteBuildInfo::GetBuildTime()
{
    return "Thu, 05 May 2016 08:12:37 +0000";
}

const char* ChasteBuildInfo::GetCurrentTime()
{
    // Get time in UTC
    time_t rawtime;
    time(&rawtime);
    struct tm* p_timeinfo = gmtime(&rawtime);
    // Convert to string
    const unsigned bufsize = 32;
    static char buffer[bufsize];
    strftime(buffer, bufsize, "%a, %d %b %Y %H:%M:%S +0000", p_timeinfo);
    return buffer;
}

const char* ChasteBuildInfo::GetBuilderUnameInfo()
{
    return "Linux PabloPhD 4.2.0-35-generic #40~14.04.1-Ubuntu SMP Fri Mar 18 16:37:35 UTC 2016 x86_64";
}

const char* ChasteBuildInfo::GetBuildInformation()
{
    return "default, shared libraries";
}

const char* ChasteBuildInfo::GetCompilerType()
{
	return "gcc";
}

const char* ChasteBuildInfo::GetCompilerVersion()
{
	return "4.8";
}

const char* ChasteBuildInfo::GetCompilerFlags()
{
	return "-Wall -Werror -Wnon-virtual-dtor -Woverloaded-virtual -Wextra -Wno-unused-parameter -Wvla -g";
}

const std::map<std::string, std::string>& ChasteBuildInfo::rGetProjectVersions()
{
    static std::map<std::string, std::string> versions;
    if (versions.empty())
    {
                versions["example"] = "Unversioned directory";
;
    }
    return versions;
}

std::string ChasteBuildInfo::GetProvenanceString()
{
    std::stringstream prov;
    prov << "Created by Chaste version " << GetVersionString();
    if (IsWorkingCopyModified())
    {
        prov << " (with uncommitted modifications)";
    }
    prov << " on " << GetCurrentTime() << ".  ";
    prov << "Chaste was built on " << GetBuildTime()
         << " by machine (uname) '" << GetBuilderUnameInfo()
         << "' using settings: " << GetBuildInformation();
    const std::map<std::string, std::string>& r_project_versions = rGetProjectVersions();
    for (std::map<std::string, std::string>::const_iterator iter = r_project_versions.begin();
         iter != r_project_versions.end();
         ++iter)
    {
        if (iter == r_project_versions.begin())
        {
            prov << ".  Checked-out project versions: ";
        }
        else
        {
            prov << "; ";
        }
        prov << iter->first << "=" << iter->second;
    }
    prov << "." << std::endl;
    return prov.str();
}

const char* ChasteBuildInfo::GetXsdVersion()
{
	return "3.3.0";
}
