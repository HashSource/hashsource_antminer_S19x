int __fastcall sub_1A1028(int a1, unsigned __int8 **a2)
{
  unsigned int v2; // r6
  int v3; // r7
  int *v4; // r8
  char *v5; // r5
  unsigned int v6; // r4
  bool v7; // cc
  char *v8; // r3
  __int64 v9; // r0
  char *i; // r9
  bool v11; // cc
  int v13; // r0
  int v14; // r2
  char *v15; // r2
  unsigned __int8 *v16; // r9
  unsigned __int8 *v17; // r3
  int v18; // r2
  int v19; // t1
  size_t v20; // r9
  char *v21; // r1
  int v22; // r0
  int v23; // r3
  bool v24; // zf
  int v25; // r0
  int v26; // r3
  int v27; // r2
  char *v28; // r9
  const char *v29; // r10
  _UNKNOWN **v30; // r11
  const char *v31; // t1
  size_t v32; // r0
  bool v33; // zf
  int v34; // r6
  int v35; // r3
  int v36; // r1
  bool v37; // zf
  char *v38[2]; // [sp+Ch] [bp-8h] BYREF

  v5 = (char *)*a2;
  v6 = (unsigned int)&a2[1][(_DWORD)*a2];
  if ( !*((_BYTE *)a2 + 12) )
  {
    v9 = sub_94700(
           (int)"macroexp.c",
           509,
           "%s: Assertion `%s' failed.",
           "int get_token(macro_buffer*, macro_buffer*)",
           "src->shared");
LABEL_115:
    v37 = v2 == 76;
    if ( v2 != 76 )
      v37 = BYTE4(v9) == 85;
    if ( v37 && v5[1] == 34 )
    {
      v15 = v8;
      goto LABEL_73;
    }
    goto LABEL_41;
  }
  if ( (unsigned int)v5 >= v6 )
    return 0;
  v4 = (int *)a2;
  v3 = a1;
  while ( 1 )
  {
    v2 = (unsigned __int8)*v5;
    v7 = v2 > 0x20;
    if ( v2 != 32 )
      v7 = v2 - 9 > 3;
    if ( v7 )
      break;
    ++v5;
LABEL_28:
    if ( v6 <= (unsigned int)v5 )
      return 0;
  }
  v8 = v5 + 2;
  HIDWORD(v9) = v2 == 47 && v6 >= (unsigned int)(v5 + 2);
  if ( !HIDWORD(v9) )
  {
    if ( v2 - 48 > 9 )
    {
      HIDWORD(v9) = v6 >= (unsigned int)(v5 + 2);
      goto LABEL_33;
    }
    goto LABEL_14;
  }
  v13 = (unsigned __int8)v5[1];
  if ( v13 == 42 )
  {
    if ( v6 <= (unsigned int)v8 )
LABEL_64:
      sub_946E0("Unterminated comment in macro expansion.");
    v8 = v5 + 4;
    while ( v6 < (unsigned int)v8 || *(v8 - 2) != 42 || *(v8 - 1) != 47 )
    {
      if ( (char *)(v6 + 2) == ++v8 )
        goto LABEL_64;
    }
    goto LABEL_56;
  }
  if ( v13 == 47 )
  {
    if ( v6 > (unsigned int)v8 && v5[2] != 10 )
    {
      v21 = v5 + 3;
      do
      {
        v8 = v21;
        if ( (char *)v6 == v21 )
          break;
        v22 = (unsigned __int8)*v21++;
      }
      while ( v22 != 10 );
    }
LABEL_56:
    v23 = v8 - v5;
    *(_DWORD *)v3 = v5;
    *(_DWORD *)(v3 + 4) = v23;
    v5 += v23;
    *(_BYTE *)(v3 + 12) = 1;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    goto LABEL_28;
  }
  v2 = 47;
LABEL_33:
  if ( v2 == 46 )
    v14 = HIDWORD(v9);
  else
    v14 = 0;
  if ( v14 && (unsigned int)(unsigned __int8)v5[1] - 48 <= 9 )
  {
LABEL_14:
    if ( v6 > (unsigned int)v5 )
    {
      for ( i = v5; ; v2 = (unsigned __int8)*i )
      {
        if ( v6 < (unsigned int)(i + 2) || !strchr("eEpP", v2) || ((i[1] - 43) & 0xFD) != 0 )
        {
          if ( v2 - 48 > 9 && v2 != 95 )
          {
            v11 = v2 > 0x2E;
            if ( v2 != 46 )
              v11 = (v2 & 0xFFFFFFDF) - 65 > 0x19;
            if ( v11 )
              goto LABEL_81;
          }
          ++i;
        }
        else
        {
          i += 2;
        }
        if ( v6 <= (unsigned int)i )
          goto LABEL_81;
      }
    }
    i = v5;
LABEL_81:
    v20 = i - v5;
    goto LABEL_82;
  }
  v15 = v5 + 1;
  if ( v6 >= (unsigned int)(v5 + 1) )
  {
    if ( v2 == 39 )
    {
      if ( v6 > (unsigned int)v15 )
      {
        HIDWORD(v9) = (unsigned __int8)v5[1];
        if ( HIDWORD(v9) == 39 )
          goto LABEL_108;
        v8 = v5 + 1;
        goto LABEL_99;
      }
    }
    else
    {
      if ( !HIDWORD(v9) )
      {
        if ( v2 != 34 )
          goto LABEL_41;
        while ( 1 )
        {
LABEL_73:
          if ( v6 <= (unsigned int)v15 )
            sub_946E0("Unterminated string in expression.");
          v26 = (unsigned __int8)*v15;
          if ( v26 == 34 )
            break;
          if ( v26 == 10 )
            sub_946E0("Newline characters may not appear in string constants.");
          ++v15;
          if ( v26 == 92 )
          {
            v38[0] = v15;
            sub_759A8(v38, 0);
            v15 = v38[0];
          }
        }
        v20 = v15 + 1 - v5;
        *(_DWORD *)v3 = v5;
        *(_DWORD *)(v3 + 4) = v20;
        *(_BYTE *)(v3 + 12) = 1;
        *(_DWORD *)(v3 + 8) = 0;
        *(_DWORD *)(v3 + 16) = 0;
        *(_DWORD *)(v3 + 20) = 0;
LABEL_83:
        v27 = v4[1];
        v28 = &v5[v20 - *v4];
        *v4 += (int)v28;
        v4[1] = v27 - (_DWORD)v28;
        return 1;
      }
      HIDWORD(v9) = v2 & 0xFFFFFFDF;
      v33 = v2 == 76;
      if ( v2 != 76 )
        v33 = HIDWORD(v9) == 85;
      if ( !v33 )
      {
LABEL_72:
        if ( v2 == 34 )
          goto LABEL_73;
        goto LABEL_115;
      }
LABEL_70:
      v25 = (unsigned __int8)v5[1];
      if ( v25 != 39 )
      {
        if ( v6 < (unsigned int)v15 )
        {
          if ( v25 != 34 )
            goto LABEL_41;
          if ( v2 != 34 )
            v15 = v5 + 2;
          goto LABEL_73;
        }
        goto LABEL_72;
      }
      if ( v2 == 39 )
      {
        if ( v6 > (unsigned int)v15 )
          goto LABEL_108;
      }
      else if ( v6 > (unsigned int)v8 )
      {
        HIDWORD(v9) = (unsigned __int8)v5[2];
        if ( HIDWORD(v9) == 39 )
          goto LABEL_108;
LABEL_99:
        v34 = 0;
        do
        {
          ++v8;
          if ( HIDWORD(v9) == 92 )
          {
            v38[0] = v8;
            LODWORD(v9) = sub_759A8(v38, 0);
            v8 = v38[0];
            v34 += v9;
          }
          else
          {
            ++v34;
          }
          if ( v6 <= (unsigned int)v8 )
            goto LABEL_109;
          HIDWORD(v9) = (unsigned __int8)*v8;
        }
        while ( HIDWORD(v9) != 39 );
        if ( !v34 )
LABEL_108:
          sub_946E0("A character constant must contain at least one character.");
        v20 = v8 + 1 - v5;
LABEL_82:
        *(_DWORD *)v3 = v5;
        *(_DWORD *)(v3 + 4) = v20;
        *(_BYTE *)(v3 + 12) = 1;
        *(_DWORD *)(v3 + 8) = 0;
        *(_DWORD *)(v3 + 16) = 0;
        *(_DWORD *)(v3 + 20) = 0;
        goto LABEL_83;
      }
    }
LABEL_109:
    sub_946E0("Unmatched single quote.", HIDWORD(v9));
  }
  if ( HIDWORD(v9) )
  {
    HIDWORD(v9) = v2 & 0xFFFFFFDF;
    v24 = v2 == 76;
    if ( v2 != 76 )
      v24 = HIDWORD(v9) == 85;
    if ( v24 )
      goto LABEL_70;
  }
LABEL_41:
  if ( v2 == 95 || (v2 & 0xFFFFFFDF) - 65 <= 0x19 )
  {
    if ( v6 > (unsigned int)v5 )
    {
      v17 = (unsigned __int8 *)v5;
      do
      {
        v16 = v17;
        v19 = *v17++;
        v18 = v19;
        if ( v19 != 95 && (v18 & 0xFFFFFFDF) - 65 > 0x19 && (unsigned int)(v18 - 48) > 9 )
          break;
        v16 = v17;
      }
      while ( v17 != (unsigned __int8 *)v6 );
    }
    else
    {
      v16 = (unsigned __int8 *)v5;
    }
    v20 = v16 - (unsigned __int8 *)v5;
    *(_BYTE *)(v3 + 12) = 1;
    *(_DWORD *)v3 = v5;
    *(_DWORD *)(v3 + 4) = v20;
    *(_DWORD *)(v3 + 20) = 1;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    goto LABEL_83;
  }
  if ( v6 >= (unsigned int)v15 )
  {
    v29 = "[";
    v30 = &off_3C3D44;
    while ( 1 )
    {
      if ( *(unsigned __int8 *)v29 == v2 )
      {
        v32 = strlen(v29);
        v20 = v32;
        if ( v6 >= (unsigned int)&v5[v32] && !memcmp(v5, v29, v32) )
          break;
      }
      v31 = (const char *)v30[1];
      ++v30;
      v29 = v31;
      if ( !v31 )
        goto LABEL_110;
    }
    *(_DWORD *)v3 = v5;
    *(_DWORD *)(v3 + 4) = v20;
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    *(_BYTE *)(v3 + 12) = 1;
    goto LABEL_83;
  }
LABEL_110:
  *(_DWORD *)v3 = v5;
  v35 = *v4;
  *(_DWORD *)(v3 + 4) = 1;
  v36 = v4[1];
  *(_BYTE *)(v3 + 12) = 1;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *v4 = (int)(v5 + 1);
  v4[1] = v36 - (_DWORD)&v5[-v35 + 1];
  return 1;
}
