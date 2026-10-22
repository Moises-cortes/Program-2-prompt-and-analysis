/* loadbalancer.cpp
 *
 * Manage the CPU load by assigning next job to CPU with the least load
 */

#include "loadbalancer.h"

int loadbalancer::getTime()
{
   return systemTime;
}

void loadbalancer::incTime()
{
   return systemTime ++;

}
  
void loadbalancer::addRequest(request r)
{
   requestQueue.push(r);
   incTime();
 
 
}
  
request loadbalancer::getRequest()
{
   incTime();
   if(!requestQueue.empty())
   {
      request r = requestQueue.front();
      requestQueue.pop();
      return r;
   }







   // ignore warning here about no return value
}

bool loadbalancer::isRequestQueueEmpty()
{
   return requestQueue.empty();
  
} 

int loadbalancer::getSize()
{
  
} 

/* loadbalancer.cpp
 *
 * Manage the CPU load by assigning next job to CPU with the least load
 */

#include "loadbalancer.h"

int loadbalancer::getTime()
{
   return systemTime;
}

void loadbalancer::incTime()
{

}
  
void loadbalancer::addRequest(request r)
{
 
 
}
  
request loadbalancer::getRequest()
{







   // ignore warning here about no return value
}

bool loadbalancer::isRequestQueueEmpty()
{
  
} 

int loadbalancer::getSize()
{
  
} 
