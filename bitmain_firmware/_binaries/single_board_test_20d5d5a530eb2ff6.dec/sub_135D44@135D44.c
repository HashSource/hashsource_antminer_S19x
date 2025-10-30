int __fastcall sub_135D44(int a1, _DWORD *a2)
{
  int v4; // r7
  int v5; // r4
  int v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r1
  int v9; // r1
  int v10; // lr
  int v11; // lr
  int v12; // lr
  int v13; // r0
  int v14; // lr
  int v15; // lr
  int v16; // r0
  int v17; // r3

  if ( (!a2[3] || sub_B69CC(a1, (int)"-", 1) == 1) && (!sub_B85B0((int)a2) || sub_B69CC(a1, (int)a0, 1) == 1) )
  {
    v4 = a2[1] - 1;
    if ( v4 < 0 )
      return 1;
    v5 = 4 * v4;
    v6 = 0;
    while ( !v6 )
    {
      v7 = *(_DWORD *)(*a2 + v5);
      v8 = v7 >> 28;
      if ( v7 >> 28 )
        goto LABEL_27;
      v9 = HIBYTE(v7) & 0xF;
      if ( v9 )
        goto LABEL_29;
      v10 = (v7 >> 20) & 0xF;
      if ( v10 )
        goto LABEL_31;
      v11 = HIWORD(v7) & 0xF;
      if ( !v11 )
      {
        v12 = (unsigned __int16)v7 >> 12;
        v13 = v12;
        if ( (unsigned __int16)v7 >> 12 )
          goto LABEL_35;
        goto LABEL_13;
      }
LABEL_33:
      if ( sub_B69CC(a1, (int)&a0123456789abcd_2[v11], 1) != 1 )
        return 0;
      v7 = *(_DWORD *)(*a2 + v5);
      v12 = (unsigned __int16)v7 >> 12;
      v13 = v12 | 1;
      if ( v12 | 1 )
      {
LABEL_35:
        if ( sub_B69CC(a1, (int)&a0123456789abcd_2[v12], 1) != 1 )
          return 0;
        v14 = (*(_DWORD *)(*a2 + v5) >> 8) & 0xF;
        goto LABEL_37;
      }
LABEL_13:
      v14 = (v7 >> 8) & 0xF;
      if ( !(v13 | v14) )
      {
        v15 = (unsigned __int8)v7 >> 4;
        v16 = v15;
        if ( !((unsigned __int8)v7 >> 4) )
          goto LABEL_15;
        goto LABEL_39;
      }
LABEL_37:
      if ( sub_B69CC(a1, (int)&a0123456789abcd_2[v14], 1) != 1 )
        return 0;
      v7 = *(_DWORD *)(*a2 + v5);
      v15 = (unsigned __int8)v7 >> 4;
      v16 = v15 | 1;
      if ( !(v15 | 1) )
      {
LABEL_15:
        v17 = v7 & 0xF;
        v6 = v16 | v17;
        if ( !v6 )
          goto LABEL_16;
        goto LABEL_41;
      }
LABEL_39:
      if ( sub_B69CC(a1, (int)&a0123456789abcd_2[v15], 1) != 1 )
        return 0;
      v17 = *(_DWORD *)(*a2 + v5) & 0xF;
LABEL_41:
      v6 = sub_B69CC(a1, (int)&a0123456789abcd_2[v17], 1);
      if ( v6 != 1 )
        return 0;
LABEL_16:
      --v4;
      v5 -= 4;
      if ( v4 == -1 )
        return 1;
    }
    if ( sub_B69CC(a1, (int)"0123456789ABCDEF", 1) != 1
      || sub_B69CC(a1, (int)"0123456789ABCDEF", 1) != 1
      || sub_B69CC(a1, (int)"0123456789ABCDEF", 1) != 1
      || sub_B69CC(a1, (int)"0123456789ABCDEF", 1) != 1
      || sub_B69CC(a1, (int)"0123456789ABCDEF", 1) != 1
      || sub_B69CC(a1, (int)"0123456789ABCDEF", 1) != 1
      || sub_B69CC(a1, (int)"0123456789ABCDEF", 1) != 1
      || sub_B69CC(a1, (int)"0123456789ABCDEF", 1) != 1 )
    {
      return 0;
    }
    v8 = *(_DWORD *)(*a2 + v5) >> 28;
LABEL_27:
    if ( sub_B69CC(a1, (int)&a0123456789abcd_2[v8], 1) != 1 )
      return 0;
    v9 = HIBYTE(*(_DWORD *)(*a2 + v5)) & 0xF;
LABEL_29:
    if ( sub_B69CC(a1, (int)&a0123456789abcd_2[v9], 1) != 1 )
      return 0;
    v10 = (*(_DWORD *)(*a2 + v5) >> 20) & 0xF;
LABEL_31:
    if ( sub_B69CC(a1, (int)&a0123456789abcd_2[v10], 1) != 1 )
      return 0;
    v11 = HIWORD(*(_DWORD *)(*a2 + v5)) & 0xF;
    goto LABEL_33;
  }
  return 0;
}
