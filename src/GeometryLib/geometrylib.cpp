/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/
/**
 * @file	: geometrylib.cpp
 * @brief	:
 * @author	: liuk
 * @date	: 2016/08/28 11:22
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#include "geometrylib.h"


GEOMETRYLIB_EXPORT bool gFuzzyCompare(double dX1, double dX2)
{
	return fabs(dX1 - dX2) <= 0.00000001F * (min(fabs(dX1), fabs((dX2))));
}
