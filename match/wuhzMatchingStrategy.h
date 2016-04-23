#ifndef wuhz_MatchingStrategy_h_
#define wuhz_MatchingStrategy_h_
#include"TemplateMatchingStrategy.h"
class Wu_Matchingstrategy: public TemplateMatchingStrategy
{
protected:
	double matchSameSize(const Image&, const Image&);
};
#endif
