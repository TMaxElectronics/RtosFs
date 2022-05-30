/*-------------------------------------------*/
/* Integer type definitions for FatFs module */
/*-------------------------------------------*/

#ifndef _INTEGER
#define _INTEGER

#ifdef _WIN32	/* FatFs development platform */

#include <windows.h>
#include <tchar.h>

#else			/* Embedded platform */

/* These types must be 16-bit, 32-bit or larger integer */
typedef int				INT;
typedef unsigned int	UINT;

/* These types must be 8-bit integer */
//typedef char			CHAR;  //Micorchip gives "typedef signed char             CHAR;" in GenericTypeDefs.h - uncommenting both results in no complaints so this one is commented out
typedef unsigned char	UCHAR;
typedef uint8_t	BYTE;

/* These types must be 16-bit integer */
typedef int16_t			SHORT;
typedef uint16_t	USHORT;
typedef uint16_t		WORD;	/* 16-bit unsigned integer */
typedef uint16_t		WCHAR;	/* 16-bit unsigned integer */

/* These types must be 32-bit integer */
typedef int32_t			LONG;
typedef uint32_t	ULONG;
typedef uint32_t		DWORD;	/* 32-bit unsigned integer */
typedef uint64_t		QWORD;	/* 64-bit unsigned integer */

#endif

#endif
