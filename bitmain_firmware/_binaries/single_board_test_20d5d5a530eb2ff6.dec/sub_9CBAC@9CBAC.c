int __fastcall sub_9CBAC(int *a1, int a2, _DWORD *a3)
{
  int *v3; // r4
  int v4; // r6
  int v5; // r3
  _BOOL4 v6; // r3
  int v7; // r3
  int *v8; // lr
  _DWORD *v9; // r1
  int *v10; // r5
  int v11; // r2
  int v12; // r2
  int v13; // r0
  int *i; // r4
  int *v15; // r0
  int v16; // r3
  int *v17; // r10
  int v18; // r7
  int v19; // t1
  int (__fastcall *v20)(int); // r2
  int v21; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r9
  int v26; // r3
  int v27; // r3
  _BOOL4 v28; // r2
  int v29; // r3
  unsigned __int8 *v30; // r2
  unsigned int v31; // r3
  unsigned int v32; // r9
  int v33; // r6
  unsigned __int8 *v34; // r11
  unsigned __int8 *v35; // r8
  int v36; // r1
  int v37; // r4
  int v38; // r2
  int v39; // r3
  _DWORD *v40; // [sp+Ch] [bp-10h]
  int v41; // [sp+14h] [bp-8h] BYREF

  v3 = (int *)a1[1];
  v4 = *(_DWORD *)(a2 + 4);
  v5 = *v3;
  a1[321] = v4;
  if ( v5 != 0x10000 )
  {
    if ( v5 == 0x1FFFF )
    {
      v9 = *(_DWORD **)(a2 + 616);
      v7 = 65277;
      v10 = a1;
      v40 = a3;
      v8 = &dword_216638;
      if ( v9[104] )
        goto LABEL_9;
LABEL_33:
      if ( a1[275] )
        return 258;
      v11 = *(_DWORD *)(v3[25] + 48);
      goto LABEL_10;
    }
    v6 = v5 < 772 || v5 == 0x10000;
    if ( !(v6 | (*(_DWORD *)(v3[25] + 48) >> 3) & 1) )
    {
      v7 = 772;
      v8 = &dword_2165F0;
      goto LABEL_8;
    }
    v27 = *a1;
    if ( v4 == *a1 )
      goto LABEL_64;
    if ( (*(_DWORD *)(v3[25] + 48) & 8) != 0 )
    {
      if ( v4 == 256 )
      {
        if ( v27 == 256 )
          goto LABEL_64;
        v4 = 65280;
      }
      else if ( v27 == 256 )
      {
        v27 = 65280;
      }
      if ( v27 >= v4 )
      {
LABEL_64:
        *a3 = 0;
        return 0;
      }
    }
    else if ( v4 >= v27 )
    {
      goto LABEL_64;
    }
    return 266;
  }
  v7 = 772;
  v8 = &dword_2165F0;
LABEL_8:
  v9 = *(_DWORD **)(a2 + 616);
  v10 = a1;
  v40 = a3;
  if ( !v9[104] )
    goto LABEL_33;
LABEL_9:
  v11 = *(_DWORD *)(v3[25] + 48);
  if ( (v11 & 8) != 0 )
  {
LABEL_10:
    v12 = v11 & 8;
    if ( v4 == 772 )
    {
      v4 = 771;
    }
    else if ( v12 )
    {
      v28 = v4 > 772;
      if ( v4 == 256 )
        v28 = 1;
      if ( !v28 )
        v4 = 771;
    }
    else if ( v4 >= 771 )
    {
      v4 = 771;
    }
    v13 = 0;
    for ( i = v8; ; i += 3 )
    {
      v20 = (int (__fastcall *)(int))i[2];
      if ( !v20 )
        goto LABEL_23;
      if ( v4 == v7 )
        goto LABEL_17;
      if ( (*(_DWORD *)(*(_DWORD *)(v10[1] + 100) + 48) & 8) != 0 )
        break;
      if ( v4 >= v7 )
        goto LABEL_17;
LABEL_23:
      __pld(i + 9);
      v19 = i[3];
      v7 = v19;
      if ( !v19 )
      {
        if ( !v13 )
          return 396;
        return 258;
      }
    }
    if ( v4 == 256 )
    {
      if ( v7 == 256 )
        goto LABEL_17;
      v21 = 65280;
    }
    else
    {
      v21 = v4;
      if ( v7 == 256 )
        v7 = 65280;
    }
    if ( v7 < v21 )
      goto LABEL_23;
LABEL_17:
    v15 = (int *)v20(v13);
    v16 = v10[317];
    v17 = v15;
    v18 = *v15;
    if ( v16 && v18 != v16 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v10[1] + 100) + 48) & 8) != 0 )
      {
        if ( v18 == 256 )
        {
          if ( v16 == 256 )
            goto LABEL_21;
          v23 = 65280;
        }
        else
        {
          v23 = *v15;
          if ( v16 == 256 )
            v16 = 65280;
        }
        if ( v16 < v23 )
          goto LABEL_22;
      }
      else if ( v18 < v16 )
      {
        goto LABEL_22;
      }
    }
