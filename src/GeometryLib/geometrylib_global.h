/**********************************************************************
 * @特别声明
 *     本段代码由liuk创建，所有通过正常途径获取此文件的开发人员
 * 均可任意修改、增加及删除文件内容，但请保留此声明。
 *     如有疑问请联系作者。
 * @特别声明结束
 ********************************************************************/
#ifndef GEOMETRYLIB_GLOBAL_H
#define GEOMETRYLIB_GLOBAL_H

#ifdef GEOMETRYLIB_LIB
# define GEOMETRYLIB_EXPORT __declspec(dllexport)
#else
# define GEOMETRYLIB_EXPORT __declspec(dllimport) 
#endif

#endif // GEOMETRYLIB_GLOBAL_H
