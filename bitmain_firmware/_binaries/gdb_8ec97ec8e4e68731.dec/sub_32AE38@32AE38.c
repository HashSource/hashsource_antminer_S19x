int __fastcall sub_32AE38(int a1, int a2, int a3, int a4, unsigned __int8 a5, int *a6)
{
  unsigned __int64 v6; // r8
  int v9; // r6
  int v11; // r3
  unsigned int v12; // r2
  int v13; // r12
  int v14; // r0
  bool v15; // zf
  bool v16; // zf
  _BOOL4 v17; // r5
  int v18; // r3
  int v19; // r2
  bool v20; // cc
  int v21; // r3
  unsigned int v23; // r1
  int v24; // r12
  bool v25; // zf
  int v26; // r5
  char v27; // r1
  int v28; // r0
  int v29; // r3
  int v30; // lr
  unsigned __int64 v31; // r2
  int v32; // r1
  int v33; // r3
  int v34; // r3
  int v35[2]; // [sp+Ch] [bp-8h] BYREF

  v9 = a2;
  v11 = *(unsigned __int8 *)(a2 + 8);
  v12 = *(unsigned __int8 *)(a3 + 8);
  if ( a5 == 4 )
  {
    if ( (((v12 & 0x80u) == 0) & ((unsigned int)(char)v11 >> 31)) != 0 )
      goto LABEL_27;
    if ( (v11 & 0x80u) == 0 )
      v23 = (unsigned int)(char)v12 >> 31;
    else
      v23 = 0;
    if ( v23 )
      goto LABEL_24;
    if ( ((v12 | v11) & 0x30) == 0 )
    {
LABEL_10:
      v14 = sub_328EAC(v9, a3, 0);
      if ( v14 != 0x80000000 )
        goto LABEL_11;
LABEL_41:
      *a6 |= 0x10u;
      return a1;
    }
    if ( (v11 & 0x30) != 0 )
    {
      LOWORD(v24) = v12 & 0x30;
      if ( (v12 & 0x30) == 0 )
      {
        if ( (v11 & 0x80u) == 0 )
        {
          *(_BYTE *)(a1 + 8) = 0;
          *(_DWORD *)a1 = 1;
          *(_DWORD *)(a1 + 4) = 0;
          *(_WORD *)(a1 + 10) = 1;
          return a1;
        }
        goto LABEL_66;
      }
      if ( (v11 & 0x10) == 0 || (v12 & 0x20) == 0 )
      {
        if ( (v11 & 0x20) != 0 && (v12 & 0x10) != 0 )
        {
          if ( (v11 & 0x80u) == 0 )
            goto LABEL_24;
          v14 = -1;
          goto LABEL_90;
        }
        HIDWORD(v31) = *(_DWORD *)v9;
        if ( *(int *)v9 <= 49 )
        {
          LODWORD(v31) = 35608;
        }
        else
        {
          LODWORD(v31) = -1431655765;
          HIDWORD(v31) += 2;
        }
        if ( *(int *)v9 <= 49 )
        {
          WORD1(v31) = 67;
          HIDWORD(v31) += v31;
        }
        else
        {
          v31 = HIDWORD(v31) * (unsigned __int64)(unsigned int)v31;
        }
        if ( *(int *)v9 > 49 )
          v32 = HIDWORD(v31) >> 1;
        else
          v32 = *(unsigned __int8 *)(HIDWORD(v31) + 20);
        v33 = *(_DWORD *)a3;
        if ( *(int *)a3 <= 49 )
        {
          LOWORD(v24) = -29928;
        }
        else
        {
          a4 = -1431655765;
          v33 += 2;
        }
        if ( *(int *)a3 <= 49 )
        {
          HIWORD(v24) = 67;
          v33 += v24;
        }
        else
        {
          v6 = (unsigned int)v33 * (unsigned __int64)(unsigned int)a4;
        }
        if ( *(int *)a3 > 49 )
          v34 = HIDWORD(v6) >> 1;
        else
          v34 = *(unsigned __int8 *)(v33 + 20);
        v14 = sub_328CF4((unsigned __int16 *)(v9 + 10), v32, (unsigned __int16 *)(a3 + 10), v34, 0);
        if ( *(char *)(v9 + 8) < 0 )
          v14 = -v14;
        if ( v14 != 0x80000000 )
        {
LABEL_90:
          v17 = v14 == 0;
LABEL_20:
          if ( !v17 )
          {
            *(_BYTE *)(a1 + 8) = 0;
            *(_DWORD *)a1 = 1;
            *(_DWORD *)(a1 + 4) = 0;
            if ( !v14 )
            {
              *(_WORD *)(a1 + 10) = 0;
              return a1;
            }
            *(_WORD *)(a1 + 10) = 1;
            if ( v14 >= 0 )
              return a1;
LABEL_28:
            *(_BYTE *)(a1 + 8) = 0x80;
            return a1;
          }
          v18 = *(_DWORD *)(a3 + 4);
          v19 = *(_DWORD *)(v9 + 4);
          v20 = v19 < v18;
          if ( v19 == v18 )
          {
            *(_BYTE *)(a1 + 8) = 0;
            *(_DWORD *)(a1 + 4) = 0;
            *(_WORD *)(a1 + 10) = 0;
            *(_DWORD *)a1 = 1;
            return a1;
          }
          v21 = *(char *)(v9 + 8);
          if ( v20 )
          {
            if ( v21 < 0 )
              goto LABEL_24;
          }
          else if ( v21 >= 0 )
          {
LABEL_24:
            *(_BYTE *)(a1 + 8) = 0;
            *(_DWORD *)(a1 + 4) = 0;
            *(_DWORD *)a1 = 1;
            *(_WORD *)(a1 + 10) = 1;
            return a1;
          }
LABEL_27:
          *(_DWORD *)(a1 + 4) = 0;
          *(_DWORD *)a1 = 1;
          *(_WORD *)(a1 + 10) = 1;
          goto LABEL_28;
        }
        goto LABEL_41;
      }
      if ( (v11 & 0x80u) == 0 )
      {
        *(_DWORD *)(a1 + 4) = 0;
        *(_DWORD *)a1 = 1;
        *(_WORD *)(a1 + 10) = 1;
        goto LABEL_28;
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_DWORD *)a1 = 1;
    }
    else
    {
      if ( (v11 & 0x80u) == 0 )
      {
LABEL_66:
        *(_DWORD *)a1 = 1;
        *(_DWORD *)(a1 + 4) = 0;
        *(_WORD *)(a1 + 10) = 1;
        goto LABEL_28;
      }
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 4) = 0;
    }
    *(_WORD *)(a1 + 10) = 1;
    return a1;
  }
  if ( ((v12 | v11) & 0x30) != 0 )
  {
    if ( a5 != 1 )
    {
      if ( a5 != 6 )
      {
        if ( (((unsigned __int8)v12 | (unsigned __int8)v11) & 0x10) != 0 || (v11 & 0x30) != 0 && (v12 & 0x30) != 0 )
          goto LABEL_30;
        if ( (v11 & 0x20) == 0 )
        {
          v35[0] = 0;
          v13 = *(_DWORD *)(a2 + 4);
LABEL_63:
          v27 = v11;
          v28 = v13;
          goto LABEL_64;
        }
        v30 = *(_DWORD *)(a3 + 4);
        v35[0] = 0;
        goto LABEL_73;
      }
      *a6 |= 0x40000080u;
    }
LABEL_30:
    sub_32AC0C(a1, a2, a3, (int *)a4, a6);
    return a1;
  }
  if ( (unsigned int)a5 - 7 > 1 )
    goto LABEL_10;
  v14 = sub_328EAC(a2, a3, 1);
  if ( v14 == 0x80000000 )
    goto LABEL_41;
