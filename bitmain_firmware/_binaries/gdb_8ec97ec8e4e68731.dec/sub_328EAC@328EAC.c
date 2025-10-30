int __fastcall sub_328EAC(int a1, int a2, int a3)
{
  int v3; // r5
  unsigned __int64 v4; // r6
  int v5; // r3
  int v6; // r12
  int v7; // r4
  int v8; // lr
  int v10; // lr
  int v11; // r12
  unsigned __int64 v12; // r2
  int v13; // r12
  unsigned __int16 *v14; // r0
  bool v15; // cc
  int v16; // r3
  int v17; // r6
  unsigned int v18; // r0
  int v19; // r3

  v5 = *(unsigned __int16 *)(a2 + 10);
  if ( *(_WORD *)(a1 + 10) || *(_DWORD *)a1 != 1 )
  {
    if ( a3 )
      goto LABEL_4;
    v8 = *(unsigned __int8 *)(a1 + 8);
    goto LABEL_17;
  }
  v8 = *(unsigned __int8 *)(a1 + 8);
  if ( (v8 & 0x70) == 0 )
  {
    if ( a3 )
    {
      if ( !*(_WORD *)(a2 + 10) && *(_DWORD *)a2 == 1 )
      {
        if ( (*(_BYTE *)(a2 + 8) & 0x70) != 0 )
          return -1;
        else
          return 0;
      }
      return -1;
    }
    v7 = 0;
LABEL_20:
    v6 = *(unsigned __int8 *)(a2 + 8);
    if ( *(_WORD *)(a2 + 10) || *(_DWORD *)a2 != 1 || (v6 & 0x70) != 0 )
    {
      if ( (v6 & 0x80) != 0 )
      {
        if ( v7 != -1 )
          return 1;
        goto LABEL_7;
      }
      v5 = 1;
    }
    else if ( v7 == 1 )
    {
      return v7;
    }
    if ( v7 >= v5 )
    {
      if ( !v7 )
        return v7;
      v7 = 1;
      if ( ((v6 | v8) & 0x40) != 0 )
      {
LABEL_8:
        if ( (v6 & 0x40) != 0 )
        {
          if ( (v8 & 0x40) != 0 )
            return 0;
          else
            return -v7;
        }
        return v7;
      }
      goto LABEL_28;
    }
    return -1;
  }
  if ( !a3 )
  {
LABEL_17:
    if ( (v8 & 0x80) != 0 )
      v7 = -1;
    else
      v7 = 1;
    goto LABEL_20;
  }
LABEL_4:
  v6 = *(unsigned __int8 *)(a2 + 8);
  if ( *(_WORD *)(a2 + 10) || (v7 = *(_DWORD *)a2, *(_DWORD *)a2 != 1) )
  {
    v7 = 1;
  }
  else if ( (v6 & 0x70) == 0 )
  {
    return v7;
  }
  v8 = *(unsigned __int8 *)(a1 + 8);
LABEL_7:
  if ( ((v6 | v8) & 0x40) != 0 )
    goto LABEL_8;
LABEL_28:
  v10 = *(_DWORD *)(a1 + 4);
  v11 = *(_DWORD *)(a2 + 4);
  if ( v10 > v11 )
  {
    v19 = a1;
    v11 = *(_DWORD *)(a1 + 4);
    a1 = a2;
    v10 = *(_DWORD *)(a2 + 4);
    a2 = v19;
    v7 = -v7;
  }
  HIDWORD(v12) = *(_DWORD *)a1;
  v13 = v11 - v10;
  v14 = (unsigned __int16 *)(a1 + 10);
  v15 = SHIDWORD(v12) <= 49;
  if ( SHIDWORD(v12) <= 49 )
  {
    LODWORD(v12) = 35608;
  }
  else
  {
    LODWORD(v12) = -1431655765;
    HIDWORD(v12) += 2;
  }
  if ( v15 )
  {
    WORD1(v12) = 67;
    v3 = *(unsigned __int8 *)(v12 + HIDWORD(v12) + 20);
  }
  else
  {
    v12 = HIDWORD(v12) * (unsigned __int64)(unsigned int)v12;
  }
  if ( !v15 )
    v3 = HIDWORD(v12) >> 1;
  v16 = *(_DWORD *)a2;
  if ( *(int *)a2 <= 49 )
  {
    v17 = 35608;
  }
  else
  {
    v17 = -1431655765;
    v16 += 2;
  }
  if ( *(int *)a2 <= 49 )
  {
    HIWORD(v17) = 67;
    v16 = *(unsigned __int8 *)(v17 + v16 + 20);
  }
  else
  {
    v4 = (unsigned int)v16 * (unsigned __int64)(unsigned int)v17;
  }
  if ( *(int *)a2 > 49 )
    v16 = HIDWORD(v4) >> 1;
  v18 = sub_328CF4(v14, v3, (unsigned __int16 *)(a2 + 10), v16, v13);
  if ( v18 == 0x80000000 )
    return v18;
  return v18 * v7;
}
