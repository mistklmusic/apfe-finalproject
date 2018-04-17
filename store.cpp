#include "stdafx.h"
#include "store.h"

store::store()
{
}

store::store(string newStoreName, employee newStoreManager, int newStoreNum)
{
	storeName = newStoreName;
	storeManager = newStoreManager;
	storeNum = newStoreNum;
}

store::~store()
{
}
