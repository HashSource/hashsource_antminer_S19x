_DWORD *__fastcall sub_16C3D8(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0
  unsigned int v8; // r0
  char *v9; // r0
  _BYTE v11[20]; // [sp+8h] [bp-28h] BYREF
  _BYTE v12[20]; // [sp+1Ch] [bp-14h] BYREF

  v6 = sub_E0740((void *)0x18);
  if ( v6 )
  {
    if ( a1 && sub_D8C78(a1) != a3 )
    {
      v7 = sub_D8C78(a1);
      sub_B5560(v11, 0x14u, "%d", v7);
      sub_B5560(v12, 0x14u, "%zu", a3);
      sub_D0048(44, 136, 121, (int)"crypto/store/store_lib.c", 536);
      v8 = sub_D8C70(a1);
      v9 = sub_EAAB4(v8);
      sub_D1240(5, v9, " size is ", v11, ", fingerprint size is ", v12);
    }
    v6[3] = a1;
    v6[4] = a2;
    v6[5] = a3;
    *v6 = 3;
  }
  else
  {
    sub_D0048(44, 136, 65, (int)"crypto/store/store_lib.c", 526);
  }
  return v6;
}
