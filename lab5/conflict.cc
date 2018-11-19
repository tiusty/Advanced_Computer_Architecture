#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include "cache.h"



//---- Your answers must be stored in this (top N used for N-way cache)
extern uns conflict_list[8];


////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////

void fill_conflict_list(Cache *c, uns num_ways, uns probe_addr){
  uns miss;
  uns cline_addr1=rand()%(1<<20);
  uns cline_addr2=rand()%(1<<20);
  uns cline_addr3=rand()%(1<<20);
  uns cline_addr4=rand()%(1<<20);



  //---- The function you should use to determine conflicts
  // --- The second argument must be less than (1<<20);

  if( cache_access_install(c, probe_addr)==MISS ){
    miss++;
  }

  //------- Your code goes above this line

  conflict_list[0]=cline_addr1; //--- for 1 way
  conflict_list[1]=cline_addr2; //--- for 2 way
  conflict_list[2]=cline_addr3; //--- for 4 way
  conflict_list[3]=cline_addr4; //--- for 4 way 
}

///////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////

