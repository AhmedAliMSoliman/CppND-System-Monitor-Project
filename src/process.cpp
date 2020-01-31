#include <unistd.h>
#include <cctype>
#include <sstream>
#include <string>
#include <vector>

#include "process.h"
#include "linux_parser.h"

using std::string;
using std::to_string;
using std::vector;

// TODO: Return this process's ID
int Process::Pid() 
{
    int processsPid = LinuxParser::Pids().back();
    return processsPid;
}

// TODO: Return this process's CPU utilization
float Process::CpuUtilization() { return 0; }

// TODO: Return the command that generated this process
string Process::Command() 
{
    string processCommand = LinuxParser::Command(1);
    return processCommand;
    
}

// TODO: Return this process's memory utilization
string Process::Ram() 
{
    string processRam = LinuxParser::Ram(1);
    return processRam;
    
}

// TODO: Return the user (name) that generated this process
string Process::User() 
{
    string processUser = LinuxParser::User(1);
    return processUser;
}

// TODO: Return the age of this process (in seconds)
long int Process::UpTime() { return 0; }

// TODO: Overload the "less than" comparison operator for Process objects
// REMOVE: [[maybe_unused]] once you define the function
bool Process::operator<(Process const& a[[maybe_unused]]) const { return true; }