//#include "Potential.H"
#include "MetaMove.H"

MetaMove::MetaMove()
{
}

MetaMove::~MetaMove()
{
	conditionSet.clear();
	pll.clear();
}

int 
MetaMove::setScoreImprovement(double aVal)
{
	scoreDelta=aVal;
	return 0;
}

int
MetaMove::setSrcMBScore(double aScore)
{
	mbscore=aScore;
	return 0;
}

int
MetaMove::setTargetMBScore(double aScore)
{
	targetMBScore=aScore;
	return 0;
}


int 
MetaMove::setSrcVertex(int vid)
{
	src=vid;
	return 0;
}


int 
MetaMove::setTargetVertex(int vid)
{	
	target=vid;
	return 0;
}



int 
MetaMove::setConditionSet(INTINTMAP& vSet)
{
	for(INTINTMAP_ITER vIter=vSet.begin();vIter!=vSet.end();vIter++)
	{
		conditionSet[vIter->first]=vIter->second;
	}

	return 0;
}

int
MetaMove::setConditionSetInd(int aind)
{
	conditionSetInd=aind;
	return 0;
}


int 
MetaMove::setDestPot(Potential* apot)
{
	destPot=apot;
	return 0;
}


int 
MetaMove::getSrcVertex()
{
	return src;
}

int
MetaMove::getTargetVertex()
{
	return target;
}

INTINTMAP& 
MetaMove::getConditionSet()
{
	return conditionSet;
}

int
MetaMove::getConditionSetInd()
{	
	return conditionSetInd;
}

double 
MetaMove::getSrcMBScore()
{
	return mbscore;
}

double
MetaMove::getTargetMBScore()
{
	return targetMBScore;
}


double 
MetaMove::getScoreImprovement()
{
	return scoreDelta;
}


Potential* 
MetaMove::getDestPot()
{
	return destPot;
}
