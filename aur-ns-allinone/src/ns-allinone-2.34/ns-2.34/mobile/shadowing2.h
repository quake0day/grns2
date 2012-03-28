#ifndef SHADOWING2_H_
#define SHADOWING2_H_


/********* include files *****************************************************/

#include "shadowing.h"


/********* class declaration *************************************************/

/** Add calculation of maximum Receiving Distance (distCST_ ) to
 *  Shadowing-Model. Therefor the value validity_ defines the propability
 *  that for the maximum distance the receiving power is greater than CSThresh_
 */
class Shadowing2 : public Shadowing {
public:
	virtual double getDist(double Pr, double Pt, double Gt, double Gr,
			       double hr, double ht, double L, double lambda);

	Shadowing2();

	double validity_;
};

#endif //SHADOWING2_H_
