char *__fastcall sub_28ABEC(int a1, int a2)
{
  int v2; // r9
  int v3; // r6
  char *v5; // r11
  int v6; // r8
  int v7; // r3
  const char **v8; // r0
  const char **v9; // r4
  const char *v10; // r0
  int v11; // r5
  int v12; // r3
  const char *v13; // t1
  size_t v14; // r0
  char *v15; // r0
  char *v16; // r7
  bool v17; // zf
  bool v18; // r1
  _BYTE *v19; // r5
  int v21; // r10
  const unsigned __int16 **v22; // r0
  unsigned __int16 v23; // r2
  const __int32_t **v24; // r0
  int v25; // r2
  const __int32_t *v26; // r10
  __int32_t v27; // r1
  const char **v29; // [sp+8h] [bp-2Ch]
  int v30; // [sp+10h] [bp-24h]
  int v31; // [sp+18h] [bp-1Ch]
  int v32; // [sp+1Ch] [bp-18h]
  int v33; // [sp+20h] [bp-14h]
  const unsigned __int16 *v34; // [sp+2Ch] [bp-8h]

  v2 = 0;
  v3 = 0;
  v5 = 0;
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v7 = *(unsigned __int8 *)(a2 + 8 * v2);
      if ( v7 != 1 )
        break;
      if ( !*(_DWORD *)(a2 + 8 * v2 + 4) )
        goto LABEL_4;
      v8 = (const char **)sub_28ABEC(a1);
      v9 = v8;
      v29 = v8;
      if ( !v8 )
        goto LABEL_4;
      v10 = *v8;
      if ( !*v9 )
        goto LABEL_31;
      ++v3;
      v11 = 4 * v3;
      v33 = v2 | 0x40;
      v12 = (char)(v2 | 0x40);
      v30 = a2;
      v32 = v12;
      v31 = v12;
      while ( 1 )
      {
        v14 = strlen(v10);
        v15 = (char *)sub_93028(v14 + 6);
        v16 = v15;
        if ( v2 == 27 )
        {
          if ( dword_46DED8 && *(_BYTE *)(v30 + 216) == 1 )
            strcpy(v15, "\\M-");
          else
            strcpy(v15, "\\e");
          goto LABEL_23;
        }
        if ( v2 <= 31 )
        {
          v21 = (char)(v2 | 0x40);
          if ( v21 != (v2 | 0x40) )
          {
            v21 = v2 | 0x40;
LABEL_35:
            sprintf(v16, aC_16, v21);
            goto LABEL_23;
          }
          v22 = _ctype_b_loc();
          if ( ((*v22)[v32] & 0x200) != 0 )
          {
            v34 = *v22;
            v27 = (*_ctype_toupper_loc())[v31];
            if ( (v27 & 0xFFFFFF00) == 0 && (v34[v27] & 0x100) != 0 )
            {
              v26 = *_ctype_tolower_loc();
              v25 = 4 * LOBYTE((*_ctype_toupper_loc())[v31]);
              goto LABEL_39;
            }
            v23 = v34[v33];
          }
          else
          {
            v23 = (*v22)[v33];
            if ( (v23 & 0x100) != 0 )
            {
              v24 = _ctype_tolower_loc();
              v25 = v31 * 4;
              v26 = *v24;
LABEL_39:
              v21 = *(const __int32_t *)((char *)v26 + v25);
              goto LABEL_35;
            }
          }
          if ( (v23 & 0x200) != 0 )
            v21 = (*_ctype_toupper_loc())[v31];
          goto LABEL_35;
        }
        if ( v2 == 127 )
        {
          strcpy(v15, "\\C-?");
        }
        else
        {
          v17 = v2 == 34;
          if ( v2 != 34 )
            v17 = v2 == 92;
          v18 = v17;
          if ( v17 )
          {
            v15[1] = v2;
            v15[2] = 0;
            *v15 = 92;
          }
          else
          {
            *v15 = v2;
            v15[1] = v18;
          }
        }
LABEL_23:
        strcat(v16, *v9);
        sub_297758(*v9);
        if ( v3 >= v6 )
        {
          v6 += 10;
          v5 = (char *)sub_93050(v5, 4 * v6);
        }
        *(_DWORD *)&v5[v11 - 4] = v16;
        *(_DWORD *)&v5[v11] = 0;
        v11 += 4;
        v13 = v9[1];
        ++v9;
        v10 = v13;
        if ( !v13 )
          break;
        ++v3;
      }
      a2 = v30;
LABEL_31:
      sub_297758(v29);
LABEL_4:
      if ( ++v2 == 257 )
        return v5;
    }
    if ( *(_BYTE *)(a2 + 8 * v2) && v7 != 2 || *(_DWORD *)(a2 + 8 * v2 + 4) != a1 )
      goto LABEL_4;
    v19 = sub_287F28(v2);
    if ( v3 + 1 >= v6 )
    {
      v6 += 10;
      v5 = (char *)sub_93050(v5, 4 * v6);
    }
    *(_DWORD *)&v5[4 * v3] = v19;
    ++v2;
    *(_DWORD *)&v5[4 * v3++ + 4] = 0;
  }
  while ( v2 != 257 );
  return v5;
}
