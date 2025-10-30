bool __fastcall sub_9B274(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r5
  int *v11; // r3
  int v12; // r3
  _BOOL4 v13; // r2
  _BYTE v14[8]; // [sp+Ch] [bp-8h] BYREF

  v8 = i2d_X509(a3, 0);
  v9 = v8;
  if ( v8 < 0 )
  {
    sub_95494(a1, 80, 493, 7, (int)"ssl/statem/statem_lib.c", 890);
    return 0;
  }
  if ( !sub_A8420(a2, v8, v14, 3) || v9 != i2d_X509(a3, v14) )
  {
    sub_95494(a1, 80, 493, 68, (int)"ssl/statem/statem_lib.c", 896);
    return 0;
  }
  v11 = (int *)a1[1];
  if ( (*(_DWORD *)(v11[25] + 48) & 8) != 0 )
    return 1;
  v12 = *v11;
  v13 = v12 >= 772;
  if ( v12 == 0x10000 )
    v13 = 0;
  return !v13 || sub_8F72C(a1, a2, 4096, a3, a4) != 0;
}
