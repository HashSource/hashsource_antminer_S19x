int __fastcall sub_1B6134(int a1, unsigned int a2)
{
  int v4; // r7
  unsigned int v5; // r0
  int v6; // r4
  int v8; // [sp+4h] [bp-8h] BYREF

  v4 = sub_15ECB4(a1);
  v5 = ((int (__fastcall *)(int, int, unsigned int))loc_16A3AC)(v4, a1, a2);
  v6 = v5;
  if ( !v5 )
    v5 = a2;
  sub_1B5F50(v5, &v8);
  if ( v8 )
  {
    v6 = ((int (__fastcall *)(int, int))loc_16A3AC)(v4, a1);
    if ( !v6 )
      return v8;
  }
  return v6;
}
