/**********************************************************************
 * @�ر�����
 *		���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 *		���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *		������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/

/**
 * @file	: GeoPoint.h
 * @brief	: ����ͼ�ε����������
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
 * @brief	: ����ͼ���еĵ㣬��X����Y�����깲ͬ����
 * @author	: liuk
 * @date	: 2016/08/28 12:26
 */
class CGeoPoint
{
public:

	/**
	 * @fn		: CGeoPoint
	 * @brief	: ���Ĭ�Ϲ��캯������X�����������Ϊ0.0
	 * @access	: public 
	 */
	CGeoPoint();

	/**
	 * @fn		: CGeoPoint
	 * @brief	: �������캯��
	 * @access	: public 
	 * @param	: const CGeoPoint & point  ���촫ֵ
	 */
	CGeoPoint(const CGeoPoint &point);


	/**
	 * @fn		: CGeoPoint
	 * @brief	: ���캯��
	 * @access	: public 
	 * @param	: double xpos x������
	 * @param	: double ypos y������
	 */
	CGeoPoint(double xpos, double ypos);


	/**
	 * @fn		: ~CGeoPoint
	 * @brief	: ����
	 * @access	: public 
	 */
	~CGeoPoint();

	/**
	 * @fn		: ManhattanLength
	 * @brief	: ���غ�������ľ���ֵ�úͣ����Ǵ�ͳ�ϵĴ�ԭ�㿪ʼ��ʸ���ġ������ٳ��ȡ���
	 *		�����ͳ�ĳ�������Ϊ�����ľ����������ھ��η��������е��������ǣ����������ٵĽֵ�һ����
	 * @access	: public 
	 * @return	: double ��������ٳ���
	 */
	inline double ManhattanLength() const;

	/**
	 * @fn		: rx
	 * @brief	: ����x��������ã���ͨ���Է���ֵ�޸Ķ�ֱ�ӸĶ���ǰ�����
	 * @access	: public 
	 * @return	: double& x�����������
	 */
	inline double& rx();

	/**
	* @fn		: ry
	* @brief	: ����y��������ã���ͨ���Է���ֵ�޸Ķ�ֱ�ӸĶ���ǰ�����
	* @access	: public
	* @return	: double& y�����������
	*/
	double& ry();

	/**
	 * @fn		: SetX
	 * @brief	: ����X������
	 * @access	: public 
	 * @param	: double dX �µ�X���� 
	 * @return	: void
	 */
	inline void SetX(double dX);

	/**
	 * @fn		: SetY
	 * @brief	: ����Y������
	 * @access	: public 
	 * @param	: double dY �µ�Y������
	 * @return	: void
	 */
	inline void SetY(double dY);
	
	/**
	 * @fn		: GetX
	 * @brief	: ��ȡ��ǰ��X����
	 * @access	: public 
	 * @return	: ��ǰ��X����
	 */
	inline double GetX() const;

	/**
	* @fn		: GetY
	* @brief	: ��ȡ��ǰ��Y����
	* @access	: public
	* @return	: ��ǰ��Y����
	*/
	inline double GetY() const;

	/**
	 * @fn		: operator*
	 * @brief	: ��ĳ˷����㣬�����������ͬʱ��Ϊָ������
	 * @access	: public 
	 * @param	: double factor Ҫ�ı�ı���
	 * @return	: CGeoPoint �����ĵ�����
	 */
	inline CGeoPoint operator*(double factor) const;

	/**
	 * @fn		: operator*=
	 * @brief	: �Գ�����
	 * @access	: public 
	 * @param	: double factor Ҫ����ı���
	 * @return	: ��ǰ�������
	 */
	inline CGeoPoint& operator*=(double factor);
	
	/**
	 * @fn		: operator+
	 * @brief	: ����������ĺͣ������������ֱ����
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
	 * @brief	: ����������ĵ��
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