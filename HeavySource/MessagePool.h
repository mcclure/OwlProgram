/* Copyright 2014 Section6. All Rights Reserved. */

#ifndef _MESSAGE_POOL_H_
#define _MESSAGE_POOL_H_

#include "Utils.h"

struct HvMessage;

#define MP_NUM_MESSAGE_LISTS 4

typedef struct MessagePoolList {
  struct MessageListNode *head; // list of currently available blocks
  struct MessageListNode *pool; // list of currently used blocks
} MessagePoolList;

typedef struct MessagePool {
  char *buffer; // the buffer of all messages
  hv_size_t bufferSize; // in bytes
  hv_size_t bufferIndex; // the number of total reserved bytes

  MessagePoolList lists[MP_NUM_MESSAGE_LISTS];
} MessagePool;

/**
 * The MessagePool is a basic memory management system. It reserves a large block of memory at initialisation
 * and proceeds to divide this block into smaller chunks (usually 512 bytes) as they are needed. These chunks are
 * further divided into 32, 64, 128, or 256 sections. Each of these sections is managed by a MessagePoolList (MPL).
 * An MPL is a linked-list data structure which is initialised such that its own pool of listnodes is filled with nodes
 * that point at each subblock (e.g. each 32-byte block of a 512-block chunk).
 *
 * MessagePool is loosely inspired by TCMalloc. http://goog-perftools.sourceforge.net/doc/tcmalloc.html
 */

hv_size_t mp_init(struct MessagePool *mp, hv_size_t numKB);

void mp_free(struct MessagePool *mp);

/** 
 * Adds a message to the pool and returns a pointer to the copy. Returns NULL 
 * if no space was available in the pool. 
 */
struct HvMessage *mp_addMessage(struct MessagePool *mp, const struct HvMessage *m);

void mp_freeMessage(struct MessagePool *mp, struct HvMessage *m);

#endif // _MESSAGE_POOL_H_