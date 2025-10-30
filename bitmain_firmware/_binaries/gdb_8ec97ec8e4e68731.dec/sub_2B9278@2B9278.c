int __fastcall sub_2B9278(int a1, int a2)
{
  int v2; // r3
  _DWORD *v3; // r6
  char v7; // r3
  int v8; // r2
  int v9; // r5
  int v10; // r8
  int v11; // r3
  int v12; // r2
  int v13; // r1
  int v14; // lr
  int v15; // r2
  int v16; // r0
  int v17; // r2
  int v18; // r2
  bool v19; // zf
  int v20; // r5
  _DWORD *v21; // r5
  int v22; // r3
  int v23; // r1
  int v24; // r0
  int v25; // r1
  int v26; // r0
  _DWORD *v27; // lr
  _DWORD *v28; // r3
  int v29; // r2
  int v30; // r0
  _DWORD *v31; // r1
  int v32; // r2
  _DWORD *v33; // r9
  int v34; // r0
  int v35; // r3
  int v36; // r3
  int v37; // r6
  const char *v38; // r2
  int v39; // r9
  _BYTE *v40; // r3
  char v41; // r2
  char v42; // r1
  __int64 v43; // r0
  char v44; // r2
  int v45; // r3
  int v46; // r5
  _BYTE *v47; // [sp+1Ch] [bp-424h] BYREF
  char s[1056]; // [sp+20h] [bp-420h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 12);
  if ( v2 != 6 )
  {
    v3 = *(_DWORD **)(a2 + 28);
    if ( v3[11] != 4 )
      return 0;
    if ( !v3[12] && *(_BYTE *)(a1 + 48) != 10 || *(int *)(a1 + 40) <= 0 )
      goto LABEL_6;
    if ( *(_DWORD *)(a1 + 32) == -1
      && ((v2 == 2) & ((*(unsigned __int8 *)(a1 + 52) ^ 8u) >> 3)) != 0
      && !sub_2E0858(a2, a1) )
    {
      return 0;
    }
    if ( *(_BYTE *)(a1 + 48) == 10 )
    {
      if ( sub_2E2EE8(a1, a2, 1) )
      {
        v46 = *(_DWORD *)(a1 + 84);
        *(_BYTE *)(a1 + 93) |= 1u;
        if ( !v46 )
        {
          if ( sub_2E2EE8(a1, a2, 0) )
            *(_DWORD *)(a1 + 36) = 0;
        }
      }
    }
    if ( (*(_BYTE *)a2 & 1) == 0
      && (*(_BYTE *)(a1 + 93) & 1) == 0
      && ((*(_BYTE *)(a1 + 52) & 8) != 0 || *(_DWORD *)(a1 + 32) == -1) )
    {
LABEL_6:
      v7 = *(_BYTE *)(a1 + 51);
      *(_DWORD *)(a1 + 40) = -1;
      *(_BYTE *)(a1 + 51) = v7 & 0x7F;
      goto LABEL_7;
    }
    sub_2B6944(a2, *(_BYTE *)(a1 + 93) & 1, (_DWORD *)(a1 + 40), (_DWORD *)(a1 + 76));
    if ( (*(_BYTE *)a2 & 1) == 0 )
    {
      v22 = v3[105];
      if ( (*(_BYTE *)(a1 + 51) & 2) != 0 )
      {
        if ( !v22 )
          goto LABEL_7;
        v24 = *(_DWORD *)(a1 + 40);
      }
      else
      {
        v23 = v3[57];
        v24 = *(_DWORD *)(a1 + 40);
        *(_BYTE *)(a1 + 50) &= 0xFCu;
        *(_DWORD *)(a1 + 20) = v23;
        *(_DWORD *)(a1 + 24) = v24;
        if ( !v22 )
          goto LABEL_7;
      }
      v25 = v3[113];
      v19 = v3[103] == v24;
      v26 = *(_DWORD *)(a2 + 28);
      if ( v19 )
      {
        sub_2B68BC(v26, v25, 1);
        v25 = v3[113];
        v26 = *(_DWORD *)(a2 + 28);
      }
      sub_2B68BC(v26, v25, 2);
    }
LABEL_7:
    v8 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 96) = -1;
    if ( v8 <= 0 )
    {
      *(_DWORD *)(a1 + 36) = -1;
      goto LABEL_29;
    }
    v9 = *(unsigned __int8 *)(a1 + 92);
    if ( *(_DWORD *)(a1 + 32) == -1 && (*(_BYTE *)(a1 + 52) & 8) == 0 && *(_BYTE *)(a1 + 12) == 2 && !sub_2E0858(a2, a1) )
      return 0;
    v10 = v3[106];
    if ( v10 )
      goto LABEL_29;
    v11 = v3[54];
    v12 = *(_DWORD *)(v11 + 36);
    *(_DWORD *)(a1 + 36) = v12;
    if ( !v9 )
      sub_2A6BF0((int)"elf32-arm.c", 15373, (int)"allocate_dynrelocs_for_symbol");
    v13 = v3[12];
    if ( v9 == 1 )
    {
      *(_DWORD *)(v11 + 36) = v12 + 4;
      if ( !v13 )
        goto LABEL_115;
    }
    else
    {
      if ( (v9 & 8) != 0 )
      {
        v14 = v3[55];
        v15 = *(_DWORD *)(v14 + 36);
        v16 = v3[112] + 1;
        *(_DWORD *)(a1 + 96) = v15 - 4 * v3[111];
        *(_DWORD *)(v14 + 36) = v15 + 8;
        *(_DWORD *)(a1 + 36) = -2;
        v3[112] = v16;
      }
      if ( (v9 & 2) != 0 )
      {
        v17 = *(_DWORD *)(v11 + 36);
        *(_DWORD *)(a1 + 36) = v17;
        *(_DWORD *)(v11 + 36) = v17 + 8;
      }
      if ( (v9 & 4) != 0 )
        *(_DWORD *)(v11 + 36) += 4;
      if ( !v13 )
      {
LABEL_19:
        v18 = 0;
        goto LABEL_20;
      }
    }
    if ( (*(_BYTE *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 32) != -1 || (*(_BYTE *)(a1 + 52) & 8) != 0) && !sub_2E2EE8(a1, a2, 0) )
      {
        v45 = *(_DWORD *)(a1 + 32);
LABEL_103:
        v10 = v45;
        if ( v9 == 1 )
          goto LABEL_118;
        v18 = v45;
        if ( v45 )
          v18 = 1;
LABEL_20:
        if ( v18 | *(_BYTE *)a2 & 1 )
        {
          if ( (*(_BYTE *)(a1 + 49) & 3) == 0 || *(_BYTE *)(a1 + 12) != 2 )
          {
            if ( (v9 & 4) != 0 )
              sub_2B68BC(*(_DWORD *)(a2 + 28), v3[56], 1);
            v19 = (v9 & 2) == 0;
            v20 = v9 & 8;
            if ( v19 )
            {
              if ( v20 )
              {
                sub_2B68BC(*(_DWORD *)(a2 + 28), v3[58], 1);
                v3[116] = -1;
              }
            }
            else
            {
              sub_2B68BC(*(_DWORD *)(a2 + 28), v3[56], 1);
              if ( v20 )
              {
                sub_2B68BC(*(_DWORD *)(a2 + 28), v3[58], 1);
                v3[116] = -1;
              }
              if ( v10 )
                goto LABEL_117;
            }
            goto LABEL_29;
          }
LABEL_118:
          if ( v10 == -1 )
            goto LABEL_119;
        }
LABEL_115:
        if ( sub_2E2EE8(a1, a2, 0) )
        {
LABEL_119:
          if ( *(_BYTE *)(a1 + 48) == 10 && !*(_DWORD *)(a1 + 84) )
          {
            sub_2B627C(*(_DWORD **)(a2 + 28), v3[56], 1);
            goto LABEL_29;
          }
          if ( (*(_BYTE *)a2 & 1) != 0 && ((*(_BYTE *)(a1 + 49) & 3) == 0 || *(_BYTE *)(a1 + 12) != 2) )
            goto LABEL_117;
          goto LABEL_29;
        }
        if ( v3[12] )
LABEL_117:
          sub_2B68BC(*(_DWORD *)(a2 + 28), v3[56], 1);
LABEL_29:
        if ( !v3[97]
          && *(_DWORD *)(a1 + 32) != -1
          && (*(_BYTE *)(a1 + 51) & 2) != 0
          && (*(_BYTE *)(a1 + 50) & 3) == 1
          && (*(_BYTE *)(a1 + 49) & 3) == 0 )
        {
          v38 = *(const char **)(a1 + 4);
          v39 = *(_DWORD *)(a1 + 20);
          v47 = 0;
          sprintf(s, "__real_%s", v38);
          sub_2FD6C4(a2, *(_DWORD *)(v39 + 148), (int)s, 2, v39, *(_DWORD *)(a1 + 24), 0, 1, 0, (int)&v47);
          v40 = v47;
          v41 = v47[50];
          v42 = v47[52];
          v47[48] = 2;
          v40[50] = v41 & 0xFC | 1;
          v40[52] = v42 | 8;
          *(_DWORD *)(a1 + 100) = v40;
          v43 = *(_QWORD *)(sub_2B90BC(a2, *(const char **)(a1 + 4)) + 20);
          HIDWORD(v43) &= ~1u;
          v44 = *(_BYTE *)(a1 + 50) & 0xFC;
          *(_BYTE *)(a1 + 48) = (*(_BYTE *)(a1 + 48) & 0xF0) + 2;
          *(_QWORD *)(a1 + 20) = v43;
          *(_BYTE *)(a1 + 50) = v44;
        }
        v21 = *(_DWORD **)(a1 + 72);
        if ( !v21 )
          return 1;
        if ( (*(_BYTE *)a2 & 1) == 0 && !v3[13] )
        {
          if ( (*(_BYTE *)(a1 + 52) & 0x40) == 0
            && ((*(_BYTE *)(a1 + 51) & 0xA) == 8 || v3[12] && (unsigned int)*(unsigned __int8 *)(a1 + 12) - 1 <= 1) )
          {
            if ( *(_DWORD *)(a1 + 32) != -1 )
              goto LABEL_87;
            if ( (*(_BYTE *)(a1 + 52) & 8) == 0 && *(_BYTE *)(a1 + 12) == 2 )
            {
              if ( !sub_2E0858(a2, a1) )
                return 0;
              if ( *(_DWORD *)(a1 + 32) != -1 )
                goto LABEL_44;
            }
          }
LABEL_60:
          *(_DWORD *)(a1 + 72) = 0;
          return 1;
        }
        if ( sub_2E2EE8(a1, a2, 1) )
        {
          v27 = (_DWORD *)(a1 + 72);
          v28 = *(_DWORD **)(a1 + 72);
          while ( v28 )
          {
            v29 = v28[2];
            v30 = v28[3];
            v31 = (_DWORD *)*v28;
            v28[3] = 0;
            v32 = v29 - v30;
            v28[2] = v32;
            if ( v32 )
              v27 = v28;
            v28 = v31;
            if ( !v32 )
              *v27 = v31;
          }
        }
        v21 = *(_DWORD **)(a1 + 72);
        if ( v3[105] )
        {
          v33 = (_DWORD *)(a1 + 72);
          while ( v21 )
          {
            v34 = strcmp(**(const char ***)(v21[1] + 60), ".tls_vars");
            v35 = *v21;
            if ( v34 )
              v33 = v21;
            v21 = (_DWORD *)*v21;
            if ( !v34 )
              *v33 = v35;
          }
          v21 = *(_DWORD **)(a1 + 72);
        }
        if ( v21 )
        {
          v36 = *(unsigned __int8 *)(a1 + 12);
          if ( v36 == 2 )
          {
            if ( (*(_BYTE *)(a1 + 49) & 3) != 0 || !*(_DWORD *)(a2 + 96) )
              goto LABEL_60;
            if ( *(_DWORD *)(a1 + 32) != -1 || (*(_BYTE *)(a1 + 52) & 8) != 0 )
              goto LABEL_87;
LABEL_83:
            if ( !sub_2E0858(a2, a1) )
              return 0;
LABEL_44:
            v21 = *(_DWORD **)(a1 + 72);
            goto LABEL_45;
          }
          if ( !v3[13] || *(_DWORD *)(a1 + 32) != -1 )
            goto LABEL_87;
        }
        else
        {
          if ( !v3[13] || *(_DWORD *)(a1 + 32) != -1 )
            return 1;
          v36 = *(unsigned __int8 *)(a1 + 12);
        }
        if ( v36 )
        {
LABEL_45:
          if ( !v21 )
            return 1;
          do
          {
LABEL_87:
            v37 = *(_DWORD *)(*(_DWORD *)(v21[1] + 140) + 112);
            if ( *(_BYTE *)(a1 + 48) == 10 && !*(_DWORD *)(a1 + 84) && sub_2E2EE8(a1, a2, 0) )
              sub_2B627C(*(_DWORD **)(a2 + 28), v37, v21[2]);
            else
              sub_2B68BC(*(_DWORD *)(a2 + 28), v37, v21[2]);
            v21 = (_DWORD *)*v21;
          }
          while ( v21 );
          return 1;
        }
        goto LABEL_83;
      }
    }
    else if ( (*(_BYTE *)(a1 + 52) & 8) == 0 )
    {
      v45 = *(_DWORD *)(a1 + 32);
      if ( v45 != -1 )
        goto LABEL_103;
    }
    if ( v9 == 1 )
      goto LABEL_115;
    goto LABEL_19;
  }
  return 1;
}
