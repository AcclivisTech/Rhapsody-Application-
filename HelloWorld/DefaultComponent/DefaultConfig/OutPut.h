/*********************************************************************
	Rhapsody	: 8.2.1 
	Login		: rajsh
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: OutPut
//!	Generated Date	: Wed, 31, Oct 2018  
	File Path	: DefaultComponent\DefaultConfig\OutPut.h
*********************************************************************/

#ifndef OutPut_H
#define OutPut_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## package Default

//## class TopLevel::OutPut
class OutPut_C : public OMReactive {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    OutPut_C(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~OutPut_C();
    
    ////    Additional operations    ////
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initStatechart();
    
    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // DisplayOutput:
    //## statechart_method
    inline bool DisplayOutput_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum OutPut_Enum {
        OMNonState = 0,
        DisplayOutput = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool OutPut_C::rootState_IN() const {
    return true;
}

inline bool OutPut_C::DisplayOutput_IN() const {
    return rootState_subState == DisplayOutput;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\OutPut.h
*********************************************************************/
