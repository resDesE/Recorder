/*!
 * \file RecorderDef.h
 *
 * \author black
 * \date 2021/03/29
 *
 * ������ؽṹ����
 */
#pragma once
#ifdef _WIN32
#include <vcruntime_string.h>
#else

#endif

#define ERR_REC_OK		0	// û�д���
#define ERR_REC_NO_MEM	-1	// �ڴ治��
#define ERR_REC_NO_INIT	-2	// δ��ʼ��

#define  SAVE_PATH_LEN 260	// �洢·������

// ��Ƶ��������
#define VIDEO_CODEC_TYPE_H264	1	// h264
#define VIDEO_CODEC_TYPE_H265	2	// h265

// ��Ƶ��������
#define AUDIO_CODEC_TYPE_AAC	1	// ��Ƶ�������� aac

// �ļ��������
#define FILE_PACK_TYPE_MP4		1	// �ļ�������� mp4

typedef enum EN_REC_STATUS
{
	enRecStop = 0,	// ¼��ֹͣ
	enRecing,		// ¼����
	enRecPause,		// ¼����ͣ��
}ENRECSTATUS;

typedef struct _tagRECPARAMS
{
	int nDstVideoWidth;	// Ŀ����Ƶ���
	int nDstVideoHeight;	// Ŀ����Ƶ�߶�
	bool bEnableAudioRec;	// �Ƿ�����Ƶ¼��
	int nVideoEncodeType;	// ��Ƶ��������
	int nAudioEncodeType;	// ��Ƶ��������
	int nDstPackType;	// Ŀ���װ����
	char szDstSavePath[SAVE_PATH_LEN];	// ¼�ƴ洢λ��

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

