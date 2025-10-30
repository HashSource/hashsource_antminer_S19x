int __fastcall sub_C4A54(int a1)
{
  int v1; // r0
  int v2; // r0
  int v4; // r3
  int v5; // r0
  int v6; // r0
  int v7; // r0
  char v8; // [sp+4h] [bp-18h] BYREF
  size_t v9[5]; // [sp+8h] [bp-14h] BYREF

  if ( !a1 )
    return 0;
  v1 = sub_C59B8(a1);
  if ( !v1 )
    return 0;
  v2 = sub_C6248(v1);
  if ( !v2 )
    return 0;
  v4 = v2 + 14;
  v5 = v2 + 7;
  if ( v5 < 0 )
    v5 = v4;
  v9[2] = (size_t)&v8;
  v9[0] = v5 >> 3;
  v9[1] = 2;
  v8 = -1;
  v6 = sub_B2090(v9, 0);
  v7 = sub_AE038(1, 2 * v6, 16);
  return v7 & ~(v7 >> 31);
}
