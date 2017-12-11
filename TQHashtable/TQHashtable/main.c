//
//  main.c
//  TQHashtable
//
//  Created by ztq on 2017/11/28.
//  Copyright © 2017年 zhoutq. All rights reserved.
//

#include <stdio.h>
#include "TQHashTable.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, TQHashTable!\n");
    
    TQHashTable hashTab = TQHashTableCreate(7);
    TQHashTableInsert(hashTab, "A", 1, 1);
    TQHashTableInsert(hashTab, "B", 1, 2);
    TQHashTableInsert(hashTab, "C", 1, 3);
    printf("hashtable length : %d\n",TQHashTableLength(hashTab));
    TQTableElement *cElement = TQHashTableFindElement(hashTab, "C", 1);
    printf("hashtable find C element data : %d\n",cElement->m_pData);
    TQTableElement *dElement = TQHashTableFindElement(hashTab, "D", 1);
    printf("hashtable find D element data : %d\n",cElement->m_pData);
    TQHashTableDelete(hashTab, "A", 1, NULL);
    printf("hashtable length : %d\n",TQHashTableLength(hashTab));
    TQHashTableDestroy(hashTab, NULL);
    TQTableElement *bElement = TQHashTableFindElement(hashTab, "B", 1);
    printf("TQHashTable Exists？ %s!\n",bElement ? "yes" : "no");
    return 0;
}
