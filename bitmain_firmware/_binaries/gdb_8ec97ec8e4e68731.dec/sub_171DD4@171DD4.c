int __fastcall sub_171DD4(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int a5)
{
  _DWORD *v5; // r6
  int v6; // r4
  int v9; // r3
  char v10; // r2
  int v11; // r5
  int v12; // r1
  int v13; // r2
  char v14; // r3
  _DWORD *v15; // r0
  _DWORD *v16; // r2
  int v17; // r12
  bool v18; // zf
  int v19; // r2
  int v20; // r2
  int v21; // r3
  int v23; // r3
  _DWORD *v24; // r2
  int v25; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r0
  __int64 v29; // kr00_8
  int v30; // r0
  __int64 v31; // [sp+10h] [bp-14h] BYREF
  __int64 v32; // [sp+18h] [bp-Ch] BYREF

  v5 = a4;
  v6 = a1;
  if ( a4 )
  {
    if ( *a4 != 1 )
    {
      if ( a1 )
      {
        v9 = *(_DWORD *)(a1 + 24);
        *(_DWORD *)(v9 + 20) = a2;
      }
      else
      {
        sub_16FF58((int)a3);
        v9 = *(_DWORD *)(v30 + 24);
        v6 = v30;
        *(_DWORD *)(v9 + 20) = a2;
      }
      *(_BYTE *)v9 = 2;
      goto LABEL_6;
    }
    a5 = 8 * a4[2];
  }
  if ( a1 )
  {
    v23 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(v23 + 20) = a2;
  }
  else
  {
    sub_16FF58((int)a3);
    v23 = *(_DWORD *)(v25 + 24);
    v6 = v25;
    *(_DWORD *)(v23 + 20) = a2;
  }
  *(_BYTE *)v23 = 2;
  v24 = *(_DWORD **)(a3[6] + 24);
  if ( *v24 != 1 || v24[4] != 1 )
    goto LABEL_28;
  v26 = *(_DWORD *)(v23 + 32);
  if ( !v26 )
    goto LABEL_44;
  if ( *(_DWORD *)v26 == 2 )
  {
    if ( *(_DWORD *)(v26 + 8) != 1 )
    {
LABEL_43:
      while ( 1 )
      {
        v26 = *(_DWORD *)(v26 + 24);
        if ( !v26 )
          goto LABEL_44;
        if ( *(_DWORD *)v26 == 1 )
          goto LABEL_51;
      }
    }
    v27 = v26;
LABEL_55:
    if ( *(_QWORD *)(v27 + 16) )
      goto LABEL_40;
LABEL_28:
    v9 = *(_DWORD *)(v6 + 24);
    v5 = 0;
LABEL_6:
    *(_DWORD *)(v6 + 20) = 0;
    goto LABEL_7;
  }
  v27 = v26;
  while ( 1 )
  {
    v27 = *(_DWORD *)(v27 + 24);
    if ( !v27 )
      break;
    if ( *(_DWORD *)v27 == 2 )
    {
      if ( *(_DWORD *)(v27 + 8) != 1 )
        break;
      goto LABEL_55;
    }
  }
LABEL_40:
  if ( *(_DWORD *)v26 != 1 )
    goto LABEL_43;
LABEL_51:
  if ( *(_DWORD *)(v26 + 8) == 1 && !*(_QWORD *)(v26 + 16) )
    goto LABEL_28;
LABEL_44:
  if ( sub_17195C(a3, &v31, &v32) < 0 )
  {
    v32 = 0;
    v31 = 0;
  }
  v28 = sub_171258(a2);
  if ( v32 >= v31 )
  {
    v29 = v32 - v31 + 1;
    if ( a5 )
      *(_DWORD *)(v6 + 20) = (v29 * (unsigned int)a5 + 7) >> 3;
    else
      *(_DWORD *)(v6 + 20) = v29 * *(_DWORD *)(v28 + 20);
  }
  else
  {
    *(_DWORD *)(v6 + 20) = 0;
  }
  v9 = *(_DWORD *)(v6 + 24);
  v5 = 0;
LABEL_7:
  v10 = *(_BYTE *)(v9 + 2);
  *(_WORD *)(v9 + 4) = 1;
  if ( (v10 & 0x10) != 0 )
  {
    v11 = *(_DWORD *)(v9 + 16);
    v12 = *(_DWORD *)(v11 + 64);
    v13 = *(_DWORD *)(v11 + 60);
    v14 = v12 - v13;
    if ( (unsigned int)(v12 - v13) <= 0x17 )
    {
      obstack_newchunk((struct obstack *)(v11 + 48), 24);
      v13 = *(_DWORD *)(v11 + 60);
      v12 = *(_DWORD *)(v11 + 64);
    }
    v15 = *(_DWORD **)(v11 + 56);
    v16 = (_DWORD *)(v13 + 24);
    v17 = *(_DWORD *)(v11 + 72);
    *(_DWORD *)(v11 + 60) = v16;
    v18 = v16 == v15;
    if ( v16 == v15 )
      v14 = *(_BYTE *)(v11 + 88);
    v19 = ((unsigned int)v16 + v17) & ~v17;
    *(_DWORD *)(v11 + 60) = v19;
    if ( v18 )
      *(_BYTE *)(v11 + 88) = v14 | 2;
    if ( v19 - *(_DWORD *)(v11 + 52) > (unsigned int)(v12 - *(_DWORD *)(v11 + 52)) )
    {
      v19 = v12;
      *(_DWORD *)(v11 + 60) = v12;
    }
    *(_DWORD *)(v11 + 56) = v19;
    *v15 = 0;
    v15[1] = 0;
    v15[2] = 0;
    v15[3] = 0;
    v15[4] = 0;
    v15[5] = 0;
  }
  else
  {
    v15 = sub_930CC(0x18u);
  }
  v20 = *(_DWORD *)(v6 + 24);
  *(_DWORD *)(v20 + 24) = v15;
  v15[3] = a3;
  if ( v5 )
  {
    v21 = *(_BYTE *)(v20 + 2) & 0x10;
    if ( (*(_BYTE *)(v20 + 2) & 0x10) != 0 )
      v21 = *(_DWORD *)(v20 + 16);
    ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int))loc_171104)(
      3,
      v5[3],
      *v5,
      v5[1],
      v5[2],
      v5[3],
      v6,
      v21);
  }
  else if ( a5 )
  {
    v15[2] = v15[2] & 0xF | (16 * a5);
  }
  if ( !*(_DWORD *)(v6 + 20) )
    *(_BYTE *)(*(_DWORD *)(v6 + 24) + 1) |= 8u;
  return v6;
}
