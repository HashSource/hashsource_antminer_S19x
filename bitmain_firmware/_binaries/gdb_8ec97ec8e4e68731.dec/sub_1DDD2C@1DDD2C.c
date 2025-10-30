int __fastcall sub_1DDD2C(int a1, int a2)
{
  int result; // r0
  int v5; // r3

  result = ((int (*)(void))loc_1DD940)();
  if ( !*(_BYTE *)(a1 + 16) )
  {
    result = ((int (__fastcall *)(int, int))loc_1DD834)(a1, a2);
    if ( !result )
    {
      result = sub_2322B4(a1, a2);
      v5 = *(_DWORD *)(a1 + 12);
      if ( !*(_BYTE *)(v5 + a2) )
        *(_BYTE *)(v5 + a2) = -1;
    }
  }
  return result;
}
