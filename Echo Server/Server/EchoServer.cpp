//
//  EchoServer.cpp
//  CppTests
//
//  Created by Paula Hasstenteufel on 2018-03-16.
//  Copyright © 2018 Hasstenteufel. All rights reserved.
//

#include "EchoServer.hpp"

DEFINE_int32(port, 8080, "echo server port");

typedef Pipeline<IOBufQueue&, std::string> EchoPipeline;

class EchoHandler: public HandlerAdapter<std::string> {
    public:
        virtual void read(Context* ctx, std::string message) override {
            std::cout << "handling" << msg << std::endl;
            write(ctx, msg + "\r\n");
        }
};

class EchoPipelineFactory: public PipelineFactory<EchoPipeline> {
    
};
