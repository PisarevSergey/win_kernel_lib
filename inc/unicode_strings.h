#pragma once

namespace win_kernel_lib
{
  namespace unicode_strings
  {
    UNICODE_STRING* createStringCopy(const UNICODE_STRING& src,
      ULONG tag,
      POOL_TYPE pt = PagedPool);

    UNICODE_STRING* createStringCopy(const wchar_t* src,
      size_t src_size_in_bytes,
      ULONG tag,
      POOL_TYPE pt = PagedPool);
  }
}
