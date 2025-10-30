int __fastcall sub_175A10(int a1, int *a2, int a3)
{
  int v5; // r0
  _BOOL4 v6; // r0
  int v8[6]; // [sp+8h] [bp-18h] BYREF

  v5 = sub_1759E8(a3, v8, 6);
  if ( v5 )
    v6 = v5 > 6;
  else
    v6 = 1;
  if ( !v6 )
    return sub_174D98(a1, a2, v8);
  sub_D0048(3, 131, 106, (int)"crypto/bn/bn_gf2m.c", 398);
  return 0;
}
