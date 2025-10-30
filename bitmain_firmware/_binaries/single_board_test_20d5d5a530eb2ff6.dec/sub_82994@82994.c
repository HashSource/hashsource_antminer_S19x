int __fastcall sub_82994(int *a1, int a2)
{
  int v3; // r1
  int v6; // r1
  int v7; // r2
  char v8; // r3
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // [sp+Ch] [bp-4h] BYREF

  v3 = *(_DWORD *)(a1[257] + 200);
  v12 = 0;
  if ( v3 )
    return sub_A851C(a2);
  sub_A3B68(&v12, a1, &loc_5000E);
  v7 = *(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 16);
  if ( *a1 <= 768 )
  {
    if ( *a1 == 768 )
    {
      v6 = v7 << 30;
      if ( (v7 & 2) != 0 && (!sub_A8450(a2, v6, 5, 0, 1) || !sub_A8450(a2, v9, 6, 0, 1)) )
        return 0;
    }
  }
  else if ( (v7 & 0x10) != 0 )
  {
    if ( !sub_A8450(a2, v6, 22, 0, 1) || !sub_A8450(a2, v10, 238, 0, 1) )
      return 0;
    return sub_A8450(a2, v11, 239, 0, 1) != 0;
  }
  v8 = v12;
  if ( (v12 & 1) == 0 )
  {
    if ( !sub_A8450(a2, 1, 1, 0, 1) )
      return 0;
    v8 = v12;
  }
  if ( (v8 & 2) == 0 && !sub_A8450(a2, 1, 2, 0, 1) )
    return 0;
  return *a1 <= 768 || (v12 & 8) != 0 || sub_A8450(a2, v6, 64, 0, 1) != 0;
}
