/*************************************************************************
 *                                                                       *
 * Copyright (c) 2011 Hirokazu Odaka                                     *
 *                                                                       *
 * This program is free software: you can redistribute it and/or modify  *
 * it under the terms of the GNU General Public License as published by  *
 * the Free Software Foundation, either version 3 of the License, or     *
 * (at your option) any later version.                                   *
 *                                                                       *
 * This program is distributed in the hope that it will be useful,       *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 * GNU General Public License for more details.                          *
 *                                                                       *
 * You should have received a copy of the GNU General Public License     *
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. *
 *                                                                       *
 *************************************************************************/

// PrimaryGen module
// PlaneWavePrimaryGenPol
// 2011-06-15 Hirokazu Odaka : based on PlaneWavePrimaryGenPol
//

#ifndef COMPTONSOFT_PlaneWavePrimaryGenPol_H
#define COMPTONSOFT_PlaneWavePrimaryGenPol_H 1

#include "PlaneWavePrimaryGen.hh"

namespace comptonsoft {


class PlaneWavePrimaryGenPol : public PlaneWavePrimaryGen
{
public:
  PlaneWavePrimaryGenPol() {}
  virtual anl::ANLStatus mod_com();
};

}

#endif /* COMPTONSOFT_PlaneWavePrimaryGenPol_H */
