/**********************************************************************
* @�ر�����
*     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
* ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
*     ������������ϵ���ߡ�
* @�ر���������
********************************************************************/
/**
 * @file	: GeoLine.h
 * @brief	:
 * @author	: liuk
 * @date	: 2016/11/19 11:29:54
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#ifndef GEOLINE_H
#define GEOLINE_H
#include "GeoPoint.h"
/*!
 * @class	: GeoLine
 * @brief	: ��
 * @author	: liuk
 * @date	: 2016/11/19 11:30
 */
class GeoLine
{
public:
	GeoLine();
	~GeoLine();

public:
	CGeoPoint GetP1() const;
	CGeoPoint GetP2() const;

	double GetX1() const;
	double GetY1() const;
	double GetX2() const;
	double GetY2() const;
	
private:
	CGeoPoint m_ptP1;
	CGeoPoint m_ptP2;
};

#endif // GEOLINE_H