LABEL_11:
  v15 = a5 == 6;
  if ( a5 != 6 )
    v15 = a5 == 1;
  if ( v15 )
  {
    v16 = a5 == 4;
    if ( a5 == 4 )
      v16 = v14 == 0;
    v17 = v16;
    goto LABEL_20;
  }
  if ( a5 == 4 )
    goto LABEL_90;
  if ( a5 == 5 )
    return a1;
  v25 = a5 == 8;
  if ( a5 != 8 )
    v25 = a5 == 3;
  v35[0] = 0;
  v26 = v25;
  if ( v14 )
  {
    if ( v26 )
      v14 = -v14;
    if ( v14 <= 0 )
    {
      LOBYTE(v12) = *(_BYTE *)(a3 + 8);
      goto LABEL_72;
    }
    LOBYTE(v11) = *(_BYTE *)(v9 + 8);
    goto LABEL_62;
  }
  v27 = *(_BYTE *)(v9 + 8);
  v12 = *(unsigned __int8 *)(a3 + 8);
  LOBYTE(v11) = v27;
  if ( (v27 & 0x80) == (v12 & 0x80) )
  {
    v28 = *(_DWORD *)(v9 + 4);
    v30 = *(_DWORD *)(a3 + 4);
    v13 = v28;
    if ( ((v12 >> 7) & ((unsigned int)v27 >> 31)) != 0 )
    {
      if ( v28 < v30 )
        goto LABEL_76;
    }
    else if ( v28 > v30 )
    {
LABEL_76:
      if ( !v26 )
        goto LABEL_64;
      goto LABEL_73;
    }
    if ( v26 )
      goto LABEL_63;
    v28 = *(_DWORD *)(a3 + 4);
    v27 = *(_BYTE *)(a3 + 8);
LABEL_71:
    v9 = a3;
    goto LABEL_64;
  }
  if ( v27 < 0 )
  {
    if ( !v26 )
    {
      v28 = *(_DWORD *)(a3 + 4);
      v27 = *(_BYTE *)(a3 + 8);
      goto LABEL_71;
    }
LABEL_62:
    v13 = *(_DWORD *)(v9 + 4);
    goto LABEL_63;
  }
  if ( v26 )
  {
LABEL_72:
    v30 = *(_DWORD *)(a3 + 4);
LABEL_73:
    v27 = v12;
    v28 = v30;
    goto LABEL_71;
  }
  v28 = *(_DWORD *)(v9 + 4);
LABEL_64:
  *(_BYTE *)(a1 + 8) = v27;
  v29 = *(_DWORD *)v9;
  *(_DWORD *)(a1 + 4) = v28;
  sub_328A00(a1, (int *)a4, (unsigned __int16 *)(v9 + 10), v29, v35, a6);
  sub_329598((_DWORD *)a1, (int *)a4, v35, a6);
  return a1;
}
