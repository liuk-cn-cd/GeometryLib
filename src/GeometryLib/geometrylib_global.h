/**********************************************************************
 * @�ر�����
 *     ���δ�����liuk����������ͨ������;����ȡ���ļ��Ŀ�����Ա
 * ���������޸ġ����Ӽ�ɾ���ļ����ݣ����뱣����������
 *     ������������ϵ���ߡ�
 * @�ر���������
 ********************************************************************/
#ifndef GEOMETRYLIB_GLOBAL_H
#define GEOMETRYLIB_GLOBAL_H

#ifdef GEOMETRYLIB_LIB
# define GEOMETRYLIB_EXPORT __declspec(dllexport)
#else
# define GEOMETRYLIB_EXPORT __declspec(dllimport) 
#endif

#endif // GEOMETRYLIB_GLOBAL_H
