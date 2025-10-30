int __fastcall sub_2ADDE8(int a1, _DWORD *a2, void *src, int a4, __int64 a5, size_t n)
{
  unsigned int v8; // r2
  bool v10; // cf
  int result; // r0
  int v12; // r0
  void *v13; // r0

  if ( (a2[5] & 0x100) != 0 )
  {
    v8 = a2[9];
    v10 = v8 >= n;
    if ( v8 >= n )
      v10 = v8 >= (unsigned int)a5;
    if ( v10 && v8 >= a5 + n )
    {
      if ( (*(_BYTE *)(a1 + 40) & 0x10) != 0 )
      {
        v12 = a2[27];
        if ( v12 )
        {
          v13 = (void *)(v12 + a5);
          if ( v13 != src )
            memcpy(v13, src, n);
        }
        result = (*(int (__fastcall **)(int, _DWORD *, void *, _DWORD, _DWORD, _DWORD, size_t))(*(_DWORD *)(a1 + 4) + 344))(
                   a1,
                   a2,
                   src,
                   *(_DWORD *)(*(_DWORD *)(a1 + 4) + 344),
                   a5,
                   HIDWORD(a5),
                   n);
        if ( result )
        {
          result = 1;
          *(_BYTE *)(a1 + 43) |= 0x40u;
        }
      }
      else
      {
        ((void (__fastcall *)(int))loc_2A6C48)(5);
        return 0;
      }
    }
    else
    {
      ((void (__fastcall *)(int))loc_2A6C48)(17);
      return 0;
    }
  }
  else
  {
    ((void (__fastcall *)(int, _DWORD *, void *, int))loc_2A6C48)(14, a2, src, a4);
    return 0;
  }
  return result;
}
