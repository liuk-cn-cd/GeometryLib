/**********************************************************************
* @特别声明
*     本段代码由liuk创建，所有通过正常途径获取此文件的开发人员
* 均可任意修改、增加及删除文件内容，但请保留此声明。
*     如有疑问请联系作者。
* @特别声明结束
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
 * @brief	: 线
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