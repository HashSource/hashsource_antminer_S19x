int __fastcall sub_120CB8(int a1, int *a2)
{
  int v4; // r4
  int v5; // r0
  size_t v6; // r0
  int v7; // r4
  int *v9; // r1
  int v10; // r0
  int *v11; // r0
  int *v12; // r6
  int v13; // r0
  char *v14; // r0
  int v15; // r0
  int v16; // [sp+0h] [bp-8h] BYREF
  int v17; // [sp+4h] [bp-4h] BYREF

  v4 = sub_10E660(a1);
  v5 = sub_10E65C((int)a2);
  v6 = sub_10E6E0(v4, v5);
  v7 = 29;
  if ( v6 )
    return v7;
  v7 = 0;
  sub_1205D8(a1);
  if ( (*(_DWORD *)(a1 + 128) & 0x80) == 0 )
  {
    sub_1205D8((int)a2);
    if ( (a2[32] & 0x80) == 0 )
    {
      v9 = (int *)a2[37];
      if ( v9 )
      {
        v10 = sub_12055C(a1, v9);
        if ( v10 )
          return v10;
      }
      v11 = (int *)sub_10E89C(a1);
      v12 = v11;
      if ( !v11 )
        return 77;
      v13 = sub_DA1A0(v11);
      if ( !sub_EB3A8(v13, 0, &v16) )
        v16 = sub_DA1A0(v12);
      v14 = sub_EAC84(a2[5]);
      if ( !sub_EB3A8((int)v14, 0, &v17) )
        return 78;
      v15 = sub_DA17C(v17);
      if ( v15 != v16 )
        return 76;
      return v7;
    }
  }
  return 1;
}
