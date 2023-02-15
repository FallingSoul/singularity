#ifndef __SL_CPU_FEATURE__
#define __SL_CPU_FEATURE__


#include <core/cpu/cpuid.hpp>


#if defined(SL_CPU_X86) || defined(SL_CPU_X64)
namespace sl 
{
    namespace core
    {
        namespace cpu
        {
            class slCpuFeature
            {
                public:
                slCpuFeature(const slCpuID<1> &cpuid = slCpuID<1>())
                {
                    reinterpret_cast<int *>(&this->feature)[0] = cpuid.info.edx;
                    reinterpret_cast<int *>(&this->feature)[1] = cpuid.info.ecx;
                }
                struct
                {
                    // FPU On-chip
                    bool FPU : 1;
                    // Virtual Mode Extended
                    bool VME : 1;
                    // Debugging Extension
                    bool DE : 1;
                    // Page Size Extension
                    bool PSE : 1;
                    // Time Stamp Counter
                    bool TSC : 1;
                    // Model Specific Registers
                    bool MSR : 1;
                    // Physical Address Extensions
                    bool PAE : 1;
                    // Machine-Check Exception
                    bool MCE : 1;
                    // CMPXCHG8 Instruction
                    bool CX8 : 1;
                    // On-chip APIC Hardware
                    bool APIC : 1;
                    bool : 1;
                    // Fast System Call
                    bool SEP : 1;
                    // Memory Type Range Registers
                    bool MTRR : 1;
                    // Page Global Enable
                    bool PGE : 1;
                    // Machine-Check Architecture
                    bool MCA : 1;
                    // Conditional Move Instruction
                    bool CMOV : 1;
                    // Page Attribute Table
                    bool PAT : 1;
                    // 36-bit Page Size Extension
                    bool PSE36 : 1;
                    // Processer serial number is present and enabled
                    bool PSN : 1;
                    // CLFUSH Instruction
                    bool CLFSH : 1;
                    bool : 1;
                    // Debug Store
                    bool DS : 1;
                    // Thermal Monitor and Software Controlled Clock Facilities
                    bool ACPI : 1;
                    // MMX technology
                    bool MMX : 1;
                    // FXSAVE and FXSTOR Instructions
                    bool FXSR : 1;
                    // Streaming SIMD Extensions
                    bool SSE : 1;
                    // Streaming SIMD Extensions 2
                    bool SSE2 : 1;
                    // Self-Snoop
                    bool SS : 1;
                    // Multi-Threading
                    bool HTT : 1;
                    // Thermal Monitor
                    bool TM : 1;
                    bool : 1;
                    // Pending Break Enable
                    bool PBE : 1;



                    // Streaming SIMD Extensions 3
                    bool SSE3 : 1;
                    bool : 1;
                    // 64-bit Debug Store
                    bool DTES64 : 1;
                    // MONITOR/MWAIT
                    bool MONITOR : 1;
                    // CPL Qualified Debug Store
                    bool DSCPL : 1;
                    // Virtual Machine Extensions
                    bool VMX : 1;
                    // Safer Mode Extensions
                    bool SMX : 1;
                    // Enhanced Intel SpeedStep Technology
                    bool EST : 1;
                    // Thermal Monitor 2
                    bool TM2 : 1;
                    // Supplemental Streaming SIMD Extensions 3
                    bool SSSE3 : 1;
                    // L1 Context ID
                    bool CNXTID : 1;
                    // Silicon Debug
                    bool SDBG : 1;
                    // FMA Extensions
                    bool FMA : 1;
                    // CMPXCHG16
                    bool CX16 : 1;
                    // xTPR Update Control
                    bool xTPR : 1;
                    // Perfmon and Debug Capability
                    bool PDCM : 1;
                    bool : 1;
                    // Process-Context ID
                    bool PCID : 1;
                    // Direct Cache Access
                    bool DCA : 1;
                    // Streaming SIMD Extensions 4.1
                    bool SSE4_1 : 1;
                    // Streaming SIMD Extensions 4.2
                    bool SSE4_2 : 1;
                    // Extended xAPIC Support
                    bool x2APIC : 1;
                    // MOVBE Instruction
                    bool MOVBE : 1;
                    // POPCNT Instruction
                    bool POPCNT : 1;
                    // TSC-Deadline
                    bool TSCDL : 1;
                    // AESNI
                    bool AESNI : 1;
                    // XSAVE/XSTOR States
                    bool XSAVE : 1;
                    // OSXSAVE
                    bool OSXSAVE : 1;
                    // AVX
                    bool AVX : 1;
                    // F16C
                    bool F16C : 1;
                    // RDRAND
                    bool RDRAND : 1;
                    bool : 1;
                } feature;
            };
        }
    }
}
#endif

#endif //!__SL_CPU_FEATURE__