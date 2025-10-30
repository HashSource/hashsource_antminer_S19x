unsigned int __fastcall sub_12BFC(_DWORD *a1, int a2)
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
  bool v12; // cc
  int v13; // r0
  const char *v14; // r5
  char *v16; // r3
  int v17; // r1
  int v18; // r3
  int v19; // r2
  int v20; // r0
  bool v21; // zf
  const char *v22; // r6
  int *v23; // r7
  __int64 v24; // r2
  double v25; // d7
  unsigned int v26; // r0
  int v27; // r6
  int v28; // r0
  bool v29; // zf
  bool v30; // zf
  bool v31; // zf
  bool v32; // zf
  int v33; // r6
  bool v34; // cc
  int v35; // r0
  _BYTE *v36; // r6
  const char *v37; // r9
  _DWORD *v38; // r12
  int v39; // r3
  unsigned int v40; // r3
  int v41; // r0
  int v42; // r8
  _DWORD *v43; // r12
  unsigned __int8 *v44; // r4
  int v45; // r0
  int v46; // r0
  int v47; // r1
  int v48; // r2
  _DWORD *v49; // [sp+8h] [bp-1Ch]
  _DWORD *v50; // [sp+8h] [bp-1Ch]
  int v51; // [sp+Ch] [bp-18h]
  int v52; // [sp+10h] [bp-14h] BYREF
  char *endptr; // [sp+14h] [bp-10h] BYREF
  double v54; // [sp+18h] [bp-Ch] BYREF

  v2 = a1 + 10;
  v3 = a1;
  sub_138F0(a1 + 10);
  if ( v3[15] == 256 )
  {
    sub_1383C(v3[16]);
    v3[16] = 0;
    v3[17] = 0;
  }
  while ( 1 )
  {
    v5 = v3[5];
    if ( !v5 )
      v5 = sub_12AB8((int)v3, a2);
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
  sub_1398C(v2, (unsigned __int8)v5);
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
    v12 = v8 > 0x2D;
    if ( v8 != 45 )
      v12 = v8 - 48 > 9;
    if ( !v12 )
    {
      v3[15] = -1;
      if ( v8 == 45 )
        v8 = sub_12BD8((int)v3, a2);
      if ( v8 == 48 )
      {
        v20 = sub_12BD8((int)v3, a2);
        if ( (unsigned int)(v20 - 48) <= 9 )
          goto LABEL_120;
      }
      else
      {
        if ( v8 - 48 > 9 )
        {
          sub_12BA0(v3, v8);
          return v3[15];
        }
        do
          v20 = sub_12BD8((int)v3, a2);
        while ( (unsigned int)(v20 - 48) <= 9 );
      }
      if ( (v3[13] & 8) != 0 )
        goto LABEL_57;
      v21 = v20 == 69;
      if ( v20 != 69 )
        v21 = v20 == 46;
      if ( v21 )
      {
LABEL_57:
        if ( v20 == 46 )
        {
          v47 = v3[5];
          if ( !v47 )
            v47 = sub_12AB8((int)v3, a2);
          if ( (unsigned int)(v47 - 48) > 9 )
          {
            sub_12A4C(v3, v47);
            return v3[15];
          }
          sub_1398C(v2, (unsigned __int8)v47);
          do
            v20 = sub_12BD8((int)v3, a2);
          while ( (unsigned int)(v20 - 48) <= 9 );
        }
        if ( (v20 & 0xFFFFFFDF) != 0x45 )
          goto LABEL_59;
      }
      else if ( v20 != 101 )
      {
        sub_12BA0(v3, v20);
        v22 = (const char *)sub_138FC(v2);
        v23 = _errno_location();
        *v23 = 0;
        v24 = strtoll(v22, &endptr, 10);
        if ( *v23 == 34 )
        {
          if ( v24 >= 0 )
            sub_128D8(a2, v3, 15, "too big integer");
          else
            sub_128D8(a2, v3, 15, "too big negative integer");
          return v3[15];
        }
        else
        {
          if ( endptr != &v22[v3[11]] )
            _assert_fail("end == saved_text + lex->saved_text.length", "load.c", 0x202u, "lex_scan_number");
          v8 = 257;
          *((_QWORD *)v3 + 8) = v24;
          v3[15] = 257;
        }
        return v8;
      }
      v20 = sub_12BD8((int)v3, a2);
      v32 = v20 == 43;
      if ( v20 != 43 )
        v32 = v20 == 45;
      if ( v32 )
        v20 = sub_12BD8((int)v3, a2);
      if ( (unsigned int)(v20 - 48) <= 9 )
      {
        do
          v20 = sub_12BD8((int)v3, a2);
        while ( (unsigned int)(v20 - 48) <= 9 );
LABEL_59:
        sub_12BA0(v3, v20);
        if ( sub_139C0(v2, &v54) )
        {
          sub_128D8(a2, v3, 15, "real number overflow");
          return v3[15];
        }
        else
        {
          v25 = v54;
          v8 = 258;
          v3[15] = 258;
          *((double *)v3 + 8) = v25;
        }
        return v8;
      }
LABEL_120:
      sub_12BA0(v3, v20);
      return v3[15];
    }
    if ( (v8 & 0xFFFFFFDF) - 65 > 0x19 )
    {
      v16 = (char *)v3 + v3[4];
      v17 = (unsigned __int8)v16[8];
      if ( v16[8] )
      {
        do
        {
          sub_1398C(v2, v17);
          v18 = v3[4] + 1;
          v19 = v3[9] + 1;
          v17 = *((unsigned __int8 *)v3 + v18 + 8);
          v3[4] = v18;
          v3[9] = v19;
        }
        while ( v17 );
      }
    }
    else
    {
      do
        v13 = sub_12BD8((int)v3, a2);
      while ( (v13 & 0xFFFFFFDF) - 65 <= 0x19 );
      sub_12BA0(v3, v13);
      v14 = (const char *)sub_138FC(v2);
      if ( !strcmp(v14, "true") )
      {
        v8 = 259;
        v3[15] = 259;
        return v8;
      }
      if ( !strcmp(v14, "false") )
      {
        v8 = 260;
        v3[15] = 260;
        return v8;
      }
      if ( !strcmp(v14, "null") )
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
  v26 = sub_12BD8((int)v3, a2);
  v27 = v26;
  switch ( v26 )
  {
    case 0x22u:
LABEL_106:
      v35 = sub_13828(v3[11] + 1);
      v36 = (_BYTE *)v35;
      if ( !v35 )
        goto LABEL_89;
      v3[16] = v35;
      v37 = (const char *)(sub_138FC(v2) + 1);
      v38 = v3;
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v39 = *(unsigned __int8 *)v37;
            if ( v39 == 34 )
            {
              *v36 = 0;
              v48 = v38[16];
              v8 = 256;
              v38[15] = 256;
              v38[17] = &v36[-v48];
              return v8;
            }
            if ( v39 == 92 )
              break;
            ++v37;
            *v36++ = v39;
          }
          v40 = *((unsigned __int8 *)v37 + 1);
          if ( v40 != 117 )
            break;
          v49 = v38;
          v41 = sub_129E8((_BYTE *)v37 + 1);
          v42 = v41;
          v43 = v49;
          if ( v41 < 0 )
          {
            v3 = v49;
            sub_128D8(a2, v49, 8, "invalid Unicode escape '%.6s'", v37);
            goto LABEL_89;
          }
          v44 = (unsigned __int8 *)(v37 + 6);
          if ( (unsigned int)(v41 - 55296) > 0x3FF )
          {
            if ( (unsigned int)(v41 - 56320) <= 0x3FF )
              goto LABEL_158;
          }
          else
          {
            if ( v37[6] != 92 || v37[7] != 117 )
            {
LABEL_158:
              v3 = v49;
              sub_128D8(a2, v49, 8, "invalid Unicode '\\u%04X'", v41);
              goto LABEL_89;
            }
            v51 = v41 - 55296;
            v45 = sub_129E8((_BYTE *)v37 + 7);
            v43 = v49;
            if ( v45 < 0 )
            {
              v3 = v49;
              sub_128D8(a2, v49, 8, "invalid Unicode escape '%.6s'", v37 + 6);
              goto LABEL_89;
            }
            v44 = (unsigned __int8 *)(v37 + 12);
            if ( (unsigned int)(v45 - 56320) > 0x3FF )
            {
              v3 = v49;
              sub_128D8(a2, v49, 8, "invalid Unicode '\\u%04X\\u%04X'", v42, v45);
              goto LABEL_89;
            }
            v42 = v45 - 56320 + (v51 << 10) + 0x10000;
          }
          v50 = v43;
          v46 = sub_13B18(v42, v36, &v52);
          v38 = v50;
          if ( v46 )
            _assert_fail("0", "load.c", 0x1A1u, "lex_scan_string");
          v37 = (const char *)v44;
          v36 += v52;
        }
        if ( v40 == 102 )
        {
          *v36 = 12;
        }
        else if ( v40 > 0x66 )
        {
          switch ( v40 )
          {
            case 'r':
              *v36 = 13;
              break;
            case 't':
              *v36 = 9;
              break;
            case 'n':
              LOBYTE(v40) = 10;
LABEL_125:
              *v36 = v40;
              break;
            default:
              goto LABEL_118;
          }
        }
        else
        {
          if ( v40 == 92 )
            goto LABEL_125;
          if ( v40 <= 0x5C )
          {
            if ( v40 != 34 && v40 != 47 )
LABEL_118:
              _assert_fail("0", "load.c", 0x1BAu, "lex_scan_string");
            goto LABEL_125;
          }
          if ( v40 != 98 )
            goto LABEL_118;
          *v36 = 8;
        }
        ++v36;
        v37 += 2;
      }
    case 0xFFFFFFFE:
      goto LABEL_89;
    case 0xFFFFFFFF:
