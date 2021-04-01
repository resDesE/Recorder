#include "CRecorderMgr.h"

CRecorderMgr::CRecorderMgr()
{
}

CRecorderMgr::~CRecorderMgr()
{
}

int CRecorderMgr::OnCreateRec(pRECPARAMS pRecInfo)
{
	return 0;
}

int CRecorderMgr::OnDestroyRecByID(int nRecorderID)
{
	return 0;
}

CRecorder * CRecorderMgr::OnGetRecorderByID(int nRecorderID)
{
	return nullptr;
}

int CRecorderMgr::OnGenerateRecID()
{
	return 0;
}
