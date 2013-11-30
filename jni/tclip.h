#include <jni.h>

#include "cv.h"  
#include "opencv2/core/core.hpp"

#ifndef __TCLIP__
#define __TCLIP__

#ifdef __cplusplus
extern "C" {
#endif

int detectFace( cv::Mat img , std::string face_cascade_name);
int detectCharacter( cv::Mat img );

#ifdef __cplusplus
}
#endif

#endif