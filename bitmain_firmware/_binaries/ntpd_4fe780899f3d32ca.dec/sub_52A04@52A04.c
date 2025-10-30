unsigned int __fastcall sub_52A04(int a1)
{
  int *v2; // r4
  int v3; // r6
  int v4; // r1
  int v5; // r3
  bool v6; // zf
  int v7; // r2
  unsigned int result; // r0
  bool v9; // zf
  bool v10; // r1
  __int16 *v12; // r0
  unsigned int v13; // r3
  int v14; // r2
  unsigned int v15; // r3
  int v16; // r0
  int v17; // r8
  int v18; // r3
  bool v19; // zf
  int v20; // r3
  bool v21; // zf
  double v22; // d7
  int v23; // lr
  unsigned int v24; // r2
  unsigned int v25; // r3
  bool v26; // cc
  bool v27; // zf
  char v28; // r3

  v2 = *(int **)(a1 + 84);
  v3 = *v2;
  v4 = *(_DWORD *)(*v2 + 140);
  v5 = *(unsigned __int8 *)(*v2 + 12);
  if ( (unsigned int)(v4 - 2) > 1 )
  {
    v6 = v5 == 70;
    if ( v5 != 70 )
      v6 = v5 == 65;
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
  if ( v5 == 143 )
  {
    result = ((*((unsigned __int8 *)v2 + 768) ^ 2u) >> 1) & 1;
    if ( *(_WORD *)(v3 + 14) )
      result = 0;
    if ( result )
      return 0;
    v13 = *(unsigned __int8 *)(v3 + 13);
    if ( v13 == 171 )
    {
      if ( *(_WORD *)(v3 + 10) != 17 )
        goto LABEL_49;
      if ( *(int *)(v3 + 4) <= 0 )
        return 0;
      if ( !*(_WORD *)(v3 + 20) )
        goto LABEL_49;
      if ( (*(_BYTE *)(v3 + 22) & 0x1D) != 0 )
      {
        v2[52] = 0;
        if ( sub_524A8(v2 + 47, v2 + 48, (unsigned __int8 *)(v3 + 26)) < 0 )
          goto LABEL_49;
        v2[49] = *(unsigned __int8 *)(v3 + 25);
        v2[50] = *(unsigned __int8 *)(v3 + 24);
        v2[51] = *(unsigned __int8 *)(v3 + 23);
        return 1;
      }
    }
    else
    {
      if ( v13 <= 0xAB )
      {
        if ( v13 != 11 || *(int *)(v3 + 4) <= 0 )
          return 0;
        if ( *(_WORD *)(v3 + 10) != 74 )
          goto LABEL_49;
        if ( !*(_WORD *)(v3 + 29) )
          goto LABEL_49;
        v22 = COERCE_DOUBLE(_byteswap_uint64(*(_QWORD *)(v3 + 16)));
        v23 = (int)v22 - (_DWORD)&off_15180 * ((int)v22 / 86400);
        v2[52] = (int)((v22 - (double)(int)v22) * 1000000000.0);
        v2[49] = v23 / 3600;
        v2[50] = v23 % 3600 / 60;
        v2[51] = v23 % 3600 % 60;
        if ( sub_524A8(v2 + 47, v2 + 48, (unsigned __int8 *)(v3 + 24)) < 0 )
          goto LABEL_49;
        if ( !*(_BYTE *)(v3 + 8) )
          return 2;
        *(_BYTE *)(v3 + 8) = 0;
        return 0;
      }
      if ( v13 == 172 )
      {
        if ( *(int *)(v3 + 4) <= 0 )
          return 0;
        if ( *(_WORD *)(v3 + 10) != 68 )
          goto LABEL_49;
        if ( (__rev16(*(unsigned __int16 *)(v3 + 23)) & 0x80) == 0 )
          goto LABEL_57;
        v20 = *(_DWORD *)(v3 + 144);
        v21 = v20 == 12;
        if ( v20 != 12 )
          v21 = v20 == 6;
        if ( v21 )
        {
          *((_BYTE *)v2 + 40) = 1;
        }
        else
        {
LABEL_57:
          *((_BYTE *)v2 + 40) = 0;
          return 0;
        }
        return result;
      }
      if ( v13 != 173 )
        return 0;
      if ( *(_WORD *)(v3 + 10) != 22 )
        goto LABEL_49;
      v14 = *(_DWORD *)(v3 + 4);
      *(_BYTE *)(v3 + 8) = *(_BYTE *)(v3 + 32);
      if ( v14 <= 0 )
        return 0;
      v15 = *(unsigned __int8 *)(v3 + 31);
      if ( v15 <= 0xE )
      {
        v24 = v15 - 2;
        v25 = v15 - 11;
        v26 = v25 > 1;
        if ( v25 > 1 )
          v26 = v24 > 5;
        if ( !v26 )
          goto LABEL_27;
      }
      v16 = sub_524A8(v2 + 47, v2 + 48, (unsigned __int8 *)(v3 + 27));
      if ( v16 < 0 )
        goto LABEL_49;
      v17 = *(unsigned __int8 *)(v3 + 8);
      v18 = v16 >> 5;
      *(_DWORD *)(v3 + 144) = v16 >> 5;
      if ( (v17 & 2) != 0 )
      {
        v27 = v18 == 12;
        if ( v18 != 12 )
          v27 = v18 == 6;
        if ( v27 )
        {
          if ( (v17 & 1) != 0 )
            v28 = 1;
          else
            v28 = 2;
          *((_BYTE *)v2 + 40) = v28;
          goto LABEL_44;
        }
LABEL_43:
        *((_BYTE *)v2 + 40) = 0;
LABEL_44:
        v2[52] = (int)(COERCE_DOUBLE(_byteswap_uint64(*(_QWORD *)(v3 + 16))) * 1000000000.0);
        v2[49] = *(unsigned __int8 *)(v3 + 24);
        v2[50] = *(unsigned __int8 *)(v3 + 25);
        v2[51] = *(unsigned __int8 *)(v3 + 26);
        return 1;
      }
      if ( v17 )
        goto LABEL_43;
    }
    v12 = (__int16 *)a1;
    *((_BYTE *)v2 + 40) = 3;
    goto LABEL_28;
  }
  if ( v5 == 66 )
  {
    puts("0x42");
    return 0;
  }
  if ( v5 != 67 )
  {
    v9 = v4 == 2;
    if ( v4 == 2 )
      v9 = v5 == 65;
    if ( v9 )
    {
      puts("Undocumented 0x41 packet on Thunderbolt");
      return 0;
    }
    v10 = v4 == 3;
    if ( v5 != 65 || !v10 )
    {
      if ( v5 == 70 && v10 )
      {
        if ( *(_BYTE *)(v3 + 14) )
        {
LABEL_27:
          v12 = (__int16 *)a1;
LABEL_28:
          sub_394A0(v12, 6);
          *(_DWORD *)(v3 + 4) = -1;
          return 0;
        }
        goto LABEL_49;
      }
      v19 = v5 == 84;
      if ( v5 != 84 )
        v19 = v5 == 109;
      if ( !v19 )
      {
LABEL_49:
        sub_394A0((__int16 *)a1, 2);
        *(_DWORD *)(v3 + 4) = -1;
        return 0;
      }
    }
    return 0;
  }
  puts("0x43");
  return 0;
}
