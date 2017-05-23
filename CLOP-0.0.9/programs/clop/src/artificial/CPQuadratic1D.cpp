/////////////////////////////////////////////////////////////////////////////
//
// CPQuadratic1D.cpp
//
// Rémi Coulom
//
// October, 2008
//
/////////////////////////////////////////////////////////////////////////////
#include "CPQuadratic1D.h"

/////////////////////////////////////////////////////////////////////////////
// Constructor
/////////////////////////////////////////////////////////////////////////////
CPQuadratic1D::CPQuadratic1D(double x0, double Strength, double Steepness):
 x0(x0),
 Strength(Strength),
 Steepness(Steepness)
{
}

/////////////////////////////////////////////////////////////////////////////
// Quadratic strength function
/////////////////////////////////////////////////////////////////////////////
double CPQuadratic1D::GetStrength(const double v[]) const
{
 double Delta = v[0] - x0;
 return Strength - Steepness * Delta * Delta;
}

/////////////////////////////////////////////////////////////////////////////
// Optimal parameters
/////////////////////////////////////////////////////////////////////////////
void CPQuadratic1D::GetOptimalParameters(double v[]) const
{
 v[0] = x0;
}
