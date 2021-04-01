/*!
 * \file CRecorderMgr.h
 *
 * \author resDesE
 * \date 2021/03/31
 *
 * 录制器管理类
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
	map<int, CRecorder*> m_mapRecorders;	// 当前录制器
};


