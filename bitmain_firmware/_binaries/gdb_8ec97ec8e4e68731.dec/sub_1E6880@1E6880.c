int __fastcall sub_1E6880(int a1, int a2, _QWORD *a3, int *a4)
{
  int v7; // r0
  int v8; // r0
  _DWORD *v9; // r5
  int result; // r0
  int v11; // r4
  int v12; // r2
  void *v13; // [sp+8h] [bp-50h] BYREF
  int v14; // [sp+Ch] [bp-4Ch] BYREF
  int v15; // [sp+10h] [bp-48h] BYREF
  char *v16; // [sp+14h] [bp-44h] BYREF
  _BYTE v17[64]; // [sp+18h] [bp-40h] BYREF

  v7 = sub_16F654(a1);
  v8 = ((int (__fastcall *)(int))loc_1E2770)(v7);
  v9 = (_DWORD *)dword_488C94;
  v13 = *(void **)dword_488C94;
  v14 = sub_1E2890(v8);
  sub_1E1694(&v13, &v14, "vFile:fstat:");
  sub_1E1304((int *)&v13, &v14, a2);
  result = sub_1E6030((int)v13 - *v9, 17, a4, &v16, &v15);
  v11 = result;
  if ( result >= 0 )
  {
    v12 = sub_996E8((unsigned __int8 *)v16, v15, (int)v17, 64);
    if ( v11 != v12 )
      sub_946E0("vFile:fstat returned %d, but %d bytes.", v11, v12);
    if ( v11 != 64 )
      sub_946E0("vFile:fstat returned %d bytes, but expecting %d.", v11, 64);
    sub_1F74B4((int)v17, a3);
    return 0;
  }
  else if ( *a4 == 88 )
  {
    memset(a3, 0, 0x68u);
    a3[6] = 0x7FFFFFFF;
    return 0;
  }
  return result;
}
