// Recorder.cpp : Defines the exported functions for the DLL application.
//

#include "Recorder.h"

// This is an example of an exported variable
Recorder_API int nRecorder=0;

// This is an example of an exported function.
Recorder_API int fnRecorder(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see Recorder.h for the class definition
CRecorder::CRecorder()
{
    return;
}
