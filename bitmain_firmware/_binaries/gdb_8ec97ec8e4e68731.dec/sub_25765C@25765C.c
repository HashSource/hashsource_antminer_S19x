int __fastcall sub_25765C(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  _BYTE *v5; // r2

  if ( *(_DWORD *)(a3 + 8) )
    result = sub_2575E8(a1, a2, *(_DWORD *)(a3 + 4));
  else
    result = sub_2575A4(a1, a2);
  v5 = *(_BYTE **)(a3 + 4);
  *(_DWORD *)(a3 + 8) = 0;
  *v5 = 0;
  return result;
}
