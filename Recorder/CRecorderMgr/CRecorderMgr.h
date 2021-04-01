/*!
 * \file CRecorderMgr.h
 *
 * \author resDesE
 * \date 2021/03/31
 *
 * ¼����������
 */
#pragma once
#include "../CRecorder/CRecorder.h"
#include <map>
#include "../RecorderDef.h"

class CRecorderMgr
{
public:
	CRecorderMgr();
	virtual ~CRecorderMgr();
public:
	int OnCreateRec(pRECPARAMS pRecInfo);

	int OnDestroyRecByID(int nRecorderID);

	CRecorder* OnGetRecorderByID(int nRecorderID);
private:
	int OnGenerateRecID();
private:
	map<int, CRecorder*> m_mapRecorders;	// ��ǰ¼����
};


