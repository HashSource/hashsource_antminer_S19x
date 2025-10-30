int __fastcall sub_2F0980(int a1, _DWORD *a2)
{
  int v3; // r4
  unsigned int v5; // r6
  _DWORD *v6; // r10
  unsigned int v7; // r9
  int v8; // r5
  int v9; // r6
  int v10; // r0
  unsigned int v11; // r7
  int v12; // r0
  int v13; // r5
  unsigned int v14; // r0
  unsigned int v15; // r4
  _DWORD *v16; // r0
  _DWORD *v18; // r7
  int v19; // r3

  v3 = *(_DWORD *)(a1 + 4);
  v5 = a2[1];
  v6 = *(_DWORD **)(v3 + 444);
  if ( *(_BYTE *)(v6[98] + 12) == 2 )
    v7 = 8;
  else
    v7 = 4;
  if ( v5 <= 7 || (unsigned __int64)sub_347674(v5, v7) >> 32 )
  {
LABEL_23:
    sub_2A6A5C("warning: %B: corrupt GNU_PROPERTY_TYPE (%ld) size: %#lx", a1, a2[2], v5);
    return 0;
  }
  v8 = a2[4];
  v9 = v8 + v5;
  if ( v8 == v9 )
    return 1;
  while ( 1 )
  {
    v11 = (*(int (__fastcall **)(int))(v3 + 76))(v8);
    v12 = v8 + 4;
    v13 = v8 + 8;
    v14 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 76))(v12);
    v15 = v14;
    if ( v9 - v13 < v14 )
    {
      sub_2A6A5C("warning: %B: corrupt GNU_PROPERTY_TYPE (%ld) type (0x%x) datasz: 0x%x", a1, a2[2], v11, v14);
      *(_DWORD *)(*(_DWORD *)(a1 + 160) + 592) = 0;
      return 0;
    }
    if ( v11 <= 0xBFFFFFFF )
      break;
    if ( v6[2] )
    {
      if ( v11 > 0xDFFFFFFF || !v6[108] )
        goto LABEL_24;
      v10 = ((int (__fastcall *)(int, unsigned int, int, unsigned int))v6[108])(a1, v11, v13, v14);
      if ( v10 == 2 )
        goto LABEL_33;
      if ( v10 == 1 )
        goto LABEL_24;
    }
LABEL_13:
    v8 = v13 + (-v7 & (v7 - 1 + v15));
    if ( v9 == v8 )
      return 1;
    if ( (unsigned int)(v9 - v8) <= 7 )
    {
      v5 = a2[1];
      goto LABEL_23;
    }
    v3 = *(_DWORD *)(a1 + 4);
  }
  if ( v11 == 1 )
  {
    if ( v7 != v14 )
    {
      sub_2A6A5C("warning: %B: corrupt stack size: 0x%x", a1, v14);
      goto LABEL_33;
    }
    v18 = sub_2F0894(a1, 1u, v7);
    v19 = *(_DWORD *)(a1 + 4);
    if ( v7 == 8 )
      v18[2] = (*(int (__fastcall **)(int))(v19 + 64))(v13);
    else
      v18[2] = (*(int (__fastcall **)(int))(v19 + 76))(v13);
    v18[3] = 4;
    goto LABEL_13;
  }
  if ( v11 != 2 )
  {
LABEL_24:
    sub_2A6A5C("warning: %B: unsupported GNU_PROPERTY_TYPE (%ld) type: 0x%x", a1, a2[2], v11);
    goto LABEL_13;
  }
  if ( !v14 )
  {
    v16 = sub_2F0894(a1, 2u, 0);
    *(_BYTE *)(*(_DWORD *)(a1 + 160) + 2341) |= 0x20u;
    v16[3] = 4;
    goto LABEL_13;
  }
  sub_2A6A5C("warning: %B: corrupt no copy on protected size: 0x%x", a1, v14);
LABEL_33:
  *(_DWORD *)(*(_DWORD *)(a1 + 160) + 592) = 0;
  return 0;
}
