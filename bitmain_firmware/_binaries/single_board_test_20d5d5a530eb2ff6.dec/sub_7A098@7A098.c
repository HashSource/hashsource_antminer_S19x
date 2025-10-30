unsigned int __fastcall sub_7A098(_DWORD *a1, int a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r4
  int v5; // r0
  bool v6; // zf
  bool v7; // zf
  unsigned int v8; // r7
  bool v9; // zf
  bool v10; // zf
  bool v11; // zf
  _BOOL4 v12; // r2
  bool v13; // cc
  int v14; // r0
  int v15; // r2
  const char *v16; // r5
  char *v18; // r3
  int v19; // r1
  int v20; // r3
  int v21; // r2
  int v22; // r0
  int v23; // r2
  bool v24; // zf
  const char *v25; // r6
  int *v26; // r7
  __int64 v27; // r2
  double v28; // d7
  unsigned int v29; // r0
  int v30; // r6
  int v31; // r2
  int v32; // r0
  bool v33; // zf
  bool v34; // zf
  bool v35; // zf
  bool v36; // zf
  int v37; // r6
  bool v38; // cc
  int v39; // r0
  _BYTE *v40; // r6
  const char *v41; // r9
  _DWORD *v42; // r12
  int v43; // r3
  unsigned int v44; // r3
  int v45; // r0
  int v46; // r8
  _DWORD *v47; // r12
  unsigned __int8 *v48; // r4
  int v49; // r0
  int v50; // r0
  int v51; // r1
  int v52; // r2
  _DWORD *v53; // [sp+8h] [bp-1Ch]
  _DWORD *v54; // [sp+8h] [bp-1Ch]
  int v55; // [sp+Ch] [bp-18h]
  int v56; // [sp+10h] [bp-14h] BYREF
  char *endptr; // [sp+14h] [bp-10h] BYREF
  double v58; // [sp+18h] [bp-Ch] BYREF

  v2 = a1 + 10;
  v3 = a1;
  sub_7AD8C(a1 + 10);
  if ( v3[15] == 256 )
  {
    sub_7ACD8(v3[16]);
    v3[16] = 0;
    v3[17] = 0;
  }
  while ( 1 )
  {
    v5 = v3[5];
    if ( !v5 )
      v5 = sub_79F54((int)v3, a2);
    v6 = v5 == 32;
    if ( v5 != 32 )
      v6 = v5 == 9;
    if ( !v6 )
    {
      v7 = v5 == 10;
      if ( v5 != 10 )
        v7 = v5 == 13;
      if ( !v7 )
        break;
    }
  }
  v8 = v5;
  if ( v5 == -1 )
  {
    v3[15] = 0;
    return 0;
  }
  if ( v5 == -2 )
  {
LABEL_41:
    v8 = -1;
LABEL_42:
    v3[15] = v8;
    return v8;
  }
  sub_7AE28(v2, (unsigned __int8)v5);
  v9 = v8 == 123;
  if ( v8 != 123 )
    v9 = v8 == 125;
  if ( v9 )
    goto LABEL_42;
  v10 = v8 == 91;
  if ( v8 != 91 )
    v10 = v8 == 93;
  if ( v10 )
    goto LABEL_42;
  v11 = v8 == 58;
  if ( v8 != 58 )
    v11 = v8 == 44;
  if ( v11 )
    goto LABEL_42;
  if ( v8 != 34 )
  {
    v12 = v8 == 45;
    v13 = v8 > 0x2D;
    if ( v8 != 45 )
      v13 = v8 - 48 > 9;
    if ( !v13 )
    {
      v3[15] = -1;
      if ( v8 == 45 )
        v8 = sub_7A074((int)v3, a2);
      if ( v8 == 48 )
      {
        v22 = sub_7A074((int)v3, a2);
        if ( (unsigned int)(v22 - 48) <= 9 )
          goto LABEL_120;
      }
      else
      {
        if ( v8 - 48 > 9 )
        {
          sub_7A03C(v3, v8, v12);
          return v3[15];
        }
        do
          v22 = sub_7A074((int)v3, a2);
        while ( (unsigned int)(v22 - 48) <= 9 );
      }
      if ( (v3[13] & 8) != 0 )
        goto LABEL_57;
      v24 = v22 == 69;
      if ( v22 != 69 )
        v24 = v22 == 46;
      if ( v24 )
      {
LABEL_57:
        if ( v22 == 46 )
        {
          v51 = v3[5];
          if ( !v51 )
            v51 = sub_79F54((int)v3, a2);
          if ( (unsigned int)(v51 - 48) > 9 )
          {
            sub_79EE8(v3, v51, v23);
            return v3[15];
          }
          sub_7AE28(v2, (unsigned __int8)v51);
          do
            v22 = sub_7A074((int)v3, a2);
          while ( (unsigned int)(v22 - 48) <= 9 );
        }
        if ( (v22 & 0xFFFFFFDF) != 0x45 )
          goto LABEL_59;
      }
      else if ( v22 != 101 )
      {
        sub_7A03C(v3, v22, v23);
        v25 = (const char *)sub_7AD98(v2);
        v26 = _errno_location();
        *v26 = 0;
        v27 = strtoll(v25, &endptr, 10);
        if ( *v26 == 34 )
        {
          if ( v27 >= 0 )
            sub_79D74(a2, v3, 15, "too big integer");
          else
            sub_79D74(a2, v3, 15, "too big negative integer");
          return v3[15];
        }
        else
        {
          if ( endptr != &v25[v3[11]] )
            _assert_fail("end == saved_text + lex->saved_text.length", "load.c", 0x202u, "lex_scan_number");
          v8 = 257;
          *((_QWORD *)v3 + 8) = v27;
          v3[15] = 257;
        }
        return v8;
      }
      v22 = sub_7A074((int)v3, a2);
      v36 = v22 == 43;
      if ( v22 != 43 )
        v36 = v22 == 45;
      if ( v36 )
        v22 = sub_7A074((int)v3, a2);
      if ( (unsigned int)(v22 - 48) <= 9 )
      {
        do
          v22 = sub_7A074((int)v3, a2);
        while ( (unsigned int)(v22 - 48) <= 9 );
LABEL_59:
        sub_7A03C(v3, v22, v23);
        if ( sub_7AE58(v2, &v58) )
        {
          sub_79D74(a2, v3, 15, "real number overflow");
          return v3[15];
        }
        else
        {
          v28 = v58;
          v8 = 258;
          v3[15] = 258;
          *((double *)v3 + 8) = v28;
        }
        return v8;
      }
LABEL_120:
      sub_7A03C(v3, v22, v23);
      return v3[15];
    }
    if ( (v8 & 0xFFFFFFDF) - 65 > 0x19 )
    {
      v18 = (char *)v3 + v3[4];
      v19 = (unsigned __int8)v18[8];
      if ( v18[8] )
      {
        do
        {
          sub_7AE28(v2, v19);
          v20 = v3[4] + 1;
          v21 = v3[9] + 1;
          v19 = *((unsigned __int8 *)v3 + v20 + 8);
          v3[4] = v20;
          v3[9] = v21;
        }
        while ( v19 );
      }
    }
    else
    {
      do
        v14 = sub_7A074((int)v3, a2);
      while ( (v14 & 0xFFFFFFDF) - 65 <= 0x19 );
      sub_7A03C(v3, v14, v15);
      v16 = (const char *)sub_7AD98(v2);
      if ( !strcmp(v16, "true") )
      {
        v8 = 259;
        v3[15] = 259;
        return v8;
      }
      if ( !strcmp(v16, "false") )
      {
        v8 = 260;
        v3[15] = 260;
        return v8;
      }
      if ( !strcmp(v16, "null") )
      {
        v8 = 261;
        v3[15] = 261;
        return v8;
      }
    }
    goto LABEL_41;
  }
  v3[16] = 0;
  v3[15] = -1;
  v29 = sub_7A074((int)v3, a2);
  v30 = v29;
  if ( v29 == 34 )
  {
LABEL_106:
    v39 = sub_7ACC4(v3[11] + 1);
    v40 = (_BYTE *)v39;
    if ( !v39 )
      goto LABEL_89;
    v3[16] = v39;
    v41 = (const char *)(sub_7AD98(v2) + 1);
    v42 = v3;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v43 = *(unsigned __int8 *)v41;
          if ( v43 == 34 )
          {
            *v40 = 0;
            v52 = v42[16];
            v8 = 256;
            v42[15] = 256;
            v42[17] = &v40[-v52];
            return v8;
          }
          if ( v43 == 92 )
            break;
          ++v41;
          *v40++ = v43;
        }
        v44 = *((unsigned __int8 *)v41 + 1);
        if ( v44 != 117 )
          break;
        v53 = v42;
        v45 = sub_79E84((_BYTE *)v41 + 1);
        v46 = v45;
        v47 = v53;
        if ( v45 < 0 )
        {
          v3 = v53;
          sub_79D74(a2, v53, 8, "invalid Unicode escape '%.6s'", v41);
          goto LABEL_89;
        }
        v48 = (unsigned __int8 *)(v41 + 6);
        if ( (unsigned int)(v45 - 55296) > 0x3FF )
        {
          if ( (unsigned int)(v45 - 56320) <= 0x3FF )
            goto LABEL_158;
        }
        else
        {
          if ( v41[6] != 92 || v41[7] != 117 )
          {
LABEL_158:
            v3 = v53;
            sub_79D74(a2, v53, 8, "invalid Unicode '\\u%04X'", v45);
            goto LABEL_89;
          }
          v55 = v45 - 55296;
          v49 = sub_79E84((_BYTE *)v41 + 7);
          v47 = v53;
          if ( v49 < 0 )
          {
            v3 = v53;
            sub_79D74(a2, v53, 8, "invalid Unicode escape '%.6s'", v41 + 6);
            goto LABEL_89;
          }
          v48 = (unsigned __int8 *)(v41 + 12);
          if ( (unsigned int)(v49 - 56320) > 0x3FF )
          {
            v3 = v53;
            sub_79D74(a2, v53, 8, "invalid Unicode '\\u%04X\\u%04X'", v46, v49);
            goto LABEL_89;
          }
          v46 = v49 - 56320 + (v55 << 10) + 0x10000;
        }
        v54 = v47;
        v50 = sub_7AFB0(v46, v40, &v56);
        v42 = v54;
        if ( v50 )
          _assert_fail(a0, "load.c", 0x1A1u, "lex_scan_string");
        v41 = (const char *)v48;
        v40 += v56;
      }
      if ( v44 == 102 )
      {
        *v40 = 12;
      }
      else if ( v44 > 0x66 )
      {
        switch ( v44 )
        {
          case 'r':
            *v40 = 13;
            break;
          case 't':
            *v40 = 9;
            break;
          case 'n':
            LOBYTE(v44) = 10;
LABEL_125:
            *v40 = v44;
            break;
          default:
            goto LABEL_118;
        }
      }
      else
      {
        if ( v44 == 92 )
          goto LABEL_125;
        if ( v44 <= 0x5C )
        {
          if ( v44 != 34 && v44 != 47 )
LABEL_118:
            _assert_fail(a0, "load.c", 0x1BAu, "lex_scan_string");
          goto LABEL_125;
        }
        if ( v44 != 98 )
          goto LABEL_118;
        *v40 = 8;
      }
      ++v40;
      v41 += 2;
    }
  }
  if ( v29 == -2 )
    goto LABEL_89;
  v31 = v29 + 1;
  if ( v29 == -1 )
  {
LABEL_105:
    sub_79D74(a2, v3, 6, "premature end of input");
    goto LABEL_89;
  }
  if ( v29 > 0x1F )
  {
    do
    {
      if ( v29 == 92 )
      {
        v32 = sub_7A074((int)v3, a2);
        if ( v32 == 117 )
        {
          v37 = 4;
          v29 = sub_7A074((int)v3, a2);
          while ( 1 )
          {
            v38 = v29 - 65 > 5;
            if ( v29 - 65 > 5 )
              v38 = v29 - 48 > 9;
            if ( v38 && v29 - 97 > 5 )
              break;
            v29 = sub_7A074((int)v3, a2);
            if ( !--v37 )
              goto LABEL_67;
          }
LABEL_153:
          sub_79D74(a2, v3, 8, "invalid escape");
          goto LABEL_89;
        }
        v33 = v32 == 34;
        if ( v32 != 34 )
          v33 = v32 == 92;
        if ( !v33 )
        {
          v34 = v32 == 47;
          if ( v32 != 47 )
            v34 = v32 == 98;
          if ( !v34 && (v32 & 0xFFFFFFF7) != 0x66 )
          {
            v35 = v32 == 114;
            if ( v32 != 114 )
              v35 = v32 == 116;
            if ( !v35 )
              goto LABEL_153;
          }
        }
      }
      v29 = sub_7A074((int)v3, a2);
LABEL_67:
      switch ( v29 )
      {
        case 0x22u:
          goto LABEL_106;
        case 0xFFFFFFFE:
          goto LABEL_89;
        case 0xFFFFFFFF:
          goto LABEL_105;
      }
    }
    while ( v29 > 0x1F );
    v30 = v29;
  }
  sub_7A03C(v3, v30, v31);
  if ( v30 == 10 )
    sub_79D74(a2, v3, 8, "unexpected newline");
  else
    sub_79D74(a2, v3, 8, "control character 0x%x", v30);
LABEL_89:
  sub_7ACD8(v3[16]);
  v8 = v3[15];
  v3[16] = 0;
  v3[17] = 0;
  return v8;
}
