/*************************************************************************
 * reech4x4.h -
 *
 * $Id: reech4x4.begin,v 1.3 2001/12/10 08:45:17 greg Exp $
 *
 * Copyright (c) INRIA 1999
 *
 * AUTHOR:
 * Gregoire Malandain (greg@sophia.inria.fr)
 * 
 * CREATION DATE: 
 *
 *
 * ADDITIONS, CHANGES
 *	
 *	
 *	
 *
 */


/* CAUTION
   DO NOT EDIT THIS FILE,
   UNLESS YOU HAVE A VERY GOOD REASON 
 */

#ifndef _reech4x4_h_
#define _reech4x4_h_

#ifdef __cplusplus
extern "C" {
#endif



extern void setVerboseInReech4x4( int v );
extern void incrementVerboseInReech4x4(  );
extern void decrementVerboseInReech4x4(  );



extern void Reech3DTriLin4x4_u8 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech3DTriLin4x4gb_u8 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech3DNearest4x4_u8 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );
extern void Reech2DTriLin4x4_u8 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech2DTriLin4x4gb_u8 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech2DNearest4x4_u8 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );



extern void Reech3DTriLin4x4_s8 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech3DTriLin4x4gb_s8 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech3DNearest4x4_s8 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );
extern void Reech2DTriLin4x4_s8 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech2DTriLin4x4gb_s8 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech2DNearest4x4_s8 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );



extern void Reech3DTriLin4x4_u16 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech3DTriLin4x4gb_u16 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech3DNearest4x4_u16 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );
extern void Reech2DTriLin4x4_u16 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech2DTriLin4x4gb_u16 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech2DNearest4x4_u16 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );



extern void Reech3DTriLin4x4_s16 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech3DTriLin4x4gb_s16 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech3DNearest4x4_s16 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );
extern void Reech2DTriLin4x4_s16 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech2DTriLin4x4gb_s16 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech2DNearest4x4_s16 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );



extern void Reech3DTriLin4x4_r32 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech3DTriLin4x4gb_r32 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech3DNearest4x4_r32 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );
extern void Reech2DTriLin4x4_r32 ( void* theBuf, /* buffer to be resampled */
			     int *theDim,  /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat   /* transformation matrix */
			     );
extern void Reech2DTriLin4x4gb_r32 ( void* theBuf, /* buffer to be resampled */
			     int *theDim, /* dimensions of this buffer */
			     void* resBuf, /* result buffer */
			     int *resDim,  /* dimensions of this buffer */
			     double* mat,   /* transformation matrix */
			     float gain,
			     float bias );
extern void Reech2DNearest4x4_r32 ( void* theBuf, /* buffer to be resampled */
			      int *theDim,  /* dimensions of this buffer */
			      void* resBuf, /* result buffer */
			      int *resDim,  /* dimensions of this buffer */
			      double* mat   /* transformation matrix */
			      );



#ifdef __cplusplus
}
#endif

#endif
