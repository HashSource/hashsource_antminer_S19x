int __fastcall sub_223C0(int a1)
{
  _BYTE *v2; // r3
  int result; // r0

  v2 = *(_BYTE **)(a1 + 592);
  if ( v2 )
    *v2 = 0;
  result = *(_DWORD *)(a1 + 588);
  *(_BYTE *)(a1 + 643) = 0;
  *(_BYTE *)(a1 + 641) = 0;
  if ( result )
    result = close(result);
  *(_DWORD *)(a1 + 588) = 0;
  return result;
}
