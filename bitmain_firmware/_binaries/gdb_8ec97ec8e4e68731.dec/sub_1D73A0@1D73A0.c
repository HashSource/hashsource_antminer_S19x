int __fastcall sub_1D73A0(int a1)
{
  int v1; // r4
  _DWORD v3[3]; // [sp+4h] [bp-Ch] BYREF

  v1 = sub_1D49EC(a1);
  sub_E1790(v3, v1 + 252);
  while ( !((int (__fastcall *)(_DWORD *))loc_E16AC)(v3) )
  {
    if ( !((int (__fastcall *)(_DWORD *, int))loc_E1808)(v3, 1) )
      sub_946E0("No trace.");
  }
  return sub_1D7264(v1, v3);
}
