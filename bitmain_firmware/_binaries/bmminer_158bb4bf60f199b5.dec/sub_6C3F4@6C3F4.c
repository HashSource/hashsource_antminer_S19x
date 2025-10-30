unsigned int __fastcall sub_6C3F4(_DWORD *a1, int a2)
{
  _DWORD *v2; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r3
  int v8; // r4
  bool v9; // zf
  _BOOL4 v10; // r2
  bool v11; // cc
  char *v12; // r3
  int v13; // r1
  int v14; // r3
  int v15; // r2
  int v17; // r0
  const char *v18; // r4
  int v19; // r0
  bool v20; // zf
  int v21; // r1
  __int64 v22; // r2
  int v23; // r1
  int v24; // r0
  unsigned int v25; // r4
  int v26; // r0
  bool v27; // zf
  unsigned int v28; // r3
  const char *v29; // r4
  int *v30; // r7
  __int64 v31; // r0
  int v32; // r1
  int v33; // r0
  const char *v34; // r2
  _BYTE *v35; // r4
  unsigned __int8 *i; // r7
  int v37; // r3
  unsigned int v38; // r3
  int v39; // r8
  unsigned int v40; // r3
  unsigned int v41; // r4
  bool v42; // cc
  int v43; // r0
  unsigned __int8 *v44; // r11
  int v45; // r3
  int v46; // r0
  const char *v47; // r2
  int v48; // [sp+8h] [bp-1Ch]
  int v49; // [sp+Ch] [bp-18h]
  char src[4]; // [sp+14h] [bp-10h] BYREF
  __int64 endptr; // [sp+18h] [bp-Ch] BYREF

  v2 = a1 + 10;
  sub_6D5E0(a1 + 10);
  if ( a1[13] == 256 )
  {
    sub_6D518(a1[14]);
    a1[14] = 0;
  }
  do
  {
    v5 = a1[5];
    if ( !v5 )
      v5 = sub_6C1F0((int)a1, a2);
    v6 = v5 > 0x20;
    if ( v5 != 32 )
      v6 = v5 - 9 > 1;
    v7 = !v6;
  }
  while ( !v6 || v5 == 13 );
  if ( v5 == -1 )
  {
    a1[13] = v7;
    return v7;
  }
  if ( v5 == -2 )
    goto LABEL_31;
  sub_6D704(v2, (unsigned __int8)v5);
  if ( (((v5 & 0xFFFFFFDF) - 91) & 0xFFFFFFFD) == 0 )
    goto LABEL_34;
  v9 = v5 == 44;
  if ( v5 != 44 )
    v9 = v5 == 58;
  v10 = v9;
  if ( v9 )
    goto LABEL_34;
  if ( v5 != 34 )
  {
    v11 = v5 > 0x2D;
    if ( v5 != 45 )
      v11 = v5 - 48 > 9;
    if ( !v11 )
    {
      a1[13] = -1;
      if ( v5 == 45 )
      {
        v33 = sub_6C368((int)a1, a2);
        v32 = v33;
        if ( v33 != 48 )
        {
          if ( (unsigned int)(v33 - 48) > 9 )
            goto LABEL_86;
          goto LABEL_44;
        }
      }
      else if ( v5 != 48 )
      {
        do
LABEL_44:
          v19 = sub_6C368((int)a1, a2);
        while ( (unsigned int)(v19 - 48) <= 9 );
        goto LABEL_45;
      }
      v19 = sub_6C368((int)a1, a2);
      if ( (unsigned int)(v19 - 48) <= 9 )
      {
LABEL_85:
        v32 = v19;
LABEL_86:
        sub_6C3A8(a1, v32);
        return a1[13];
      }
LABEL_45:
      v20 = v19 == 46;
      if ( v19 != 46 )
        v20 = v19 == 69;
      if ( v20 )
      {
        if ( v19 == 46 )
        {
          v21 = a1[5];
          if ( !v21 )
            v21 = sub_6C1F0((int)a1, a2);
          if ( (unsigned int)(v21 - 48) > 9 )
          {
            sub_6C134(a1, v21);
            return a1[13];
          }
          sub_6D704(v2, (unsigned __int8)v21);
          do
            v19 = sub_6C368((int)a1, a2);
          while ( (unsigned int)(v19 - 48) <= 9 );
        }
        if ( (v19 & 0xFFFFFFDF) != 0x45 )
          goto LABEL_56;
      }
      else if ( v19 != 101 )
      {
        sub_6C3A8(a1, v19);
        v29 = (const char *)sub_6D5F4(v2);
        v30 = _errno_location();
        *v30 = 0;
        v31 = strtoll(v29, (char **)&endptr, 10);
        if ( *v30 == 34 )
        {
          if ( v31 >= 0 )
            LOWORD(v47) = -21576;
          else
            LOWORD(v47) = -21604;
          HIWORD(v47) = 8;
          sub_6BF34(a2, a1, v47, HIDWORD(v31));
          return a1[13];
        }
        else
        {
          if ( (const char *)endptr != &v29[a1[11]] )
            _assert_fail(
              "end == saved_text + lex->saved_text.length",
              "3rdparty/jansson-2.6/src/load.c",
              0x206u,
              "lex_scan_number");
          v8 = 257;
          *((_QWORD *)a1 + 7) = v31;
          a1[13] = 257;
        }
        return v8;
      }
      v19 = sub_6C368((int)a1, a2);
      if ( ((v19 - 43) & 0xFFFFFFFD) == 0 )
        v19 = sub_6C368((int)a1, a2);
      if ( (unsigned int)(v19 - 48) <= 9 )
      {
        do
          v19 = sub_6C368((int)a1, a2);
        while ( (unsigned int)(v19 - 48) <= 9 );
LABEL_56:
        sub_6C3A8(a1, v19);
        if ( sub_6D750(v2, &endptr) )
        {
          sub_6BF34(a2, a1, "real number overflow");
          return a1[13];
        }
        else
        {
          v22 = endptr;
          v8 = 258;
          a1[13] = 258;
          *((_QWORD *)a1 + 7) = v22;
        }
        return v8;
      }
      goto LABEL_85;
    }
    if ( (v5 & 0xFFFFFFDF) - 65 > 0x19 )
    {
      v12 = (char *)a1 + a1[4];
      v13 = (unsigned __int8)v12[8];
      if ( v12[8] )
      {
        do
        {
          sub_6D704(v2, v13);
          v14 = a1[4] + 1;
          v15 = a1[9] + 1;
          a1[4] = v14;
          a1[9] = v15;
          v13 = *((unsigned __int8 *)a1 + v14 + 8);
        }
        while ( *((_BYTE *)a1 + v14 + 8) );
      }
      goto LABEL_31;
    }
    do
      v17 = sub_6C368((int)a1, a2);
    while ( (v17 & 0xFFFFFFDF) - 65 <= 0x19 );
    sub_6C3A8(a1, v17);
    v18 = (const char *)sub_6D5F4(v2);
    if ( !strcmp(v18, "true") )
    {
      v8 = 259;
      a1[13] = 259;
      return v8;
    }
    if ( strcmp(v18, "false") )
    {
      if ( !strcmp(v18, "null") )
      {
        v8 = 261;
        a1[13] = 261;
        return v8;
      }
LABEL_31:
      v8 = -1;
      a1[13] = -1;
      return v8;
    }
    v5 = 260;
LABEL_34:
    a1[13] = v5;
    return v5;
  }
  a1[14] = v10;
  a1[13] = -1;
LABEL_59:
  v23 = a2;
  v24 = (int)a1;
  while ( 1 )
  {
    v25 = sub_6C368(v24, v23);
LABEL_61:
    if ( v25 == 34 )
    {
      v35 = (_BYTE *)sub_6D500(a1[11] + 1);
      a1[14] = v35;
      if ( !v35 )
        goto LABEL_74;
      for ( i = (unsigned __int8 *)(sub_6D5F4(v2) + 1); ; i += 2 )
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
              a1[13] = 256;
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
          v43 = sub_6C088(i + 1);
          v44 = i + 6;
          v45 = v43;
          v49 = v43 - 55296;
          if ( (unsigned int)(v43 - 55296) >= 0x400 )
          {
            if ( (unsigned int)(v43 - 56320) < 0x400 )
              goto LABEL_145;
            if ( !v43 )
            {
              sub_6BF34(a2, a1, "\\u0000 is not allowed", 0);
              goto LABEL_74;
            }
          }
          else
          {
            if ( i[6] != 92 || i[7] != 117 )
            {
LABEL_145:
              sub_6BF34(a2, a1, "invalid Unicode '\\u%04X'", v43);
              goto LABEL_74;
            }
            v48 = v43;
            v46 = sub_6C088(i + 7);
            v44 = i + 12;
            if ( (unsigned int)(v46 - 56320) >= 0x400 )
            {
              sub_6BF34(a2, a1, "invalid Unicode '\\u%04X\\u%04X'", v48, v46);
              goto LABEL_74;
            }
            v45 = v46 - 56320 + (v49 << 10) + 0x10000;
          }
          if ( sub_6D94C(v45, src, &endptr) )
            _assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 0x1AEu, "lex_scan_string");
          i = v44;
          memcpy(v35, src, endptr);
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
LABEL_123:
              _assert_fail("0", "3rdparty/jansson-2.6/src/load.c", 0x1BCu, "lex_scan_string");
            goto LABEL_118;
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
                goto LABEL_123;
              LOBYTE(v38) = 12;
LABEL_118:
              *v35 = v38;
              goto LABEL_108;
            }
            if ( v38 == 114 )
            {
              *v35 = 13;
            }
            else
            {
              if ( v38 != 116 )
                goto LABEL_123;
              *v35 = 9;
            }
          }
        }
