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
	/* Brief:	初始化
	 * Return: 0：成功，否则失败
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnInit();

	/* Brief:	反初始化
	 * Return: void
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT void __stdcall OnFini();
	/* Brief:	创建录制器
	 * Return: >=0成功，小于0失败
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnCreateRecorder(pRECPARAMS pRecInfo);
	/* Brief:	销毁录制器
	 * Return: void
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT void __stdcall OnDestroyRecorder(int nRecorderID);
	/* Brief:	开始录制
	 * Return: 0成功，否则失败
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnStartRecord(int nRecorderID);
	/* Brief:	停止录制
	 * Return: 0成功，否则失败
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnStopRecord(int nRecorderID);
	/* Brief:	暂停录制
	 * Return: 0成功，否则失败
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnPauseRecord(int nRecorderID);
	/* Brief:	恢复录制
	 * Return: 0成功，否则失败
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT int __stdcall OnResumeRecord(int nRecorderID);
	/* Brief:	获取录制时长，（s）
	 * Return: 录制时长(s)
	 * Data: 2021/03/30
	 * Author: resDesE
	*/
	RECORDER_EXPORT long long OnGetRecordTimeLen(int nRecorderID);
	/* Brief:	获取当前录制状态
	 * Return: ENRECSTATUS
	 * Data: 2021/03/31
	 * Author: resDesE
	*/
	RECORDER_EXPORT ENRECSTATUS OnGetRecorderStatus(int nRecorderID);
#ifdef __cplusplus
}
#endif
