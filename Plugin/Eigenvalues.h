// Gmsh - Copyright (C) 1997-2018 C. Geuzaine, J.-F. Remacle
//
// See the LICENSE.txt file for license information. Please report all
// issues on https://gitlab.onelab.info/gmsh/gmsh/issues

#ifndef _EIGENVALUES_H_
#define _EIGENVALUES_H_

#include "Plugin.h"

extern "C" {
GMSH_Plugin *GMSH_RegisterEigenvaluesPlugin();
}

class GMSH_EigenvaluesPlugin : public GMSH_PostPlugin {
public:
  GMSH_EigenvaluesPlugin() {}
  std::string getName() const { return "Eigenvalues"; }
  std::string getShortHelp() const
  {
    return "Compute eigenvalues of a tensor view";
  }
  std::string getHelp() const;
  int getNbOptions() const;
  StringXNumber *getOption(int iopt);
  PView *execute(PView *);
};

#endif
