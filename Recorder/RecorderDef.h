/*!
 * \file RecorderDef.h
 *
 * \author black
 * \date 2021/03/29
 *
 * 对外相关结构定义
 */
#pragma once
#ifdef _WIN32
#include <vcruntime_string.h>
#else

#endif

#define ERR_REC_OK		0	// 没有错误
#define ERR_REC_NO_MEM	-1	// 内存不足
#define ERR_REC_NO_INIT	-2	// 未初始化

#define  SAVE_PATH_LEN 260	// 存储路径长度

// 视频编码类型
#define VIDEO_CODEC_TYPE_H264	1	// h264
#define VIDEO_CODEC_TYPE_H265	2	// h265

// 音频编码类型
#define AUDIO_CODEC_TYPE_AAC	1	// 音频编码类型 aac

// 文件打包类型
#define FILE_PACK_TYPE_MP4		1	// 文件打包类型 mp4

typedef enum EN_REC_STATUS
{
	enRecStop = 0,	// 录制停止
	enRecing,		// 录制中
	enRecPause,		// 录制暂停中
}ENRECSTATUS;

typedef struct _tagRECPARAMS
{
	int nDstVideoWidth;	// 目标视频宽度
	int nDstVideoHeight;	// 目标视频高度
	bool bEnableAudioRec;	// 是否开启音频录制
	int nVideoEncodeType;	// 视频编码类型
	int nAudioEncodeType;	// 音频编码类型
	int nDstPackType;	// 目标封装类型
	char szDstSavePath[SAVE_PATH_LEN];	// 录制存储位置

	_tagRECPARAMS()
	{
		nDstVideoWidth = 1920;
		nDstVideoHeight = 1080;
		bEnableAudioRec = true;
		nVideoEncodeType = VIDEO_CODEC_TYPE_H264;
		nAudioEncodeType = AUDIO_CODEC_TYPE_AAC;
		nDstPackType = FILE_PACK_TYPE_MP4;
		memset(szDstSavePath, 0x00, SAVE_PATH_LEN);
	}
}RECPARAMS, *pRECPARAMS;

