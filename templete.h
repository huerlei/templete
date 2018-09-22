//
//  templete.h
//  templete model
//
//  Created by 胡二雷 on 2018/9/22.
//  Copyright © 2018年 胡二雷. All rights reserved.
//

#ifndef templete_h
#define templete_h
#include <iostream>
using namespace std;

namespace templete{
  
  class Templete {
  public:
    Templete(){
      cout<< "templete building" << endl;
    }
    virtual ~Templete(){}
    
    void step1(){
      cout << "step 1" << endl;
    }
    void step2(){
      cout << "step 2" << endl;
    }
    void step3(){
      cout << "step 3" << endl;
    }
    
    virtual void step4() = 0;
    virtual void step5() = 0;
    
    void run(){
      step1();
      step2();
      step3();
      step4();
      step5();
    }
  };
  
  class Concrete : public Templete {
  public:
    Concrete(){
      cout << "Concrete building" << endl;
    }
    void step4() override {
      cout << "step 4" << endl;
    }
    void step5() override {
      cout << "step 5" << endl;
    }
  };
} //template

#endif /* templete_h */
