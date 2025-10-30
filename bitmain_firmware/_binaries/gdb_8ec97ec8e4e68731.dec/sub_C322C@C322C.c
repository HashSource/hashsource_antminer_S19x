int __fastcall sub_C322C(int a1, _DWORD *a2)
{
  unsigned __int8 *v2; // r2
  __int16 *v4; // r12

  v2 = *(unsigned __int8 **)(*(_DWORD *)(a1 + 24) + 24);
  if ( (unsigned int)*v2 - 3 > 1 )
    return 1;
  if ( *((_WORD *)v2 + 2) )
    return 1;
  if ( (*((_WORD *)v2 + 1) & 0x380) == 0x80 )
  {
    v4 = (__int16 *)*((_DWORD *)v2 + 7);
    if ( v4 != &word_3B4A2C )
    {
      if ( v4[2] )
        return 1;
    }
  }
  if ( (*(_DWORD *)v2 & 0x20400) == 0x20000 )
    return 1;
  *a2 = a1;
  return 0;
}
