#pragma once


namespace SiCalo
{
  const double pt_dphi_par0 = -0.1922;
  
  //! Pt of electron in GeV/c is calculated using given dphi (rad), which is a difference of phi at INTT and ECal, at EMCal surface
  double GetPt( double dphi );

  //! Phi of electron in radian in [0, 2pi] is calculated using givein pT in GeV/c.
  double GetDphi( double pt );

};


#ifdef __CINT__
#include "SiCalo_pt_ideal.cc"
#endif // __CINT__

