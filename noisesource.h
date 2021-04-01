#ifndef __NB_NOISESOURCE
#define __NB_NOISESOURCE

#include "nworkbench.h"

class nBlock_NoiseSource public nBlockSimpleNode<1> {

public:
    nBlock_NoiseSource(float e_mea, float e_est, float q);
    void triggerInput(nBlocks_Message message);
	void endFrame(void);
    uint32_t newValueFLAG;

private:	
	float  _input;
    float  _outvalue;

};
 
#endif