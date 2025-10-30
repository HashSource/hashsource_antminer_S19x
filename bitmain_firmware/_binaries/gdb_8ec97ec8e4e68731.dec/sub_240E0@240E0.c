int __fastcall sub_240E0(int a1, _DWORD *a2)
{
  int v4; // r9
  int v5; // r10
  unsigned int v6; // r7
  int v7; // r8
  int result; // r0
  unsigned int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r2
  int v12; // r0
  int v13; // r0
  unsigned int v14; // [sp+0h] [bp-10h] BYREF
  unsigned int v15; // [sp+4h] [bp-Ch] BYREF
  _DWORD v16[2]; // [sp+8h] [bp-8h] BYREF

  v4 = sub_15ECB4(a1);
  v5 = ((int (*)(void))loc_165BB8)();
  v6 = sub_15DDFC(a1);
  v7 = sub_15DE14(a1);
  a2[2] = 13;
  a2[1] = 0;
  if ( sub_2376C(a1) )
  {
    result = sub_C37B8(v7, 0, &v15, v16);
    if ( result )
    {
      v9 = v15 + 64;
      if ( v15 + 64 >= v16[0] )
        v9 = v16[0];
      if ( v9 < v6 )
        v6 = v9;
      v16[0] = v6;
      return sub_21DC0(v4, v15, v6, (int)a2);
    }
  }
  else
  {
    if ( sub_C37B8(v7, 0, &v14, &v15) )
    {
      v10 = v14;
      v11 = v15;
      if ( v14 + 64 < v15 )
      {
        v11 = v14 + 64;
        v15 = v14 + 64;
      }
    }
    else
    {
      v12 = sub_15ECAC(a1, 11);
      result = sub_FA8D0(v12, 4, v5, v16);
      if ( !result )
        return result;
      v13 = ((int (__fastcall *)(int, _DWORD))loc_169FA0)(v4, v16[0]);
      v10 = v13 - 8;
      v11 = v13 + 56;
      v14 = v13 - 8;
      v15 = v13 + 56;
    }
    if ( v6 < v11 )
    {
      v11 = v6;
      v15 = v6;
    }
    return sub_22ECC(v4, v10, v11, a2);
  }
  return result;
}
