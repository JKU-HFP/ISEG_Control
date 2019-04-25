//

//

#ifndef __WX_CIRCLE_DLL_H_
#define __WX_CIRCLE_DLL_H_

// parameter IDs
#define SPEED 0
#define STARTANGLE 1
#define TRAVELANGLE 2
#define RADIUS 3
#define STARTX 4
#define STARTY 5
#define MAXACC 6
#define MAXDEC 7
#define TIMEBASE 8
#define UNITSPERCOUNTX 9
#define UNITSPERCOUNTY 10
#define MINX 11
#define MAXX 12
#define MINY 13
#define MAXY 14
#define CENTERX 15
#define CENTERY 16
#define TARGETANGLE 17
#define DIRECTION 18
#define CYCLESPERSTEP 19
#define STRETCHX 20
#define STRETCHY 21
#define LISSAX 22
#define LISSAY 23
#define ACCFAC 24
#define DECFAC 25
#define VELFAC 26
#define XAXISINDEX 27
#define YAXISINDEX 28
#define XAXISNAME 29
#define YAXISNAME 30
#define WRAPPING 31
#define XAXISMAXVEL 32
#define XAXISMAXACC 33
#define XAXISMAXDEC 34
#define YAXISMAXVEL 35
#define YAXISMAXACC 36
#define YAXISMAXDEC 37
#define ADDITIONAL_HALTS 38
#define CANWRAP 39
#define CIRCLEA 100

#define PROFILE_CIRCLE					10
#define PROFILE_GUI						20

#include "stdpi.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef PI_PROFGEN_TOOL_STATIC
	#pragma message("Static Profile Generator lib")
	#define PROFILE_FUNC_DECL WINAPI
#else
	// if we compile this as a static library we MUST NOT use dllexport and dllimport !
	#ifdef WX_CIRCLE_DLL_EXPORTS
		#define PROFILE_FUNC_DECL __declspec(dllexport) WINAPI		 // included during the build of generic_i.dll
	#else
		#define PROFILE_FUNC_DECL __declspec(dllimport) WINAPI		 // nothing defined, included by client application unsing dll
	#endif
#endif


int PROFILE_FUNC_DECL ProfileGenerator_OpenDialog(int iID);
int PROFILE_FUNC_DECL ProfileGenerator_CreateProfile(int iProfileType,int iSteps);
BOOL PROFILE_FUNC_DECL ProfileGenerator_UpdateProfile(int iID,int iType);
int PROFILE_FUNC_DECL ProfileGenerator_GetError(int iID);
BOOL PROFILE_FUNC_DECL ProfileGenerator_SetParam(int iID, const int iParamID , double dValue);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetParam(int iID, const int iParamID , double* dValue);
BOOL PROFILE_FUNC_DECL ProfileGenerator_SetIntParam(int iID, const int iParamID , int iValue);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetIntParam(int iID, const int iParamID , int* iValue);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetOutput(int iID, char* szAnswer, const int bufsize);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetOutputSize(int iID, long* iAnswerSize);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GenerateProfileOutput(int iID);
BOOL PROFILE_FUNC_DECL ProfileGenerator_DestroyProfile(int ID);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetNumberOfSteps(int ID,int* iSteps);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetTimeVals(double *time);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetYStepVals(double *ystep);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetXStepVals(double *xstep);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetXSplineVals(double *a,double *b,double *c,double *d);
BOOL PROFILE_FUNC_DECL ProfileGenerator_GetYSplineVals(double *a,double *b,double *c,double *d);
#ifdef _DEBUG
BOOL PROFILE_FUNC_DECL ProfileGenerator_OpenUPMDialog(long iID,char* szDataFileName);
#endif
#ifdef __cplusplus
}
#endif


#endif //__WX_CIRCLE_DLL_H_
