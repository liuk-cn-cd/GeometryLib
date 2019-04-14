/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/

/**
 * @file	: geometrylib.h
 * @brief	:
 * @author	: liuka
 * @date	: 2016/08/28 11:22
 * @version : 1.0.0.0
 * @copyright: liukangx@hotmail.com
 * 
 */
#ifndef GEOMETRYLIB_H
#define GEOMETRYLIB_H
#include "math.h"
#include "geometrylib_global.h"

#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))

#ifndef PI
#define PI 3.1415926535897932384626433832795
#endif

/**
 * @fn		: gFuzzyCompare
 * @brief	: �Ƚ������������Ƿ���ȣ�
 *		��Ϊ�ڸ��������������׳��־�����ʧ��
 *		��ʹ������ʧ�����㷨���ų�������ʧ�ĸ���
 * @access	: public 
 * @param	: double dX1 ���ȽϵĲ���֮һ
 * @param	: double dX2 ���ȽϵĲ���֮һ
 * @return	: �����Ƿ���ȣ���ȷ���true�����򷵻�false
 */
GEOMETRYLIB_EXPORT bool gFuzzyCompare(double dX1, double dX2);

#endif // GEOMETRYLIB_H
