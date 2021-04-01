/*!
 * \file CRecorder.h
 *
 * \author resDesE
 * \date 2021/03/31
 *
 * ¼����ʵ��
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
	int m_nRecStatus;	// ¼��״̬
	long long m_llBeginRecTick;	// ��ʼ¼��tickcount (ms)
	long long m_llPreRecTick;	// ֮ǰ¼��ʱ�� (ms)
};

