#ifndef SYSTEM_PARSER_H
#define SYSTEM_PARSER_H

#include <fstream>
#include <regex>
#include <string>

namespace LinuxParser {
// Paths
const std::string kProcDirectory{"/proc/"};
const std::string kCmdlineFilename{"/cmdline"};
const std::string kCpuinfoFilename{"/cpuinfo"};
const std::string kStatusFilename{"/status"};
const std::string kStatFilename{"/stat"};
const std::string kUptimeFilename{"/uptime"};
const std::string kMeminfoFilename{"/meminfo"};
const std::string kVersionFilename{"/version"};
const std::string kOSPath{"/etc/os-release"};
const std::string kPasswordPath{"/etc/passwd"};

// System
float MemoryUtilization();          // return the system memory utilization       // Done -- at some point 
long UpTime();                      // return the system uptim                    // Done 
std::vector<int> Pids();            // Update this to use std::filesystem         // Done -- BONUS
int TotalProcesses();               // return the total number of processes       // Done
int RunningProcesses();             // return the number of running processes     // Done
std::string OperatingSystem();      // read data from the filesystemDone example  // Done 
std::string Kernel();               // read data from the filesystemDone example  // Done

// CPU
enum CPUStates {
  kUser_ = 0,
  kNice_,
  kSystem_,
  kIdle_,
  kIOwait_,
  kIRQ_,
  kSoftIRQ_,
  kSteal_,
  kGuest_,
  kGuestNice_
};
std::vector<std::string> CpuUtilization();    // return CPU utilization
long Jiffies();                               // return the number of jiffies for the system
long ActiveJiffies();                         // return the number of active jiffies for the system
long ActiveJiffies(int pid);                  // return the number of active jiffies for a PID
long IdleJiffies();                           // return the number of idle jiffies for the system

// Processes
std::string Command(int pid);     // Done , return command associated with a process              // used in Process with 1 as paramerter for now 
std::string Ram(int pid);         // Done , return memory used by a process                       // used in Process with 1 as paramerter for now
std::string Uid(int pid);         // Done , return user ID associated with a process              // used in Process with 1 as paramerter for now
std::string User(int pid);        // Done , return the user associated with a process             // used in Process with 1 as paramerter for now
long int UpTime(int pid);         // Done , return the uptime of a processv (bad implementation)  // used in Process with 1 as paramerter for now


};  // namespace LinuxParser

#endif