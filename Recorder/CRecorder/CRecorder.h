/*!
 * \file CRecorder.h
 *
 * \author resDesE
 * \date 2021/03/31
 *
 * 录制器实现
 */
#pragma once
#include "../RecorderDef.h"


class CRecorder
{
public:
	CRecorder();
	virtual ~CRecorder();
public:
	int OnBeginRec();

	int OnStopRec();

	int OnPauseRec();

	int OnResumeRec();

	long long OnGetRecTimeLen();

	ENRECSTATUS OnGetRecStatus();
public:
	int OnInit();

private:
	int m_nRecStatus;	// 录制状态
	long long m_llBeginRecTick;	// 开始录制tickcount (ms)
	long long m_llPreRecTick;	// 之前录制时长 (ms)
};