LABEL_108:
        ++v35;
      }
    }
    if ( v25 == -2 )
      goto LABEL_74;
    if ( v25 == -1 )
    {
      sub_6BF34(a2, a1, "premature end of input");
      goto LABEL_74;
    }
    if ( v25 <= 0x1F )
      break;
    v23 = a2;
    v24 = (int)a1;
    if ( v25 == 92 )
    {
      v26 = sub_6C368((int)a1, a2);
      if ( v26 == 117 )
      {
        v39 = 4;
        v25 = sub_6C368((int)a1, a2);
        while ( 1 )
        {
          v40 = v25 & 0xFFFFFFDF;
          v41 = v25 - 48;
          v28 = v40 - 65;
          v42 = v28 > 5;
          if ( v28 > 5 )
            v42 = v41 > 9;
          if ( v42 )
            break;
          --v39;
          v25 = sub_6C368((int)a1, a2);
          if ( !v39 )
            goto LABEL_61;
        }
LABEL_73:
        sub_6BF34(a2, a1, "invalid escape", v28);
        goto LABEL_74;
      }
      v27 = v26 == 92;
      if ( v26 != 92 )
        v27 = (v26 & 0xFFFFFFBF) == 34;
      if ( !v27 && v26 != 47 && (v26 & 0xFFFFFFF7) != 0x66 )
      {
        v28 = (v26 - 114) & 0xFFFFFFFD;
        if ( v28 )
          goto LABEL_73;
      }
      goto LABEL_59;
    }
  }
  sub_6C3A8(a1, v25);
  if ( v25 == 10 )
    LOWORD(v34) = -21748;
  else
    LOWORD(v34) = -21728;
  HIWORD(v34) = 8;
  sub_6BF34(a2, a1, v34, v25);
LABEL_74:
  sub_6D518(a1[14]);
  return a1[13];
}
