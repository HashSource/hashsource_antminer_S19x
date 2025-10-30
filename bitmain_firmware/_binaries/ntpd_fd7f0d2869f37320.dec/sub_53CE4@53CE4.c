int __fastcall sub_53CE4(int a1)
{
  int *v1; // r5
  int v3; // r6
  int v4; // r1
  int v5; // r3
  bool v6; // zf
  int v7; // r2
  bool v8; // zf
  bool v9; // r1
  bool v11; // zf
  unsigned int v12; // r3
  unsigned int v14; // r2
  int v15; // r2
  unsigned int v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r3
  bool v19; // cc
  int v20; // r0
  int v21; // r8
  int v22; // r2
  bool v23; // zf
  char v24; // r3
  double v25; // r2
  int v26; // r1
  int v27; // r8
  int v28; // r1
  int v29; // r8
  int v30; // r1
  int v31; // r1
  int v32; // r2
  bool v33; // zf

  v1 = *(int **)(a1 + 84);
  v3 = *v1;
  v4 = *(_DWORD *)(*v1 + 140);
  v5 = *(unsigned __int8 *)(*v1 + 12);
  if ( (unsigned int)(v4 - 2) > 1 )
  {
    v6 = v5 == 65;
    if ( v5 != 65 )
      v6 = v5 == 70;
    v7 = v6;
    if ( v5 == 84 )
      v7 |= 1u;
    if ( v5 == 75 )
      v7 |= 1u;
    if ( v5 == 109 )
      v7 |= 1u;
    if ( v7 )
      return 0;
  }
  if ( v5 != 143 )
  {
    if ( v5 == 66 )
    {
      puts("0x42");
      return 0;
    }
    if ( v5 == 67 )
    {
      puts("0x43");
      return 0;
    }
    v8 = v4 == 2;
    if ( v4 == 2 )
      v8 = v5 == 65;
    if ( v8 )
    {
      puts("Undocumented 0x41 packet on Thunderbolt");
      return 0;
    }
    v9 = v4 == 3;
    if ( v5 == 65 && v9 )
      return 0;
    if ( v5 != 70 || !v9 )
    {
      v11 = v5 == 109;
      if ( v5 != 109 )
        v11 = v5 == 84;
      if ( !v11 )
        goto LABEL_28;
      return 0;
    }
    if ( *(_BYTE *)(v3 + 14) )
    {
LABEL_56:
      sub_39C88(a1, 6);
      v12 = 0;
      *(_DWORD *)(v3 + 4) = -1;
      return v12;
    }
    goto LABEL_28;
  }
  v12 = ((unsigned __int16)(HIBYTE(*(_WORD *)(v3 + 14)) | (*(_WORD *)(v3 + 14) << 8)) == 0)
      & ((*((unsigned __int8 *)v1 + 768) ^ 2u) >> 1);
  if ( v12 )
    return 0;
  v14 = *(unsigned __int8 *)(v3 + 13);
  if ( v14 == 171 )
  {
    if ( *(_WORD *)(v3 + 10) == 17 )
    {
      if ( *(int *)(v3 + 4) > 0 )
      {
        if ( HIBYTE(*(_WORD *)(v3 + 20)) | (unsigned __int16)(*(_WORD *)(v3 + 20) << 8) )
        {
          if ( (*(_BYTE *)(v3 + 22) & 0x1D) == 0 )
          {
            *((_BYTE *)v1 + 40) = 3;
            sub_39C88(a1, 6);
            v12 = 0;
            *(_DWORD *)(v3 + 4) = -1;
            return v12;
          }
          v1[52] = 0;
          if ( sub_53770(v1 + 47, v1 + 48, (unsigned __int8 *)(v3 + 26)) >= 0 )
          {
            v12 = 1;
            v1[49] = *(unsigned __int8 *)(v3 + 25);
            v1[50] = *(unsigned __int8 *)(v3 + 24);
            v1[51] = *(unsigned __int8 *)(v3 + 23);
            return v12;
          }
        }
        goto LABEL_28;
      }
      return 0;
    }
    goto LABEL_28;
  }
  if ( v14 <= 0xAB )
  {
    if ( v14 != 11 || *(int *)(v3 + 4) <= 0 )
      return 0;
    if ( *(_WORD *)(v3 + 10) != 74 )
      goto LABEL_28;
    if ( !(HIBYTE(*(_WORD *)(v3 + 29)) | (unsigned __int16)(*(_WORD *)(v3 + 29) << 8)) )
      goto LABEL_28;
    v25 = COERCE_DOUBLE(_byteswap_uint64(*(_QWORD *)(v3 + 16)));
    v1[52] = (int)((v25 - (double)(int)v25) * 1000000000.0);
    sub_8D0EC((int)v25, 86400);
    v27 = v26;
    v1[49] = sub_8CE58(v26, 3600);
    sub_8D0EC(v27, 3600);
    v29 = v28;
    v1[50] = sub_8CE58(v28, 60);
    sub_8D0EC(v29, 60);
    sub_8D0EC(v30, 60);
    v1[51] = v31;
    if ( sub_53770(v1 + 47, v1 + 48, (unsigned __int8 *)(v3 + 24)) < 0 )
      goto LABEL_28;
    if ( *(_BYTE *)(v3 + 8) )
    {
      v12 = 0;
      *(_BYTE *)(v3 + 8) = 0;
    }
    else
    {
      return 2;
    }
  }
  else
  {
    if ( v14 != 172 )
    {
      if ( v14 != 173 )
        return 0;
      if ( *(_WORD *)(v3 + 10) != 22 )
        goto LABEL_28;
      v15 = *(_DWORD *)(v3 + 4);
      *(_BYTE *)(v3 + 8) = *(_BYTE *)(v3 + 32);
      if ( v15 <= 0 )
        return 0;
      v16 = *(unsigned __int8 *)(v3 + 31);
      if ( v16 <= 0xE )
      {
        v17 = v16 - 2;
        v18 = v16 - 11;
        v19 = v18 > 1;
        if ( v18 > 1 )
          v19 = v17 > 5;
        if ( !v19 )
          goto LABEL_56;
      }
      v20 = sub_53770(v1 + 47, v1 + 48, (unsigned __int8 *)(v3 + 27));
      if ( v20 < 0 )
      {
LABEL_28:
        sub_39C88(a1, 2);
        v12 = 0;
        *(_DWORD *)(v3 + 4) = -1;
        return v12;
      }
      v21 = *(unsigned __int8 *)(v3 + 8);
      v22 = v20 >> 5;
      *(_DWORD *)(v3 + 144) = v20 >> 5;
      if ( (v21 & 2) != 0 )
      {
        v23 = v22 == 6;
        if ( v22 != 6 )
          v23 = v22 == 12;
        if ( v23 )
        {
          if ( (v21 & 1) != 0 )
            v24 = 1;
          else
            v24 = 2;
          *((_BYTE *)v1 + 40) = v24;
          goto LABEL_54;
        }
      }
      else if ( !v21 )
      {
        *((_BYTE *)v1 + 40) = 3;
        sub_39C88(a1, 6);
        v12 = 0;
        *(_DWORD *)(v3 + 4) = -1;
        return v12;
      }
      *((_BYTE *)v1 + 40) = 0;
LABEL_54:
      v12 = 1;
      v1[52] = (int)(COERCE_DOUBLE(_byteswap_uint64(*(_QWORD *)(v3 + 16))) * 1000000000.0);
      v1[49] = *(unsigned __int8 *)(v3 + 24);
      v1[50] = *(unsigned __int8 *)(v3 + 25);
      v1[51] = *(unsigned __int8 *)(v3 + 26);
      return v12;
    }
    if ( *(int *)(v3 + 4) <= 0 )
      return 0;
    if ( *(_WORD *)(v3 + 10) != 68 )
      goto LABEL_28;
    if ( !(*(unsigned __int16 *)(v3 + 23) >> 15) )
      goto LABEL_80;
    v32 = *(_DWORD *)(v3 + 144);
    v33 = v32 == 6;
    if ( v32 != 6 )
      v33 = v32 == 12;
    if ( v33 )
    {
      *((_BYTE *)v1 + 40) = 1;
    }
    else
    {
LABEL_80:
      v12 = 0;
      *((_BYTE *)v1 + 40) = 0;
    }
  }
  return v12;
}
