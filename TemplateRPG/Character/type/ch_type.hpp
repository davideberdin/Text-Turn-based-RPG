//
//  ch_type.hpp
//  TemplateRPG
//
//  Created by Davide Berdin on 28/11/15.
//  Copyright © 2015 Davide Berdin. All rights reserved.
//

#ifndef ch_type_hpp
#define ch_type_hpp

#include <stdio.h>

class CH_Type
{
private:

public:
    
    CH_Type();
    virtual ~CH_Type();
    
    virtual void LevelUp(int) = 0;
};

#endif /* ch_type_hpp */
