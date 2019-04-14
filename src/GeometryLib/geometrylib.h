/**********************************************************************
 * @特别声明
 *     本段代码由liuk创建，所有通过正常途径获取此文件的开发人员
 * 均可任意修改、增加及删除文件内容，但请保留此声明。
 *     如有疑问请联系作者。
 * @特别声明结束
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
 * @brief	: 比较两个浮点数是否相等，
 *		因为在浮点数计算中容易出现精度损失，
 *		故使用这种失精的算法来排除精度损失的干扰
 * @access	: public 
 * @param	: double dX1 待比较的参数之一
 * @param	: double dX2 待比较的参数之一
 * @return	: 两数是否相等，相等返回true，否则返回false
 */
GEOMETRYLIB_EXPORT bool gFuzzyCompare(double dX1, double dX2);

#endif // GEOMETRYLIB_H
