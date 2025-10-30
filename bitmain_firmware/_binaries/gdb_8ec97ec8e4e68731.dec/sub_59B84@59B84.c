void __fastcall sub_59B84(char *s, int a2, int a3)
{
  unsigned int v4; // r2
  char *v5; // r4
  size_t v7; // r0
  char *v8; // r1
  int v9; // r3
  bool v10; // zf
  char *v11; // r3
  int v12; // r2
  int v13; // t1
  bool v14; // zf
  void *v15; // r4
  void *v16; // r7
  const char **v17; // r3
  char *v18; // r4
  __int64 v19; // r8
  _DWORD *v20; // r1
  void (__fastcall *v21)(int, _DWORD, int); // r4
  int v22; // r3
  char v23; // cc
  int v24; // r4
  const char **v25; // r9
  char *v26; // r0
  size_t v27; // r10
  const char *v28; // r7
  const char *v29; // r11
  const char **v30; // r8
  int v31; // r9
  const char *v32; // t1
  const char **v33; // r3
  int v34; // r2
  int v35; // r3
  _DWORD *v37; // r12
  bool v38; // zf
  int v39; // r2
  int v40; // r3
  const char *v42; // r0
  int v43; // r0
  int *v44; // r3
  size_t v45; // r0
  _BYTE *v46; // r9
  _BYTE *v47; // r8
  _BYTE *v48; // r7
  int v49; // r3
  signed int v50; // r7
  char *v51; // r8
  int v52; // t1
  int v53; // r0
  int v54; // r0
  _BOOL4 v55; // r3
  signed int *v56; // r3
  const char **v57; // r7
  char *v58; // r8
  int v59; // r0
  int v60; // r0
  int v61; // r5
  int v62; // r7
  size_t v63; // r0
  char *v64; // r4
  char *v65; // r0
  int v66; // r3
  char *v67; // r7
  char *v68; // r1
  int v69; // r2
  int v70; // r0
  char *v71; // r3
  char *v72; // r5
  char *i; // r8
  int v74; // t1
  size_t v75; // r0
  size_t v76; // r0
  int v77; // r2
  bool v78; // cc
  int v79; // r2
  int v80; // r3
  char *v81; // r1
  __int64 v82; // r0
  const char *v83; // r10
  int j; // r5
  size_t v85; // r2
  void *ptr; // [sp+8h] [bp-44h] BYREF
  char *v87; // [sp+Ch] [bp-40h]
  char v88; // [sp+10h] [bp-3Ch] BYREF

  if ( (*(_WORD *)(a3 + 12) & 0x180) != 0x80 )
  {
    sub_94700(
      "cli/cli-setshow.c",
      155,
      "%s: Assertion `%s' failed.",
      "void do_set_command(const char*, int, cmd_list_element*)",
      "c->type == set_cmd");
    JUMPOUT(0x5A6E0);
  }
  v4 = *(unsigned __int8 *)(a3 + 13);
  v5 = s;
  switch ( (v4 >> 1) & 0xF )
  {
    case 0u:
      if ( s && *s )
      {
        v43 = sub_599B0(s);
        if ( v43 < 0 )
          sub_946E0("\"on\" or \"off\" expected.");
      }
      else
      {
        v43 = 1;
      }
      v44 = *(int **)(a3 + 76);
      v21 = *(void (__fastcall **)(int, _DWORD, int))(a3 + 16);
      if ( v43 == *v44 )
        goto LABEL_120;
      *v44 = v43;
      v21(a3, 0, a2);
      goto LABEL_28;
    case 1u:
      if ( !s || !*s )
        goto LABEL_182;
      v50 = strlen(s);
      v51 = &v5[v50];
      while ( 2 )
      {
        v52 = (unsigned __int8)*--v51;
        if ( isspace(v52) )
        {
          if ( v50 )
          {
            --v50;
            continue;
          }
        }
        else
        {
          v53 = strncmp(v5, "on", v50);
          if ( v53
            && (v53 = strncmp(v5, "1", v50)) != 0
            && (v53 = strncmp(v5, "yes", v50)) != 0
            && (v53 = strncmp(v5, "enable", v50)) != 0 )
          {
            if ( !strncmp(v5, "off", v50)
              || !strncmp(v5, "0", v50)
              || !strncmp(v5, "no", v50)
              || !strncmp(v5, "disable", v50) )
            {
              v50 = 1;
            }
            else
            {
              if ( strncmp(v5, "auto", v50) )
              {
                v54 = strncmp(v5, "-1", v50);
                v55 = v50 > 1;
                if ( v54 )
                  v55 = 0;
                if ( !v55 )
LABEL_182:
                  sub_946E0("\"on\", \"off\" or \"auto\" expected.");
              }
              v50 = 2;
            }
          }
          else
          {
            v50 = v53;
          }
        }
        break;
      }
      v56 = *(signed int **)(a3 + 76);
      v21 = *(void (__fastcall **)(int, _DWORD, int))(a3 + 16);
      if ( *v56 == v50 )
        goto LABEL_120;
      *v56 = v50;
      v21(a3, 0, a2);
      goto LABEL_28;
    case 2u:
    case 9u:
      v34 = v4 & 0x1E;
      if ( s )
      {
        if ( v34 == 4 && sub_59964((int)s) )
        {
          if ( (*(_BYTE *)(a3 + 13) & 0x1E) != 4 )
          {
            v82 = 0;
            goto LABEL_55;
          }
          goto LABEL_176;
        }
        v82 = sub_14CC00(v5);
        v35 = *(_BYTE *)(a3 + 13) & 0x1E;
        if ( v35 == 4 )
        {
          if ( !v82 )
          {
LABEL_176:
            v82 = 0xFFFFFFFFLL;
            goto LABEL_55;
          }
          v78 = HIDWORD(v82) != 0;
          if ( !HIDWORD(v82) )
            v78 = (_DWORD)v82 == -1;
          if ( !v78 )
          {
LABEL_55:
            v37 = *(_DWORD **)(a3 + 76);
            v38 = HIDWORD(v82) == 0;
            v21 = *(void (__fastcall **)(int, _DWORD, int))(a3 + 16);
            if ( !HIDWORD(v82) )
              v38 = *v37 == (_DWORD)v82;
            if ( !v38 )
              goto LABEL_58;
            goto LABEL_120;
          }
        }
        else if ( v82 >= 0 && (v35 != 18 || SHIDWORD(v82) < 1) )
        {
          goto LABEL_55;
        }
LABEL_68:
        v42 = (const char *)sub_988AC(v82, HIDWORD(v82));
        sub_946E0("integer %s out of range", v42);
      }
      if ( v34 == 4 )
        goto LABEL_172;
      goto LABEL_170;
    case 3u:
    case 8u:
      v39 = v4 & 0x1E;
      if ( !s )
      {
        if ( v39 != 6 )
LABEL_170:
          sub_51E9C("integer to set it to.");
LABEL_172:
        sub_51E9C("integer to set it to, or \"unlimited\".");
      }
      if ( v39 == 6 && sub_59964((int)s) )
      {
        if ( (*(_BYTE *)(a3 + 13) & 0x1E) != 6 )
        {
          v82 = 0;
          goto LABEL_119;
        }
      }
      else
      {
        v82 = sub_14CC00(v5);
        if ( v82 )
        {
          if ( v82 < (__int64)0xFFFFFFFF80000000LL )
            goto LABEL_68;
          v40 = *(_BYTE *)(a3 + 13) & 0x1E;
          if ( v40 == 6 )
          {
            if ( v82 > 2147483646 )
              goto LABEL_68;
          }
          else if ( v40 == 16 && v82 > 0x7FFFFFFF )
          {
            goto LABEL_68;
          }
LABEL_119:
          v37 = *(_DWORD **)(a3 + 76);
          v21 = *(void (__fastcall **)(int, _DWORD, int))(a3 + 16);
          if ( *v37 != v82 )
          {
LABEL_58:
            *v37 = v82;
            v21(a3, 0, a2);
            goto LABEL_28;
          }
LABEL_120:
          v21(a3, 0, a2);
          return;
        }
        if ( (*(_BYTE *)(a3 + 13) & 0x1E) != 6 )
          goto LABEL_119;
      }
      v82 = 0x7FFFFFFF;
      goto LABEL_119;
    case 4u:
      if ( s )
      {
        v45 = strlen(s) + 2;
      }
      else
      {
        v5 = "";
        v45 = 2;
      }
      v46 = (_BYTE *)sub_93028(v45);
      v47 = v46;
      v48 = v46 + 1;
      while ( 1 )
      {
        ptr = v5 + 1;
        v49 = (unsigned __int8)*v5;
        if ( !*v5 )
          break;
        if ( v49 != 92 )
        {
          *v47 = v49;
          ++v5;
          v47 = v48++;
          continue;
        }
        if ( !v5[1] )
          break;
        v59 = sub_B894C();
        v60 = sub_258D1C(v59, &ptr);
        if ( !v60 )
          break;
        if ( v60 <= 0 )
        {
          v5 = (char *)ptr;
        }
        else
        {
          *v47 = v60;
          v47 = v48;
          v5 = (char *)ptr;
          ++v48;
        }
      }
      *v47 = 0;
      v70 = sub_93050(v46, v48 - v46);
LABEL_123:
      v16 = (void *)v70;
LABEL_16:
      v17 = *(const char ***)(a3 + 76);
      v18 = (char *)*v17;
      if ( !*v17 )
        goto LABEL_19;
      if ( !strcmp(*v17, (const char *)v16) )
      {
        free(v16);
        (*(void (__fastcall **)(int, _DWORD, int))(a3 + 16))(a3, 0, a2);
        return;
      }
      free(v18);
      v17 = *(const char ***)(a3 + 76);
LABEL_19:
      *v17 = (const char *)v16;
      (*(void (__fastcall **)(int, _DWORD, int))(a3 + 16))(a3, 0, a2);
      goto LABEL_28;
    case 5u:
      v57 = *(const char ***)(a3 + 76);
      if ( !s )
        v5 = "";
      v58 = (char *)*v57;
      if ( !*v57 )
        goto LABEL_106;
      if ( !strcmp(*v57, v5) )
      {
        (*(void (__fastcall **)(int, _DWORD, int))(a3 + 16))(a3, 0, a2);
        return;
      }
      free(v58);
      v57 = *(const char ***)(a3 + 76);
LABEL_106:
      *v57 = (const char *)sub_327254(v5);
      (*(void (__fastcall **)(int, _DWORD, int))(a3 + 16))(a3, 0, a2);
      goto LABEL_28;
    case 6u:
      if ( s )
        goto LABEL_4;
      v70 = sub_327254("");
      goto LABEL_123;
    case 7u:
      if ( !s )
        sub_51E9C("filename to set it to.");
LABEL_4:
      v7 = strlen(s) - 1;
      v8 = &v5[v7];
      if ( !__CFADD__(v5, v7) )
      {
        v9 = (unsigned __int8)v5[v7];
        v10 = v9 == 32;
        if ( v9 != 32 )
          v10 = v9 == 9;
        if ( v10 )
        {
          v11 = v8 - 1;
          do
          {
            v8 = v11;
            if ( v5 - 1 == v11 )
              break;
            v13 = (unsigned __int8)*v11--;
            v12 = v13;
            v14 = v13 == 32;
            if ( v13 != 32 )
              v14 = v12 == 9;
          }
          while ( v14 );
        }
      }
      v15 = (void *)sub_3272B4(v5, v8 + 1 - v5);
      v16 = (void *)sub_29B910(v15);
      free(v15);
      goto LABEL_16;
    case 0xAu:
      if ( !s )
        goto LABEL_172;
      if ( sub_59964((int)s) )
      {
        v19 = -1;
      }
      else
      {
        v82 = sub_14CC00(v5);
        v19 = v82;
        if ( v82 >= 0x80000000LL )
          goto LABEL_68;
        if ( HIDWORD(v82) - (((_DWORD)v82 != -1) - 1) < 0 != __OFSUB__(HIDWORD(v82), -1, (_DWORD)v82 == -1) )
          sub_946E0("only -1 is allowed to set as unlimited");
      }
      v20 = *(_DWORD **)(a3 + 76);
      v21 = *(void (__fastcall **)(int, _DWORD, int))(a3 + 16);
      if ( *v20 == v19 )
        goto LABEL_120;
      *v20 = v19;
      v21(a3, 0, a2);
LABEL_28:
      v22 = *(_DWORD *)(a3 + 8);
      v23 = (v22 != -3) & __CFADD__(v22, 3);
      if ( v22 != -3 )
        v23 = (unsigned int)(v22 - 10) > 1;
      if ( v23 )
      {
        v24 = 0;
        v61 = a3;
        v62 = 0;
        do
        {
          ++v62;
          v63 = strlen(*(const char **)(v61 + 4));
          v61 = *(_DWORD *)(v61 + 60);
          v24 += v63 + 1;
        }
        while ( v61 );
        v64 = (char *)sub_93028(v24);
        v65 = (char *)sub_93028(4 * v62);
        v66 = a3;
        v67 = v65;
        v68 = v65 - 4;
        while ( 1 )
        {
          v69 = *(_DWORD *)(v66 + 60);
          *((_DWORD *)v68 + 1) = v66;
          v68 += 4;
          if ( !v69 )
            break;
          ++v61;
          v66 = v69;
        }
        if ( *(int **)(v66 + 52) == &dword_47475C )
        {
          if ( v61 )
          {
            v72 = &v65[4 * v61];
            for ( i = v64; ; i = v71 + 1 )
            {
              v74 = *((_DWORD *)v72 - 1);
              v72 -= 4;
              v75 = strlen(*(const char **)(v74 + 4));
              memcpy(i, *(const void **)(v74 + 4), v75);
              v76 = strlen(*(const char **)(v74 + 4));
              v71 = &i[v76];
              if ( v72 == v67 )
                break;
              i[v76] = 32;
            }
          }
          else
          {
            v71 = v64;
          }
          *v71 = 0;
          free(v67);
          switch ( (*(unsigned __int8 *)(a3 + 13) >> 1) & 0xF )
          {
            case 0:
              if ( **(_DWORD **)(a3 + 76) )
                v81 = "on";
              else
                v81 = "off";
              sub_1BA5A4(v64, v81, "off", "on");
              break;
            case 1:
              sub_1BA5A4(v64, *(&off_3564A4 + **(_DWORD **)(a3 + 76)), **(_DWORD **)(a3 + 76), &off_3564A4);
              break;
            case 2:
            case 9:
              sub_93170(&ptr, 64, "%u", **(_DWORD **)(a3 + 76));
              goto LABEL_149;
            case 3:
            case 8:
            case 0xA:
              sub_93170(&ptr, 64, "%d", **(_DWORD **)(a3 + 76));
LABEL_149:
              sub_1BA5A4(v64, &ptr, v79, v80);
              break;
            case 4:
            case 5:
            case 6:
            case 7:
            case 0xB:
              sub_1BA5A4(v64, **(_DWORD **)(a3 + 76), v77, *(_DWORD *)(a3 + 76));
              break;
            default:
              break;
          }
        }
        else
        {
          free(v65);
        }
        free(v64);
      }
      return;
    case 0xBu:
      v25 = *(const char ***)(a3 + 80);
      if ( !s )
      {
        v88 = 0;
        ptr = &v88;
        v83 = *v25;
        v87 = 0;
        if ( v83 )
        {
          for ( j = 0; ; v83 = *(const char **)(*(_DWORD *)(a3 + 80) + 4 * j) )
          {
            v85 = strlen(v83);
            if ( v85 > 0x7FFFFFFF - (int)v5 )
              sub_33D184("basic_string::append");
            sub_33C320(&ptr, v83, v85);
            ++j;
            if ( !*(_DWORD *)(*(_DWORD *)(a3 + 80) + 4 * j) )
              break;
            if ( (unsigned int)(0x7FFFFFFF - (_DWORD)v87) <= 1 )
              sub_33D184("basic_string::append");
            sub_33C320(&ptr, ", ", 2);
            v5 = v87;
          }
        }
        sub_946E0("Requires an argument. Valid arguments are %s.", (const char *)ptr);
      }
      v26 = strchr(s, 32);
      if ( v26 )
        v27 = v26 - v5;
      else
        v27 = strlen(v5);
      v28 = *v25;
      if ( !*v25 )
        goto LABEL_183;
      v29 = 0;
      v30 = v25;
      v31 = 0;
      do
      {
        if ( !strncmp(v5, v28, v27) )
        {
          if ( !v28[v27] )
          {
            v29 = v28;
            goto LABEL_45;
          }
          ++v31;
          v29 = v28;
        }
        v32 = v30[1];
        ++v30;
        v28 = v32;
      }
      while ( v32 );
      if ( !v31 )
LABEL_183:
        sub_946E0("Undefined item: \"%s\".", v5);
      if ( v31 != 1 )
        sub_946E0("Ambiguous item \"%s\".", v5);
LABEL_45:
      v33 = *(const char ***)(a3 + 76);
      v21 = *(void (__fastcall **)(int, _DWORD, int))(a3 + 16);
      if ( *v33 == v29 )
        goto LABEL_120;
      *v33 = v29;
      v21(a3, 0, a2);
      goto LABEL_28;
    default:
      sub_946E0("gdb internal error: bad var_type in do_setshow_command");
  }
}
