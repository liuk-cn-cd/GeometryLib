/**********************************************************************
 * @特别声明
 *     本段代码由liuk创建，所有通过正常途径获取此文件的开发人员
 * 均可任意修改、增加及删除文件内容，但请保留此声明。
 *     如有疑问请联系作者。
 * @特别声明结束
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
