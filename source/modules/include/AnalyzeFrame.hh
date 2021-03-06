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

/**
 * AnalyzeFrame
 *
 * @author Hirokazu Odaka
 * @date 2019-05-23
 */

#ifndef COMPTONSOFT_AnalyzeFrame_H
#define COMPTONSOFT_AnalyzeFrame_H 1

#include <iterator>
#include <boost/multi_array.hpp>
#include <tuple>
#include <anlnext/BasicModule.hh>
#include "ConstructFrame.hh"
#include "XrayEvent.hh"
#include "XrayEventCollection.hh"

namespace comptonsoft {

using gain_t = boost::multi_array<std::tuple<double, double, double, double>, 2>;

class AnalyzeFrame : public anlnext::BasicModule
{
  DEFINE_ANL_MODULE(AnalyzeFrame, 1.1);
  // ENABLE_PARALLEL_RUN();
public:
  AnalyzeFrame();
  
protected:
  AnalyzeFrame(const AnalyzeFrame&);

public:
  anlnext::ANLStatus mod_define() override;
  anlnext::ANLStatus mod_initialize() override;
  anlnext::ANLStatus mod_begin_run() override;
  anlnext::ANLStatus mod_analyze() override;
  anlnext::ANLStatus mod_end_run() override;

private:
  double pedestal_level_ = 0.0;
  double event_threshold_ = 0.0;
  double split_threshold_ = 0.0;
  int event_size_ = 1;
  bool setGain_ = false;
  std::string gainFile_;
  int trimSize_ = 0;

  gain_t gainCoefficient_;
  
  ConstructFrame* frame_owner_ = nullptr;
  XrayEventCollection* collection_ = nullptr;
};

} /* namespace comptonsoft */

#endif /* COMPTONSOFT_AnalyzeFrame_H */
