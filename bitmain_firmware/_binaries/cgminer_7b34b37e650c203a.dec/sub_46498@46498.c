unsigned int __fastcall sub_46498(_DWORD *a1, int a2)
{
  _DWORD *v2; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r3
  int v8; // r4
  bool v9; // zf
  _BOOL4 v10; // r2
  bool v11; // cc
  int v12; // r0
  const char *v13; // r4
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r4
  int v18; // r0
  bool v19; // zf
  int v20; // r0
  bool v21; // zf
  const char *v22; // r4
  int *v23; // r7
  __int64 v24; // r0
  char *v25; // r3
  int v26; // r1
  int v27; // r3
  int v28; // r2
  __int64 v29; // r2
  int v30; // r8
  unsigned int v31; // r3
  unsigned int v32; // r4
  bool v33; // cc
  int v34; // r1
  _BYTE *v35; // r8
  unsigned __int8 *i; // r4
  int v37; // r3
  unsigned int v38; // r3
  int v39; // r0
  int v40; // r11
  int v41; // r0
  int v42; // r1
  int v43; // r0
  int v44; // r2
  const char *v45; // r3
  const char *v46; // r3
  char arg[4]; // [sp+0h] [bp-1Ch]
  int v48; // [sp+Ch] [bp-10h]
  __int64 endptr; // [sp+10h] [bp-Ch] BYREF

  v2 = a1 + 10;
  sub_47880(a1 + 10);
  if ( a1[15] == 256 )
  {
    sub_47764(a1[16]);
    a1[16] = 0;
    a1[17] = 0;
  }
  do
  {
    v5 = a1[5];
    if ( !v5 )
      v5 = sub_46284((int)a1, a2);
    v6 = v5 > 0x20;
    if ( v5 != 32 )
      v6 = v5 - 9 > 1;
    v7 = !v6;
  }
  while ( !v6 || v5 == 13 );
  if ( v5 == -1 )
  {
    a1[15] = v7;
    return v7;
  }
  if ( v5 == -2 )
    goto LABEL_35;
  sub_4797C(v2, (unsigned __int8)v5);
  if ( (((v5 & 0xFFFFFFDF) - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_38;
  v9 = v5 == 44;
  if ( v5 != 44 )
    v9 = v5 == 58;
  v10 = v9;
  if ( v9 )
    goto LABEL_38;
  if ( v5 != 34 )
  {
    v11 = v5 > 0x2D;
    if ( v5 != 45 )
      v11 = v5 - 48 > 9;
    if ( !v11 )
    {
      a1[15] = -1;
      if ( v5 == 45 )
      {
        v43 = sub_4640C((int)a1, a2);
        v42 = v43;
        if ( v43 != 48 )
        {
          if ( (unsigned int)(v43 - 48) > 9 )
            goto LABEL_118;
          goto LABEL_58;
        }
      }
      else if ( v5 != 48 )
      {
        do
LABEL_58:
          v20 = sub_4640C((int)a1, a2);
        while ( (unsigned int)(v20 - 48) <= 9 );
        goto LABEL_59;
      }
      v20 = sub_4640C((int)a1, a2);
      if ( (unsigned int)(v20 - 48) <= 9 )
      {
LABEL_117:
        v42 = v20;
LABEL_118:
        sub_4644C(a1, v42);
        return a1[15];
      }
LABEL_59:
      if ( (a1[13] & 8) != 0 )
        goto LABEL_70;
      v21 = v20 == 46;
      if ( v20 != 46 )
        v21 = v20 == 69;
      if ( v21 )
      {
LABEL_70:
        if ( v20 == 46 )
        {
          v34 = a1[5];
          if ( !v34 )
            v34 = sub_46284((int)a1, a2);
          if ( (unsigned int)(v34 - 48) > 9 )
          {
            sub_461C8(a1, v34);
            return a1[15];
          }
          sub_4797C(v2, (unsigned __int8)v34);
          do
            v20 = sub_4640C((int)a1, a2);
          while ( (unsigned int)(v20 - 48) <= 9 );
        }
        if ( (v20 & 0xFFFFFFDF) != 0x45 )
          goto LABEL_72;
      }
      else if ( v20 != 101 )
      {
        sub_4644C(a1, v20);
        v22 = (const char *)sub_47894(v2);
        v23 = _errno_location();
        *v23 = 0;
        v24 = strtoll(v22, (char **)&endptr, 10);
        if ( *v23 == 34 )
        {
          if ( v24 >= 0 )
            LOWORD(v46) = 26404;
          else
            LOWORD(v46) = 26376;
          HIWORD(v46) = 5;
          sub_45F98(a2, a1, 15, v46);
          return a1[15];
        }
        else
        {
          if ( (const char *)endptr != &v22[a1[11]] )
            _assert_fail("end == saved_text + lex->saved_text.length", "load.c", 0x21Du, "lex_scan_number");
          v8 = 257;
          *((_QWORD *)a1 + 8) = v24;
          a1[15] = 257;
        }
        return v8;
      }
      v20 = sub_4640C((int)a1, a2);
      if ( ((v20 - 43) & 0xFFFFFFFD) == 0 )
        v20 = sub_4640C((int)a1, a2);
      if ( (unsigned int)(v20 - 48) <= 9 )
      {
        do
          v20 = sub_4640C((int)a1, a2);
        while ( (unsigned int)(v20 - 48) <= 9 );
LABEL_72:
        sub_4644C(a1, v20);
        if ( sub_479C8(v2, &endptr) )
        {
          sub_45F98(a2, a1, 15, "real number overflow");
          return a1[15];
        }
        else
        {
          v29 = endptr;
          v8 = 258;
          a1[15] = 258;
          *((_QWORD *)a1 + 8) = v29;
        }
        return v8;
      }
      goto LABEL_117;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 <= 0x19 )
    {
      do
        v12 = sub_4640C((int)a1, a2);
      while ( (v12 & 0xFFFFFFDF) - 65 <= 0x19 );
      sub_4644C(a1, v12);
      v13 = (const char *)sub_47894(v2);
      if ( !strcmp(v13, "true") )
      {
        v8 = 259;
        a1[15] = 259;
        return v8;
      }
      if ( strcmp(v13, "false") )
      {
        if ( !strcmp(v13, "null") )
        {
          v8 = 261;
          a1[15] = 261;
          return v8;
        }
        goto LABEL_35;
      }
      v5 = 260;
LABEL_38:
      a1[15] = v5;
      return v5;
    }
    v25 = (char *)a1 + a1[4];
    v26 = (unsigned __int8)v25[8];
    if ( v25[8] )
    {
      do
      {
        sub_4797C(v2, v26);
        v27 = a1[4] + 1;
        v28 = a1[9] + 1;
        a1[4] = v27;
        a1[9] = v28;
        v26 = *((unsigned __int8 *)a1 + v27 + 8);
      }
      while ( *((_BYTE *)a1 + v27 + 8) );
    }
LABEL_35:
    v8 = -1;
    a1[15] = -1;
    return v8;
  }
  a1[16] = v10;
  a1[15] = -1;
LABEL_40:
  v15 = a2;
  v16 = (int)a1;
  while ( 1 )
  {
    v17 = sub_4640C(v16, v15);
LABEL_42:
    if ( v17 == 34 )
    {
      v35 = (_BYTE *)sub_4774C(a1[11] + 1);
      if ( !v35 )
        goto LABEL_55;
      a1[16] = v35;
      for ( i = (unsigned __int8 *)(sub_47894(v2) + 1); ; i += 2 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v37 = *i;
            if ( v37 == 34 )
            {
              *v35 = 0;
              v8 = 256;
              v44 = a1[16];
              a1[15] = 256;
              a1[17] = &v35[-v44];
              return v8;
            }
            if ( v37 == 92 )
              break;
            *v35 = v37;
            ++i;
            ++v35;
          }
          v38 = i[1];
          if ( v38 != 117 )
            break;
          v39 = sub_46134(i + 1);
          v40 = v39;
          if ( v39 < 0 )
          {
            LOWORD(v45) = (unsigned __int16)"invalid Unicode escape '%.6s'";
            *(_DWORD *)arg = i;
LABEL_138:
            HIWORD(v45) = (unsigned int)"invalid Unicode escape '%.6s'" >> 16;
            sub_45F98(a2, a1, 8, v45, *(_DWORD *)arg);
            goto LABEL_55;
          }
          v48 = v39 - 55296;
          if ( (unsigned int)(v39 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v39 - 56320) < 0x400 )
              goto LABEL_142;
            i += 6;
          }
          else
          {
            if ( i[6] != 92 || i[7] != 117 )
            {
LABEL_142:
              sub_45F98(a2, a1, 8, "invalid Unicode '\\u%04X'", v39);
              goto LABEL_55;
            }
            v41 = sub_46134(i + 7);
            if ( v41 < 0 )
            {
              LOWORD(v45) = 26284;
              *(_DWORD *)arg = i + 6;
              goto LABEL_138;
            }
            i += 12;
            if ( (unsigned int)(v41 - 56320) >= 0x400 )
            {
              sub_45F98(a2, a1, 8, "invalid Unicode '\\u%04X\\u%04X'", v40, v41);
              goto LABEL_55;
            }
            v40 = v41 - 56320 + (v48 << 10) + 0x10000;
          }
          if ( sub_47BF8(v40, v35, &endptr) )
            _assert_fail((const char *)&word_55AAC, "load.c", 0x1C4u, "lex_scan_string");
          v35 += endptr;
        }
        if ( v38 == 98 )
        {
          *v35 = 8;
        }
        else
        {
          if ( v38 <= 0x62 )
          {
            if ( v38 != 47 && v38 != 92 && v38 != 34 )
LABEL_130:
              _assert_fail((const char *)&word_55AAC, "load.c", 0x1D0u, "lex_scan_string");
            goto LABEL_125;
          }
          if ( v38 == 110 )
          {
            *v35 = 10;
          }
          else
          {
            if ( v38 <= 0x6E )
            {
              if ( v38 != 102 )
                goto LABEL_130;
              LOBYTE(v38) = 12;
LABEL_125:
              *v35 = v38;
              goto LABEL_106;
            }
            if ( v38 == 114 )
            {
              *v35 = 13;
            }
            else
            {
              if ( v38 != 116 )
                goto LABEL_130;
              *v35 = 9;
            }
          }
        }
LABEL_106:
        ++v35;
      }
    }
    if ( v17 == -2 )
      goto LABEL_55;
    if ( v17 == -1 )
    {
      sub_45F98(a2, a1, 6, "premature end of input");
      goto LABEL_55;
    }
    if ( v17 <= 0x1F )
      break;
    v15 = a2;
    v16 = (int)a1;
    if ( v17 == 92 )
    {
      v18 = sub_4640C((int)a1, a2);
      if ( v18 == 117 )
      {
        v30 = 4;
        v17 = sub_4640C((int)a1, a2);
        while ( 1 )
        {
          v31 = v17 & 0xFFFFFFDF;
          v32 = v17 - 48;
          v31 -= 65;
          v33 = v31 > 5;
          if ( v31 > 5 )
            v33 = v32 > 9;
          if ( v33 )
            break;
          --v30;
          v17 = sub_4640C((int)a1, a2);
          if ( !v30 )
            goto LABEL_42;
        }
LABEL_54:
        sub_45F98(a2, a1, 8, "invalid escape");
        goto LABEL_55;
      }
      v19 = v18 == 92;
      if ( v18 != 92 )
        v19 = (v18 & 0xFFFFFFBF) == 34;
      if ( !v19 && v18 != 47 && (v18 & 0xFFFFFFF7) != 0x66 && ((v18 - 114) & 0xFFFFFFFD) != 0 )
        goto LABEL_54;
      goto LABEL_40;
    }
  }
  sub_4644C(a1, v17);
  if ( v17 == 10 )
    sub_45F98(a2, a1, 8, "unexpected newline");
  else
    sub_45F98(a2, a1, 8, "control character 0x%x", v17);
LABEL_55:
  sub_47764(a1[16]);
  v8 = a1[15];
  a1[16] = 0;
  a1[17] = 0;
  return v8;
}
