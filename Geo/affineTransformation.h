// Gmsh - Copyright (C) 1997-2018 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/gmsh/gmsh/issues

#ifndef _AFFINETRANSFORMATION_H_
#define _AFFINETRANSFORMATION_H_

#include <vector>

// compute affine transformation from rotation/translation

bool computeAffineTransformation(const double *rc, // rotation center
                                 const double *ra, // rotation angle
                                 const double *tr, // translation
                                 std::vector<double> &tfo // transformation
);
// compute affine transfomration from rotation/translation

bool computeAffineTransformation(const float *rc, // rotation center
                                 const float *ra, // rotation angle
                                 const float *tr, // translation
                                 std::vector<double> &tfo // transformation
);

// invert affine transformation

bool invertAffineTransformation(const std::vector<double> &tfo,
                                std::vector<double> &newTfo);

// initialize transformation with unitary one

bool setUnitAffineTransformation(std::vector<double> &tfo);

#endif