LABEL_105:
      sub_128D8(a2, v3, 6, "premature end of input");
      goto LABEL_89;
  }
  if ( v26 > 0x1F )
  {
    do
    {
      if ( v26 == 92 )
      {
        v28 = sub_12BD8((int)v3, a2);
        if ( v28 == 117 )
        {
          v33 = 4;
          v26 = sub_12BD8((int)v3, a2);
          while ( 1 )
          {
            v34 = v26 - 65 > 5;
            if ( v26 - 65 > 5 )
              v34 = v26 - 48 > 9;
            if ( v34 && v26 - 97 > 5 )
              break;
            v26 = sub_12BD8((int)v3, a2);
            if ( !--v33 )
              goto LABEL_67;
          }
LABEL_153:
          sub_128D8(a2, v3, 8, "invalid escape");
          goto LABEL_89;
        }
        v29 = v28 == 34;
        if ( v28 != 34 )
          v29 = v28 == 92;
        if ( !v29 )
        {
          v30 = v28 == 47;
          if ( v28 != 47 )
            v30 = v28 == 98;
          if ( !v30 && (v28 & 0xFFFFFFF7) != 0x66 )
          {
            v31 = v28 == 114;
            if ( v28 != 114 )
              v31 = v28 == 116;
            if ( !v31 )
              goto LABEL_153;
          }
        }
      }
      v26 = sub_12BD8((int)v3, a2);
LABEL_67:
      switch ( v26 )
      {
        case 0x22u:
          goto LABEL_106;
        case 0xFFFFFFFE:
          goto LABEL_89;
        case 0xFFFFFFFF:
          goto LABEL_105;
      }
    }
    while ( v26 > 0x1F );
    v27 = v26;
  }
  sub_12BA0(v3, v27);
  if ( v27 == 10 )
    sub_128D8(a2, v3, 8, "unexpected newline");
  else
    sub_128D8(a2, v3, 8, "control character 0x%x", v27);
LABEL_89:
  sub_1383C(v3[16]);
  v8 = v3[15];
  v3[16] = 0;
  v3[17] = 0;
  return v8;
}
