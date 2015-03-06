/* -*-  Mode: C++; c-file-style: "gnu"; indent-tabs-mode:nil; -*- */
/*
 * Copyright (c) 2010 University of Arizona
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as 
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *
 * Author: Lukasz Prasnal <prasnal@kt.agh.edu.pl>
 *
 * basing on Simple CSMA/CA Protocol module Junseok Kim <junseok@email.arizona.edu> <engr.arizona.edu/~junseok>
 */

#ifndef RESCUE_PHY_BASIC_HELPER_H
#define RESCUE_PHY_BASIC_HELPER_H

#include <string>
#include "rescue-helper.h"

namespace ns3 {

class RescuePhyBasicHelper : public RescuePhyHelper
{
public:
  RescuePhyBasicHelper ();

  virtual ~RescuePhyBasicHelper ();
  static RescuePhyBasicHelper Default (void);
  void SetType (std::string type,
                std::string n0 = "", const AttributeValue &v0 = EmptyAttributeValue (),
                std::string n1 = "", const AttributeValue &v1 = EmptyAttributeValue (),
                std::string n2 = "", const AttributeValue &v2 = EmptyAttributeValue (),
                std::string n3 = "", const AttributeValue &v3 = EmptyAttributeValue (),
                std::string n4 = "", const AttributeValue &v4 = EmptyAttributeValue (),
                std::string n5 = "", const AttributeValue &v5 = EmptyAttributeValue (),
                std::string n6 = "", const AttributeValue &v6 = EmptyAttributeValue (),
                std::string n7 = "", const AttributeValue &v7 = EmptyAttributeValue ());
  
  void Set (std::string n = "", const AttributeValue &v = EmptyAttributeValue ());
  
  void SetErrorRateModel (std::string name,
                          std::string n0 = "", const AttributeValue &v0 = EmptyAttributeValue (),
                          std::string n1 = "", const AttributeValue &v1 = EmptyAttributeValue (),
                          std::string n2 = "", const AttributeValue &v2 = EmptyAttributeValue (),
                          std::string n3 = "", const AttributeValue &v3 = EmptyAttributeValue (),
                          std::string n4 = "", const AttributeValue &v4 = EmptyAttributeValue (),
                          std::string n5 = "", const AttributeValue &v5 = EmptyAttributeValue (),
                          std::string n6 = "", const AttributeValue &v6 = EmptyAttributeValue (),
                          std::string n7 = "", const AttributeValue &v7 = EmptyAttributeValue ());

private:
  virtual Ptr<RescuePhy> Create (void) const;

  ObjectFactory m_phy;
  ObjectFactory m_errorRateModel;
};

} //namespace ns3

#endif /* RESCUE_PHY_BASIC_HELPER_H */
