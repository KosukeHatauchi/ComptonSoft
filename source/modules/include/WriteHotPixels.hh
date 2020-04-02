/*************************************************************************
 *                                                                       *
 * Copyright (c) 2019 Hirokazu Odaka                                     *
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

/**
 * WriteHotPixels.
 *
 * @author Hirokazu Odaka & Tsubasa Tamba
 * @date 2019-05
 * @date 2019-07-18 | merged to comptonsoft
 * @date 2020-04-01 | v1.1
 */

#ifndef COMPTONSOFT_WriteHotPixels_H
#define COMPTONSOFT_WriteHotPixels_H 1

#include "VCSModule.hh"

namespace comptonsoft{

class WriteHotPixels : public VCSModule
{
  DEFINE_ANL_MODULE(WriteHotPixels, 1.1);
  // ENABLE_PARALLEL_RUN();
public:
  WriteHotPixels();
  
public:
  anlnext::ANLStatus mod_define() override;
  anlnext::ANLStatus mod_end_run() override;

private:
  std::string filename_;
};

} /* namespace comptonsoft*/

#endif /* COMPTONSOFT_WriteHotPixels_H */