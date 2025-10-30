int __fastcall sub_10E66C(int a1, int a2)
{
  signed int v4; // r2
  signed int v5; // r3
  int result; // r0

  if ( a1 == a2 )
    return 0;
  sub_120C28(a1, -1, 0);
  sub_120C28(a2, -1, 0);
  if ( (*(_DWORD *)(a1 + 128) & 0x100000) != 0
    || (*(_DWORD *)(a2 + 128) & 0x100000) != 0
    || (result = memcmp((const void *)(a1 + 176), (const void *)(a2 + 176), 0x14u)) == 0 )
  {
    if ( *(_DWORD *)(a1 + 68) || *(_DWORD *)(a2 + 68) )
    {
      return 0;
    }
    else
    {
      v4 = *(_DWORD *)(a1 + 64);
      v5 = *(_DWORD *)(a2 + 64);
      if ( v4 < v5 )
      {
        return -1;
      }
      else if ( v4 <= v5 )
      {
        return j_memcmp(*(const void **)(a1 + 60), *(const void **)(a2 + 60), v4);
      }
      else
      {
        return 1;
      }
    }
  }
  return result;
}
