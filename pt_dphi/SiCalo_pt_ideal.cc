#include "SiCalo_pt_ideal.hh"

namespace SiCalo
{

  //! Pt of electron in GeV/c is calculated using given dphi (rad), which is a difference of phi at INTT and ECal, at EMCal surface
  double GetPt( double dphi )
  {    
    //return fabs(pt_dphi_par1 / ( dphi - pt_dphi_par0 ) );
    return fabs(pt_dphi_par0 / dphi );
  }

  //! Phi of electron in radian in [0, 2pi] is calculated using givein pT in GeV/c.
  double GetDphi( double pt )
  {

  return pt_dphi_par0 / pt;
  }

};
