/**********************************************************************
 * @特别声明
 *		本段代码由liuk创建，所有通过正常途径获取此文件的开发人员
 *		均可任意修改、增加及删除文件内容，但请保留此声明。
 *		如有疑问请联系作者。
 * @特别声明结束
 ********************************************************************/

/**
 * @file	: GeoPoint.h
 * @brief	: 几何图形点的类型申明
 * @author	: liuk
 * @date	: 2016/08/28 12:14
 * @version : 1.0.0.0
 * @contact	: liukangx@hotmail.com
 * 
 */
#ifndef _GEOPOINT_H
#define _GEOPOINT_H
#include <math.h>

/*!
 * @class	: CGeoPoint
 * @brief	: 几何图形中的点，有X轴与Y轴坐标共同描述
 * @author	: liuk
 * @date	: 2016/08/28 12:26
 */
class CGeoPoint
{
public:

	/**
	 * @fn		: CGeoPoint
	 * @brief	: 点的默认构造函数，其X、坐标均设置为0.0
	 * @access	: public 
	 */
	CGeoPoint();

	/**
	 * @fn		: CGeoPoint
	 * @brief	: 拷贝构造函数
	 * @access	: public 
	 * @param	: const CGeoPoint & point  构造传值
	 */
	CGeoPoint(const CGeoPoint &point);


	/**
	 * @fn		: CGeoPoint
	 * @brief	: 构造函数
	 * @access	: public 
	 * @param	: double xpos x轴坐标
	 * @param	: double ypos y轴坐标
	 */
	CGeoPoint(double xpos, double ypos);


	/**
	 * @fn		: ~CGeoPoint
	 * @brief	: 析构
	 * @access	: public 
	 */
	~CGeoPoint();

	/**
	 * @fn		: ManhattanLength
	 * @brief	: 返回横纵坐标的绝对值得和，就是传统上的从原点开始的矢量的“曼哈顿长度”。
	 *		这个传统的出现是因为这样的距离适用于在矩形方格上旅行的履行者们，就像曼哈顿的街道一样。
	 * @access	: public 
	 * @return	: double 点的曼哈顿长度
	 */
	inline double ManhattanLength() const;

	/**
	 * @fn		: rx
	 * @brief	: 返回x坐标的引用，可通过对返回值修改而直接改动当前坐标点
	 * @access	: public 
	 * @return	: double& x轴的坐标引用
	 */
	inline double& rx();

	/**
	* @fn		: ry
	* @brief	: 返回y坐标的引用，可通过对返回值修改而直接改动当前坐标点
	* @access	: public
	* @return	: double& y轴的坐标引用
	*/
	double& ry();

	/**
	 * @fn		: SetX
	 * @brief	: 设置X轴坐标
	 * @access	: public 
	 * @param	: double dX 新的X坐标 
	 * @return	: void
	 */
	inline void SetX(double dX);

	/**
	 * @fn		: SetY
	 * @brief	: 设置Y轴坐标
	 * @access	: public 
	 * @param	: double dY 新的Y轴坐标
	 * @return	: void
	 */
	inline void SetY(double dY);
	
	/**
	 * @fn		: GetX
	 * @brief	: 获取当前点X坐标
	 * @access	: public 
	 * @return	: 当前点X坐标
	 */
	inline double GetX() const;

	/**
	* @fn		: GetY
	* @brief	: 获取当前点Y坐标
	* @access	: public
	* @return	: 当前点Y坐标
	*/
	inline double GetY() const;

	/**
	 * @fn		: operator*
	 * @brief	: 点的乘法运算，将其横纵坐标同时变为指定倍数
	 * @access	: public 
	 * @param	: double factor 要改变的倍数
	 * @return	: CGeoPoint 运算后的点坐标
	 */
	inline CGeoPoint operator*(double factor) const;

	/**
	 * @fn		: operator*=
	 * @brief	: 自乘运算
	 * @access	: public 
	 * @param	: double factor 要扩大的倍数
	 * @return	: 当前点的引用
	 */
	inline CGeoPoint& operator*=(double factor);
	
	/**
	 * @fn		: operator+
	 * @brief	: 计算两个点的和，将其横纵坐标分别相加
	 * @access	: public 
	 * @param	: const CGeoPoint & point
	 * @return	: CGeoPoint
	 */
	inline CGeoPoint operator+(const CGeoPoint &point) const;
	inline CGeoPoint& operator+=(const CGeoPoint &point);
	inline CGeoPoint operator-(const CGeoPoint &point) const;
	inline CGeoPoint& operator-=(const CGeoPoint &point);
	inline CGeoPoint operator/(double divisor) const;
	inline CGeoPoint& operator/=(double divisor);

	/**
	 * @fn		: dotProduct
	 * @brief	: 计算两个点的点积
	 * @access	: public static 
	 * @param	: const CGeoPoint & p1
	 * @param	: const CGeoPoint & p2
	 * @return	: double
	 */
	static inline double dotProduct(const CGeoPoint &p1, const CGeoPoint &p2)
	{
		return p1.m_dX * p2.m_dX + p1.m_dY * p2.m_dY;
	}
private:
	double m_dX;
	double m_dY;
};

inline double CGeoPoint::ManhattanLength() const
{
	return fabs(m_dY) + fabs(m_dX);
}

inline double & CGeoPoint::rx()
{
	return m_dX;
}

inline double & CGeoPoint::ry()
{
	return m_dY;
}

inline void CGeoPoint::SetX(double dX)
{
	m_dX = dX;
}

inline void CGeoPoint::SetY(double dY)
{
	m_dY = dY;
}

inline double CGeoPoint::GetX() const
{
	return m_dX;
}

inline double CGeoPoint::GetY() const
{
	return m_dY;
}

inline CGeoPoint CGeoPoint::operator*(double factor) const
{
	return CGeoPoint(m_dX * factor, m_dY * factor);
}

inline CGeoPoint & CGeoPoint::operator*=(double factor)
{
	*this = *this * factor;
	return *this;
}

inline CGeoPoint CGeoPoint::operator+(const CGeoPoint & point) const
{
	return CGeoPoint(m_dX + point.GetX(), m_dY + point.GetY());
}


inline CGeoPoint& CGeoPoint::operator+=(const CGeoPoint &point)
{
	*this = *this + point;
	return *this;
}

inline CGeoPoint CGeoPoint::operator-(const CGeoPoint & point) const
{
	return CGeoPoint(m_dX - point.GetX(), m_dY - point.GetY());
}

inline CGeoPoint & CGeoPoint::operator-=(const CGeoPoint & point)
{
	*this = *this - point;
	return *this;
}

inline CGeoPoint CGeoPoint::operator/(double divisor) const
{
	return CGeoPoint(m_dX / divisor, m_dY / divisor);
}

inline CGeoPoint & CGeoPoint::operator/=(double divisor)
{
	*this = *this / divisor;
	return *this;
}

#endif