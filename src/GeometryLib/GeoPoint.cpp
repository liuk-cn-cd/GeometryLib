/**********************************************************************
* @特别声明
*     本段代码由liuk创建，所有通过正常途径获取此文件的开发人员
* 均可任意修改、增加及删除文件内容，但请保留此声明。
*     如有疑问请联系作者。
* @特别声明结束
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


