#ifndef __IISTVMGT_H__
#define __IISTVMGT_H__

#include "HeaderPrecompilation.h"

class CIISTVManagement : public CHttpModule
{
public:
    CIISTVManagement(){};

    REQUEST_NOTIFICATION_STATUS OnExecuteRequestHandler(IN IHttpContext *, IN IHttpEventProvider *);
};
#endif