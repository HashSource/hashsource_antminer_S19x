int __fastcall sub_11E954(int a1, int *a2)
{
  int *v4; // r7
  int v5; // r4
  int v6; // r0
  int v7; // r8
  int v8; // r4
  int result; // r0
  int v10; // r9
  int v11; // r0
  int v12; // r3
  int v13; // r4
  int v14; // r0
  int v15; // r4
  _DWORD *v16; // r0
  bool v17; // cc
  unsigned int v18; // r1
  int v19; // [sp+0h] [bp-Ch] BYREF
  int v20; // [sp+4h] [bp-8h]

  v4 = (int *)sub_10E660(a1);
  v5 = (int)sub_113C38(v4);
  v6 = sub_10C010(*(_DWORD *)(a1 + 160));
  v7 = v6;
  v8 = v5 & ~(v5 >> 31);
  if ( v6 < 0 )
  {
    v7 = 0;
  }
  else if ( 0x7FFFFFFF - v6 < v8 )
  {
    return 1;
  }
  v10 = sub_10C010(*a2);
  v11 = sub_10C010(a2[1]);
  v12 = v10 & ~(v10 >> 31);
  if ( v11 < 0 )
  {
    v11 = 0;
  }
  else if ( 0x7FFFFFFF - v11 < v12 )
  {
    return 1;
  }
  if ( v8 + v7 && sub_189308(0x100000, v8 + v7) < v12 + v11 )
    return 1;
  if ( (int)sub_113C38(v4) > 0 )
  {
    v19 = 4;
    v20 = (int)v4;
    result = sub_11E750(&v19, a2);
    if ( result )
      return result;
    v13 = -1;
    v19 = 1;
    while ( 1 )
    {
      v13 = sub_113C8C(v4, 0x30u, v13);
      if ( v13 == -1 )
        break;
      v14 = sub_113CB0(v4, v13);
      v20 = sub_114128(v14);
      if ( *(_DWORD *)(v20 + 4) != 22 )
        return 53;
      result = sub_11E750(&v19, a2);
      if ( result )
        return result;
    }
  }
  v15 = 0;
  while ( 1 )
  {
    v17 = v15 < sub_10C010(*(_DWORD *)(a1 + 160));
    v18 = v15++;
    if ( !v17 )
      break;
    v16 = (_DWORD *)sub_10C01C(*(_DWORD **)(a1 + 160), v18);
    result = sub_11E750(v16, a2);
    if ( result )
      return result;
  }
  return 0;
}
