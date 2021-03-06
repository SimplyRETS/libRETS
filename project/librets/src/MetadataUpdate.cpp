/*
 * Copyright (C) 2005 National Association of REALTORS(R)
 *
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, and/or sell copies of the
 * Software, and to permit persons to whom the Software is furnished
 * to do so, provided that the above copyright notice(s) and this
 * permission notice appear in all copies of the Software and that
 * both the above copyright notice(s) and this permission notice
 * appear in supporting documentation.
 */
#include "librets/MetadataUpdate.h"

using namespace librets;
using std::string;

#define CLASS MetadataUpdate

MetadataElement::MetadataType CLASS::GetType() const
{
    return UPDATE;
}

string CLASS::GetId() const
{
    return GetUpdateName();
}

string CLASS::GetUpdateName() const
{
    return GetStringAttribute("UpdateName");
}

string CLASS::GetUpdateDescription() const
{
    return GetStringAttribute("Description");
}

string CLASS::GetKeyField() const
{
    return GetStringAttribute("KeyField");
}

string CLASS::GetUpdateTypeVersion() const
{
    return GetStringAttribute("UpdateTypeVersion");
}

string CLASS::GetUpdateTypeDate() const
{
    return GetStringAttribute("UpdateTypeDate");
}