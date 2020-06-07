#include <win_kernel_lib.h>

void win_kernel_lib::deleters::pool_deleter::operator()(void* p)
{
  if (p)
  {
    ExFreePool(p);
  }
}

void win_kernel_lib::deleters::pool_deleter::operator()(const void* p)
{
  if (p)
  {
    ExFreePool(const_cast<void*>(p));
  }
}

void win_kernel_lib::deleters::fltmgr_context_deleter::operator()(void* context)
{
  if (context)
  {
    FltReleaseContext(context);
  }
}
