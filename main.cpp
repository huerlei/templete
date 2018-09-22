//
//  main.cpp
//  templete model
//
//  Created by 胡二雷 on 2018/9/22.
//  Copyright © 2018年 胡二雷. All rights reserved.
//

#include "templete.h"
using namespace templete;

int main(int argc, const char * argv[]) {
  // insert code here...
  Concrete concrete;
  concrete.run();
  
  Templete *templete = new Concrete();
  templete->run();
  delete templete;
  
  return 0;
}
