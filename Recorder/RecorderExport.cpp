#include "RecorderExport.h"
#include "CRecorderMgr/CRecorderMgr.h"

CRecorderMgr* g_pRecMgr = nullptr;

bool OnCheckInit()
{
	return nullptr == g_pRecMgr;
}

int __stdcall OnInit()
{
	if (nullptr == g_pRecMgr)
	{
		g_pRecMgr = new(std::nothrow) CRecorderMgr;
		if (nullptr == g_pRecMgr)
		{
			return ERR_REC_NO_MEM;
		}
	}
	return ERR_REC_OK;
}

void __stdcall OnFini()
{
	if (nullptr != g_pRecMgr)
	{
		delete g_pRecMgr;
		g_pRecMgr = nullptr;
	}
}

int __stdcall OnCreateRecorder(pRECPARAMS pRecInfo)
{
	if (OnCheckInit())
	{
		return ERR_REC_NO_INIT;
	}
	return g_pRecMgr->OnCreateRec(pRecInfo);
}

void __stdcall OnDestroyRecorder(int nRecorderID)
{
	if (OnCheckInit())
	{
		return ERR_REC_NO_INIT;
	}
	return g_pRecMgr->OnDestroyRecByID(nRecorderID);
}

RECORDER_EXPORT int __stdcall OnStartRecord(int nRecorderID)
{
	if (OnCheckInit())
	{
		return ERR_REC_NO_INIT;
	}
	return g_pRecMgr->OnGetRecorderByID(nRecorderID)->OnBeginRec();
}

RECORDER_EXPORT int __stdcall OnStopRecord(int nRecorderID)
{
	if (OnCheckInit())
	{
		return ERR_REC_NO_INIT;
	}
	return g_pRecMgr->OnGetRecorderByID(nRecorderID)->OnStopRec();
}

RECORDER_EXPORT int __stdcall OnPauseRecord(int nRecorderID)
{
	if (OnCheckInit())
	{
		return ERR_REC_NO_INIT;
	}
	return g_pRecMgr->OnGetRecorderByID(nRecorderID)->OnPauseRec();
}

RECORDER_EXPORT int __stdcall OnResumeRecord(int nRecorderID)
{
	if (OnCheckInit())
	{
		return ERR_REC_NO_INIT;
	}
	return g_pRecMgr->OnGetRecorderByID(nRecorderID)->OnResumeRec();
}

RECORDER_EXPORT long long OnGetRecordTimeLen(int nRecorderID)
{
	if (OnCheckInit())
	{
		return ERR_REC_NO_INIT;
	}
	return g_pRecMgr->OnGetRecorderByID(nRecorderID)->OnGetRecTimeLen();
}

RECORDER_EXPORT ENRECSTATUS OnGetRecorderStatus(int nRecorderID)
{
	if (OnCheckInit())
	{
		return enRecStop;
	}
	return g_pRecMgr->OnGetRecorderByID(nRecorderID)->OnGetRecStatus();
}
