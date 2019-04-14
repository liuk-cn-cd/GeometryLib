/**********************************************************************
* @�ر�����
*     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
* ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
*     ������������ϵ���ߡ�
* @�ر���������
********************************************************************/
/**
 * @file	: GeoPoint.cpp
 * @brief	:
 * @author	: liuk
 * @date	: 2016/08/28 12:14
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#include "GeoPoint.h"

CGeoPoint::CGeoPoint()
	: m_dX(0.0F),m_dY(0.0F)
{

}


CGeoPoint::CGeoPoint(const CGeoPoint &point)
{
	*this = point;
}

CGeoPoint::CGeoPoint(double xpos, double ypos)
	: m_dX(xpos), m_dY(ypos)
{
}

CGeoPoint::~CGeoPoint()
{
}


