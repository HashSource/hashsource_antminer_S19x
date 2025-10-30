_DWORD *__fastcall sub_2137D8(int a1, unsigned int a2)
{
  _DWORD *result; // r0
  _DWORD *v5; // [sp+4h] [bp-8h] BYREF

  (*(void (**)(void))(*(_DWORD *)(a1 + 132) + 8))();
  *(_BYTE *)(*(_DWORD *)(a1 + 40) + 92) |= 1u;
  result = (_DWORD *)sub_1B7A54(a1);
  if ( !result && !*(_DWORD *)(a1 + 176) && !*(_DWORD *)(a1 + 180) )
  {
    sub_1B0C68(&v5, a1);
    result = v5;
    if ( v5 )
    {
      sub_213778((int)v5, *(const char **)(a1 + 4), a2, a1);
      result = v5;
      if ( v5 )
        result = (_DWORD *)((int (*)(void))loc_1625A8)();
    }
  }
  if ( (a2 & 0x10) == 0 )
    return sub_1D0878((_DWORD *)a1, 0);
  return result;
}
