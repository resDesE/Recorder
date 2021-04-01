/*!
 * \file RecorderExport.h
 *
 * \author resDesE
 * \date 2021/03/29
 *
 * 
 */
#pragma once
#include "RecorderDef.h"

#ifdef STATIC_BUILD
#define RECORDER_EXPORT _declspec(dllimport)
#else
#define RECORDER_EXPORT _declspec(dllexport)
#endif


#ifdef __cplusplus
extern "C" 
{
#endif
	/* Brief:	��ʼ��
	 * Return: 0���ɹ�������ʧ��
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnInit();

	/* Brief:	����ʼ��
	 * Return: void
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT void __stdcall OnFini();
	/* Brief:	����¼����
	 * Return: >=0�ɹ���С��0ʧ��
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnCreateRecorder(pRECPARAMS pRecInfo);
	/* Brief:	����¼����
	 * Return: void
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT void __stdcall OnDestroyRecorder(int nRecorderID);
	/* Brief:	��ʼ¼��
	 * Return: 0�ɹ�������ʧ��
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnStartRecord(int nRecorderID);
	/* Brief:	ֹͣ¼��
	 * Return: 0�ɹ�������ʧ��
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnStopRecord(int nRecorderID);
	/* Brief:	��ͣ¼��
	 * Return: 0�ɹ�������ʧ��
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnPauseRecord(int nRecorderID);
	/* Brief:	�ָ�¼��
	 * Return: 0�ɹ�������ʧ��
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnResumeRecord(int nRecorderID);
	/* Brief:	��ȡ¼��ʱ������s��
	 * Return: ¼��ʱ��(s)
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT long long OnGetRecordTimeLen(int nRecorderID);
	/* Brief:	��ȡ��ǰ¼��״̬
	 * Return: ENRECSTATUS
	 * Data: 2021/03/31
	 * Author: resDesE
	*/
	RECORDER_EXPORT ENRECSTATUS OnGetRecorderStatus(int nRecorderID);
#ifdef __cplusplus
}
#endif
