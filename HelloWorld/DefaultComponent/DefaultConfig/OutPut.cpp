/********************************************************************
	Rhapsody	: 8.2.1 
	Login		: rajsh
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OutPut
//!	Generated Date	: Wed, 31, Oct 2018  
	File Path	: DefaultComponent\DefaultConfig\OutPut.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "OutPut.h"
//## package Default

//## class TopLevel::OutPut
OutPut_C::OutPut_C(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initStatechart();
}

OutPut_C::~OutPut_C() {
}

bool OutPut_C::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void OutPut_C::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void OutPut_C::rootState_entDef() {
    {
        rootState_subState = DisplayOutput;
        rootState_active = DisplayOutput;
        //#[ state DisplayOutput.(Entry) 
        std::cout<<"HelloWorld"<<"\n"<<std::endl;
        //#]
    }
}

IOxfReactive::TakeEventStatus OutPut_C::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OutPut.cpp
*********************************************************************/
