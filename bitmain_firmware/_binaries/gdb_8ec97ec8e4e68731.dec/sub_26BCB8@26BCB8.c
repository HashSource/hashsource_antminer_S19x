int __fastcall sub_26BCB8(int *a1)
{
  int v2; // r0
  int v3; // r0
  int v4; // r3
  int v5; // r5

  v2 = sub_170040(a1[16]);
  v3 = ((int (__fastcall *)(int))loc_16EA14)(v2);
  v4 = a1[23];
  v5 = v3;
  if ( !v4 )
  {
    sub_26A9E8((int)(a1 + 17), a1 + 23);
    v4 = a1[23];
  }
  return v4 + a1[18] * v5;
}
