int __fastcall sub_161748(int a1, int *a2, int (__fastcall *a3)(_BYTE *, int, _DWORD, char *), char *a4)
{
  int v7; // r0
  int v8; // r4
  int v9; // r6
  int v10; // r7
  int v11; // r4
  int result; // r0
  _BYTE v13[1024]; // [sp+8h] [bp-400h] BYREF

  v7 = sub_114B54(a1, 0);
  if ( !v7 )
    return 0;
  v8 = v7;
  if ( a3 )
    v9 = a3(v13, 1024, 0, a4);
  else
    v9 = sub_ED544(v13, 1024, 0, a4);
  if ( v9 < 0 )
  {
    sub_D0048(9, 120, 104, (int)"crypto/pem/pem_pk8.c", 128);
    sub_12EF2C(v8);
    return 0;
  }
  v10 = sub_EF32C(v8, (int)v13, v9);
  sub_12EF2C(v8);
  sub_E07F8(v13, v9);
  if ( !v10 )
    return 0;
  v11 = sub_D8E18(v10);
  sub_AE5FC(v10);
  if ( !v11 )
    return 0;
  result = v11;
  if ( a2 )
  {
    sub_DA240(*a2);
    result = v11;
    *a2 = v11;
  }
  return result;
}