LABEL_21:
    if ( !sub_854EC((int)v10, 9) )
      goto LABEL_22;
    v24 = v10[318];
    if ( v24 && v18 != v24 )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v10[1] + 100) + 48) & 8) != 0 )
      {
        if ( v18 == 256 )
        {
          if ( v24 == 256 )
            goto LABEL_22;
          v25 = 65280;
        }
        else
        {
          v25 = v18;
          if ( v24 == 256 )
            v24 = 65280;
        }
        if ( v24 < v25 )
          goto LABEL_47;
LABEL_22:
        v13 = 1;
        goto LABEL_23;
      }
      if ( v18 >= v24 )
        goto LABEL_22;
    }
LABEL_47:
    if ( (v10[315] & v17[2]) == 0 && ((v17[1] & 2) == 0 || (*(_DWORD *)(v10[257] + 16) & 0x30000) == 0) )
    {
      v26 = *i;
      if ( *i == 771 )
      {
        if ( !sub_9C7FC((int)v10, 772, 0) )
          goto LABEL_116;
        v26 = *i;
        *v40 = 1;
      }
      else
      {
        if ( ((v26 <= 770) & ((*(_DWORD *)(*(_DWORD *)(v10[1] + 100) + 48) ^ 8u) >> 3)) == 0 )
          goto LABEL_52;
        if ( sub_9C7FC((int)v10, 771, 0) )
        {
          v26 = *i;
          *v40 = 2;
        }
        else
        {
LABEL_116:
          v26 = *i;
LABEL_52:
          *v40 = 0;
        }
      }
      *v10 = v26;
      v10[1] = (int)v17;
      return 0;
    }
    goto LABEL_22;
  }
  v29 = v9[103];
  v41 = 0;
  v9[105] = 1;
  if ( !v29 )
    return 159;
  v30 = (unsigned __int8 *)v9[102];
  v31 = v29 - 1;
  v32 = *v30;
  if ( v32 > v31 || v32 != v31 )
    return 159;
  v9[103] = 0;
  v9[102] = &v30[v32 + 1];
  if ( v4 <= 768 )
    return 292;
  v33 = 0;
  v34 = v30 + 3;
  v35 = &v30[(v32 & 0xFE) + 3];
  while ( v34 != v35 )
  {
    v36 = v33;
    v37 = *(v34 - 1) | (*(v34 - 2) << 8);
    if ( v37 == v33 )
      goto LABEL_88;
    if ( (*(_DWORD *)(*(_DWORD *)(v10[1] + 100) + 48) & 8) != 0 )
    {
      if ( v37 != 256 )
      {
        v38 = *(v34 - 1) | (*(v34 - 2) << 8);
        if ( v33 == 256 )
          v36 = 65280;
        else
          v36 = v33;
LABEL_96:
        if ( v38 > v36 )
          goto LABEL_88;
        goto LABEL_86;
      }
      if ( v33 != 256 )
      {
        v38 = 65280;
        goto LABEL_96;
      }
    }
    else if ( v37 < v33 )
    {
      goto LABEL_88;
    }
LABEL_86:
    if ( sub_9C7FC((int)v10, *(v34 - 1) | (*(v34 - 2) << 8), &v41) )
      v33 = v37;
LABEL_88:
    v34 += 2;
  }
  if ( v32 != (v32 & 0xFE) )
    return 159;
  if ( !v33 )
    return 258;
  if ( !v10[275] )
  {
    if ( v33 == 771 )
    {
      if ( sub_9C7FC((int)v10, 772, 0) )
      {
        *v40 = 1;
        goto LABEL_123;
      }
    }
    else if ( ((v33 <= 770) & ((*(_DWORD *)(*(_DWORD *)(v10[1] + 100) + 48) ^ 8u) >> 3)) != 0
           && sub_9C7FC((int)v10, 771, 0) )
    {
      *v40 = 2;
      goto LABEL_123;
    }
    *v40 = 0;
LABEL_123:
    v39 = v41;
    *v10 = v33;
    v10[1] = v39;
    return 0;
  }
  if ( v33 == 772 )
    return 0;
  else
    return 258;
}
