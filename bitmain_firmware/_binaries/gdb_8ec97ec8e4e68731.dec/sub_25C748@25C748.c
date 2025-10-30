int __fastcall sub_25C748(int a1, int a2)
{
  int v4; // r6
  int v5; // r5
  unsigned __int8 *v6; // r4
  unsigned __int8 *v7; // r0
  int v8; // r3
  unsigned int v9; // r1
  unsigned int v10; // r2
  unsigned __int8 *v11; // r3
  unsigned int v13; // r1
  unsigned int v14; // t1
  unsigned int v15; // t1
  bool v16; // cc

  v4 = *(_DWORD *)(sub_26BC70(a1) + 20);
  v5 = *(_DWORD *)(sub_26BC70(a2) + 20);
  v6 = (unsigned __int8 *)sub_26E978(a1);
  v7 = (unsigned __int8 *)sub_26E978(a2);
  if ( v4 >= v5 )
    v8 = v5;
  else
    v8 = v4;
  if ( v8 > 0 )
  {
    v9 = *v6;
    v10 = *v7;
    if ( v9 < v10 )
      return -1;
    if ( v9 > v10 )
      return 1;
    v11 = &v6[v8 - 1];
    while ( v6 != v11 )
    {
      v14 = *++v6;
      v13 = v14;
      v15 = *++v7;
      v16 = v13 > v15;
      if ( v13 < v15 )
        return -1;
      if ( v16 )
        return 1;
    }
  }
  if ( v4 >= v5 )
    return v4 > v5;
  return -1;
}
