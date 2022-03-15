/****************************************************************************
 *
 * Copyright 2022 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

/************************************************************************
 * Included Files
 ************************************************************************/

#include <tinyara/config.h>
#include <tinyara/mm/mm.h>

/************************************************************************
 * Public Functions
 ************************************************************************/

/************************************************************************
 * Name: kmm_get_heap
 *
 * Description:
 *   returns the kernel heap structure.
 *
 ************************************************************************/
struct mm_heap_s *kmm_get_heap(void *addr)
{
	return mm_get_heap(addr);
}

/************************************************************************
 * Name: kmm_get_heap_with_index
 *
 * Description:
 *   returns the kernel heap matched with index.
 *
 ************************************************************************/
struct mm_heap_s *kmm_get_heap_with_index(int index)
{
	return mm_get_heap_with_index(index);
}

/************************************************************************
 * Name: kmm_get_heapindex
 *
 * Description:
 *   returns the kernel heap index.
 *
 ************************************************************************/
int kmm_get_heapindex(void *mem)
{
	return mm_get_heapindex(mem);
}
