/*
 * CollisionBGKNS.h - LBM
 *
 * Andreas Bülling, 2013
 * andreas@bulling.se
 *
 */

#ifndef COLLISIONBGKNS_H_
#define COLLISIONBGKNS_H_

#include "CollisionBGK.h"

class CollisionBGKNS: public CollisionBGK {
public:
	CollisionBGKNS();
	virtual ~CollisionBGKNS();
	void fEq(int k, int j, int i, double *eq);
	void init();
protected:
    double *u;
    double c1, c2, c3;
};

#endif /* COLLISIONBGKNS_H_ */
