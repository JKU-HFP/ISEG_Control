/**
 * @file isegopcclientlibrary.h
 * @brief This is the include file for the iseg OPC Client library.
 *
 * The iseg OPC Client library offers a simple C interface to the
 * functions of iseg OPC Server.
 *
 * Copyright (c) 2010-2013 iseg Spezialelektronik GmbH (www.iseg-hv.com),
 * Bautzner Landstr. 23, 01454 Radeberg / Rossendorf, Germany,
 * in the following labeled as "Author".
 *
 * All rights reserved.
 *
 * Please contact the company for details of the license contract.
 * Unless required by applicable law or agreed to in writing,
 * the software is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either expressed or implied.
 *
 * This software has been developed with reasonable diligance and has been
 * tested on various different systems. During the tests no malfunctions or
 * bugs have been identified. However, a bug-free operation of the software
 * cannot be guaranteed. Therefore, the author assumes no liability for any
 * hardware incompatibilities or malfunction in operation with other software
 * or their components.
 *
 * The software is provided without any warranty for functionality or correct
 * operation. Any damages consequential to the using of the software is within
 * the responsibility of the user. Under no circumstances the Author takes any
 * responsibility for damages directly or indirectly consequential to the using
 * of the software.
 *
 * If malfunctions occure, the author will perform bug-fixing within reasonable
 * efforts. The corresponding documentation is subject to change without notice
 * and the author takes no responsibility for any error in this document.
 * The author reserves the right to make changes in the software design without
 * any notification to the users.
 *
 * However, the author assumes no obligations of support, bug-fixing or redesign
 * of this software and the corresponding documents.
 */

#ifndef ISEGOPCCLIENT_H
#define ISEGOPCCLIENT_H

#include <stdint.h>

/**
 * @brief OPC_API allows simple importing of library functions from this DLL.
 *
 * All files within this DLL are compiled with the OPC_EXPORTS symbol defined.
 * Any other project including this file see OPC_API functions as being
 * imported from a DLL, wheras this DLL sees symbols defined with this macro
 * as being exported.
 * @note Do not define OPC_EXPORTS in any project using this DLL.
 */


#ifdef OPC_EXPORTS
#define OPC_API __declspec(dllexport)
#else
#define OPC_API __declspec(dllimport)
#endif

/**
 * @brief This is the function prototype for an OPC callback function.
 *
 * After this function is registered with opc_setCallback(),
 * it is called whenever OPC data changes.
 * @param path The fully-qualified identifier of the changed value.
 * @param value The new value, converted to a null-terminated string.
 */
typedef void (*OpcCallback)(const char *path, const char *value);

#ifdef __cplusplus
	extern "C" {
#endif

// new API
OPC_API int      opc_init(int updateRate);
OPC_API void     opc_quit(void);
OPC_API float    opc_getFloat(const char *path, bool *ok);
OPC_API uint8_t  opc_getByte(const char *path, bool *ok);
OPC_API uint16_t opc_getUnsignedShort(const char *path, bool *ok);
OPC_API uint32_t opc_getUnsignedLong(const char *path, bool *ok);
OPC_API uint64_t opc_getUnsignedLongLong(const char *path, bool *ok);
OPC_API bool     opc_getBool(const char *path, bool *ok);

OPC_API const char *opc_getString(const char *path, bool *ok);
OPC_API const char *opc_getModuleList(bool *ok);
OPC_API const char *opc_getChannelList(bool *ok);
OPC_API const char *opc_getItemList(bool *ok);

OPC_API bool opc_setFloat(const char *path, float value);
OPC_API bool opc_setByte(const char *path, uint8_t value);
OPC_API bool opc_setUnsignedShort(const char *path, uint16_t value);
OPC_API bool opc_setUnsignedLong(const char *path, uint32_t value);
OPC_API bool opc_setUnsignedLongLong(const char *path, uint64_t value);
OPC_API bool opc_setBool(const char *path, bool value);
OPC_API bool opc_setString(const char *path, const char *value);
OPC_API bool opc_setCallback(OpcCallback function);

OPC_API const char *opc_getVersionString(void);
OPC_API uint32_t opc_getVersion(void);

// old (iseg internal) API
#ifdef DEPRECATED
OPC_API int Init(int updateRate);
OPC_API void Quit();
OPC_API float GetFloatValue(const char *path, bool *ok);
OPC_API uint8_t  Getuw8Value(const char *path, bool *ok);
OPC_API uint16_t Getuw16Value(const char *path, bool *ok);
OPC_API uint32_t Getuw32Value(const char *path, bool *ok);
OPC_API bool opc_getBoolValue(const char *path, bool *ok);
OPC_API bool GetString(const char *path, char *value);
OPC_API bool GetModuleList(char *value);
OPC_API bool GetChannelList(char *value);
OPC_API bool SetFloatValue(const char *path, float value);
OPC_API bool Setuw8Value(const char *path, uint8_t value);
OPC_API bool Setuw16Value(const char *path, uint16_t value);
OPC_API bool Setuw32Value(const char *path, uint32_t value);
OPC_API bool SetBoolValue(const char *path, bool value);
OPC_API bool SetString(const char *path, const char *value);
#endif

#ifdef __cplusplus
	}
#endif

#endif // ISEGOPCCLIENT_H
