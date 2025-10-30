int __fastcall sub_11E1D8(_DWORD *a1)
{
  int v1; // r12
  int v2; // r3
  const char *v4; // r0
  unsigned int v5; // r9
  int v6; // r10
  int v7; // r11
  int result; // r0
  int v9; // r3
  bool v10; // cc
  int v11; // r9
  int v12; // r10
  int v13; // r2

  v1 = a1[6];
  v2 = a1[5];
  if ( v2 >= v1 )
    return 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1[4] + 4 * (v2 + 1));
      if ( *(_DWORD *)(dword_4872D8 + 352) + *(_DWORD *)(dword_4872D8 + 356) > (v5 & 0xFFFFFF) )
        break;
      if ( dword_47AC88 > 0 )
      {
        v4 = (const char *)sub_1B87A8(*(_DWORD *)(dword_4872D8 + 344));
        sub_F43B4(&off_46D334, ".gdb_index entry has bad CU index [in module %s]", v4);
        v2 = a1[5];
        v1 = a1[6];
      }
      a1[5] = ++v2;
      if ( v1 <= v2 )
        return 0;
    }
    v6 = a1[2];
    v7 = *(_DWORD *)(*a1 + 20);
    result = ((int (*)(void))loc_11E164)();
    if ( *(_DWORD *)(*(_DWORD *)(result + 24) + 4) )
      goto LABEL_8;
    v9 = (v5 >> 28) & 7;
    v10 = v9 == 0;
    if ( v9 )
      v10 = v7 <= 6;
    if ( v10 )
      break;
    v11 = v5 >> 31;
    if ( v6 )
      v12 = v11 ^ 1;
    else
      v12 = v11;
    if ( !a1[1] )
      v12 = 0;
    if ( v12 )
      goto LABEL_8;
    if ( v11 )
    {
      v13 = a1[3];
      if ( v13 == 2 )
        goto LABEL_28;
    }
    else
    {
      if ( a1[7] )
        goto LABEL_8;
      a1[7] = 1;
      v13 = a1[3];
      if ( v13 == 2 )
      {
LABEL_28:
        if ( v9 == 1 )
          break;
        goto LABEL_8;
      }
    }
    if ( v13 == 4 )
    {
      if ( v9 == 4 )
        break;
    }
    else if ( v13 != 1 || (unsigned int)(v9 - 1) <= 2 )
    {
      break;
    }
LABEL_8:
    v1 = a1[6];
    v2 = a1[5] + 1;
    a1[5] = v2;
    if ( v1 <= v2 )
      return 0;
  }
  ++a1[5];
  return result;
}
