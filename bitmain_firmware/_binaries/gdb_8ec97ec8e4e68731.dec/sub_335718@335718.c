int __fastcall sub_335718(_BYTE *a1, _BYTE *a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  int v6; // r5
  _BYTE *v8; // r10
  unsigned __int8 *v9; // r4
  int v10; // r9
  int v11; // r7
  int v12; // r5
  const __int32_t **v13; // r0
  const __int32_t *v14; // r2
  int v15; // r3
  __int32_t v16; // r2
  unsigned int v17; // r10
  int v18; // r3
  char *v19; // r4
  int v20; // r5
  unsigned __int8 *v21; // r11
  unsigned __int8 *v22; // r1
  unsigned int v23; // r3
  bool v24; // zf
  int v25; // r3
  __int32_t v26; // r4
  int result; // r0
  unsigned int v28; // r10
  int v30; // r5
  unsigned __int8 *v31; // r4
  bool v32; // zf
  char v33; // r11
  bool v34; // zf
  int v35; // r3
  unsigned __int8 *v36; // r0
  int v37; // r3
  unsigned int v38; // r3
  unsigned int v39; // r3
  _BYTE *i; // r1
  char *v41; // r1
  int v42; // r2
  int v43; // r3
  bool v44; // zf
  unsigned __int8 *v45; // r1
  int v46; // r5
  int v47; // r1
  int v48; // r0
  _BYTE *v49; // r11
  _BYTE *v50; // r9
  __int32_t v51; // r4
  __int32_t v52; // t1
  int v53; // r3
  const __int32_t **v54; // r0
  int v55; // r3
  unsigned __int8 *v56; // r2
  unsigned __int8 *v57; // r11
  int v58; // t1
  wctype_t v59; // r5
  wint_t v60; // r0
  bool v61; // zf
  int v62; // r2
  unsigned __int8 *v63; // r4
  unsigned int v64; // r3
  int v65; // r0
  int v66; // r3
  _BYTE *v67; // r3
  char *s; // [sp+Ch] [bp-118h]
  char *sa; // [sp+Ch] [bp-118h]
  int v71; // [sp+14h] [bp-110h]
  char property[264]; // [sp+1Ch] [bp-108h] BYREF

  v6 = (unsigned __int8)*a1;
  v8 = (_BYTE *)a3;
  s = a1 + 1;
  if ( *a1 )
  {
    v9 = a1;
    v10 = a5 & 2;
    v11 = a5 & 0x10;
    while ( 2 )
    {
      if ( (a5 & 0x10) != 0 )
        v6 = LOBYTE((*_ctype_tolower_loc())[v6]);
      switch ( v6 )
      {
        case '!':
        case '+':
        case '@':
          if ( (a5 & 0x20) == 0 )
            goto LABEL_49;
          if ( v9[1] != 40 )
            goto LABEL_49;
          result = sub_335110(v6, s, (unsigned int)a2, a3, a4, a5);
          if ( result == -1 )
            goto LABEL_49;
          return result;
        case '*':
          v28 = a3;
          if ( (a5 & 0x20) != 0 && v9[1] == 40 )
          {
            result = sub_335110(42, s, (unsigned int)a2, a3, a4, a5);
            if ( result != -1 )
              return result;
          }
          if ( (_BYTE *)a3 != a2 && *a2 == 46 && a4 & 1 )
            return 1;
          v30 = v9[1];
          v31 = v9 + 2;
          v32 = v30 == 63;
          if ( v30 != 63 )
            v32 = v30 == 42;
          if ( v32 )
          {
            v33 = a5 & 0x20;
            if ( (a5 & 0x20) != 0 )
              v33 = 1;
            do
            {
              if ( *v31 == 40 )
                v35 = v33 & 1;
              else
                v35 = 0;
              if ( !v35 || (v36 = sub_333E90(v31), v36 == v31) )
              {
                v36 = v31;
                if ( v30 == 63 )
                {
                  if ( (_BYTE *)a3 == a2 )
                    return 1;
                  v37 = (unsigned __int8)*a2++;
                  if ( v37 == 47 && (a5 & 1) != 0 )
                    return 1;
                }
              }
              v30 = *v36;
              v31 = v36 + 1;
              v34 = v30 == 42;
              if ( v30 != 42 )
                v34 = v30 == 63;
            }
            while ( v34 );
            v28 = a3;
          }
          if ( v30 )
          {
            if ( (a5 & 1) != 0 )
              v47 = 47;
            else
              v47 = 0;
            v48 = sub_3385F0(a2, v47, v28 - (_DWORD)a2);
            if ( v48 )
              v49 = (_BYTE *)v48;
            else
              v49 = (_BYTE *)v28;
            if ( v30 == 91 )
              goto LABEL_214;
            if ( (a5 & 0x20) != 0 )
            {
              v61 = v30 == 43;
              if ( v30 != 43 )
                v61 = v30 == 64;
              v62 = v61;
              if ( v30 == 33 )
                v62 |= 1u;
              if ( v62 && *v31 == 40 )
              {
LABEL_214:
                v63 = v31 - 1;
                if ( (a5 & 1) == 0 )
                  a5 &= ~4u;
                if ( a2 < v49 )
                {
                  v64 = a4;
                  do
                  {
                    v65 = sub_335718(v63, a2++, v28, v64, a5);
                    v64 = 0;
                    if ( !v65 )
                      return 0;
                  }
                  while ( v49 != a2 );
                }
                return 1;
              }
            }
            if ( v30 != 47 )
            {
              if ( (a5 & 1) != 0 )
                goto LABEL_155;
              goto LABEL_221;
            }
            if ( (a5 & 1) == 0 )
            {
LABEL_221:
              a5 &= ~4u;
LABEL_155:
              if ( v30 == 92 && !v10 )
                v30 = *v31;
              if ( v11 )
                v30 = LOBYTE((*_ctype_tolower_loc())[v30]);
              sa = (char *)(v31 - 1);
              if ( a2 >= v49 )
                return 1;
              while ( 1 )
              {
                v50 = a2;
                v52 = (unsigned __int8)*a2++;
                v51 = v52;
                if ( v11 )
                  v51 = (*_ctype_tolower_loc())[v51];
                if ( v51 == v30 )
                {
                  v66 = a4;
                  if ( a4 )
                    v66 = 1;
                  if ( !sub_335718(sa, v50, v28, v66, a5) )
                    break;
                }
                a4 = 0;
                if ( a2 == v49 )
                  return 1;
              }
              return 0;
            }
            if ( (unsigned int)a2 >= v28 )
              return 1;
            if ( *a2 != 47 )
            {
              v67 = a2 + 1;
              do
              {
                v24 = v28 == (_DWORD)v67;
                a2 = v67++;
                if ( v24 )
                  return 1;
              }
              while ( *a2 != 47 );
            }
            return sub_335718(v31, a2 + 1, v28, (a5 >> 2) & 1, a5) != 0;
          }
          else
          {
            if ( (a5 & 1) == 0 || (a5 & 8) != 0 )
              return 0;
            return sub_3385F0(a2, 47, v28 - (_DWORD)a2) != 0;
          }
        case '/':
          if ( (a5 & 5) != 5 )
            goto LABEL_49;
          if ( (_BYTE *)a3 == a2 || *a2 != 47 )
            return 1;
          v9 = (unsigned __int8 *)s;
          a4 = 1;
          goto LABEL_54;
        case '?':
          if ( (a5 & 0x20) != 0 && v9[1] == 40 )
          {
            result = sub_335110(63, s, (unsigned int)a2, a3, a4, a5);
            if ( result != -1 )
              return result;
          }
          if ( (_BYTE *)a3 == a2 )
            return 1;
          v25 = (unsigned __int8)*a2;
          if ( v25 == 47 )
          {
            a4 = a5 & 1;
            if ( (a5 & 1) != 0 )
              return 1;
          }
          else
          {
            if ( v25 == 46 )
              a4 &= 1u;
            else
              a4 = 0;
            if ( a4 )
              return 1;
          }
          v9 = (unsigned __int8 *)s;
          goto LABEL_54;
        case '[':
          if ( !dword_48FEE8 )
          {
            if ( getenv("POSIXLY_CORRECT") )
              v53 = 1;
            else
              v53 = -1;
            dword_48FEE8 = v53;
          }
          if ( (_BYTE *)a3 == a2 )
            return 1;
          v17 = (unsigned __int8)*a2;
          if ( v17 == 46 )
          {
            if ( a4 )
              return 1;
          }
          else if ( v17 == 47 && (a5 & 1) != 0 )
          {
            return 1;
          }
          v18 = v9[1];
          if ( v18 == 33 || ((v18 == 94) & ((unsigned int)dword_48FEE8 >> 31)) != 0 )
          {
            v19 = (char *)(v9 + 2);
            v71 = 1;
          }
          else
          {
            v19 = s;
            v71 = 0;
          }
          if ( (a5 & 0x10) != 0 )
            v17 = LOBYTE((*_ctype_tolower_loc())[v17]);
          v20 = (unsigned __int8)*v19;
          v9 = (unsigned __int8 *)(v19 + 1);
          while ( 2 )
          {
            if ( (a5 & 2) == 0 && v20 == 92 )
            {
              a4 = *v9;
              if ( !*v9 )
                return 1;
              if ( (a5 & 0x10) != 0 )
              {
                v46 = *v9;
                a4 = LOBYTE((*_ctype_tolower_loc())[v46]);
              }
              v21 = v9 + 1;
              v20 = v9[1];
              goto LABEL_32;
            }
            v21 = v9;
            a4 = v20;
            if ( v20 != 91 )
            {
              if ( !v20 )
              {
                v6 = 91;
LABEL_50:
                v26 = (unsigned __int8)*a2;
                if ( (a5 & 0x10) != 0 )
                  v26 = (*_ctype_tolower_loc())[v26];
                if ( v26 != v6 )
                  return 1;
                v9 = (unsigned __int8 *)s;
                a4 = 0;
                goto LABEL_54;
              }
              goto LABEL_29;
            }
            v20 = *v9;
            if ( v20 != 58 )
            {
              while ( 1 )
              {
LABEL_30:
                if ( (a5 & 0x10) != 0 )
                  a4 = LOBYTE((*_ctype_tolower_loc())[(__int16)a4]);
LABEL_32:
                v22 = v21 + 1;
                v9 = v21 + 1;
                if ( v20 != 45 )
                {
                  if ( v17 != a4 )
                    goto LABEL_24;
                  goto LABEL_104;
                }
                v23 = v21[1];
                v24 = v23 == 93;
                if ( v23 != 93 )
                  v24 = v23 == 0;
                if ( !v24 )
                  goto LABEL_129;
                if ( v17 == a4 )
                  goto LABEL_104;
                if ( v23 != 93 )
                {
LABEL_129:
                  v44 = v10 == 0;
                  if ( (a5 & 2) == 0 )
                    v44 = v23 == 92;
                  v45 = v21 + 2;
                  if ( v44 )
                  {
                    v23 = v21[2];
                    v45 = v21 + 3;
                  }
                  if ( !v23 )
                    return 1;
                  v9 = v45 + 1;
                  a4 = v17 >= a4;
                  v20 = *v45;
                  if ( v17 > v23 )
                    a4 = 0;
                  if ( !a4 )
                    goto LABEL_24;
                  v21 = v45;
                  v22 = v45 + 1;
                  goto LABEL_104;
                }
                v20 = 93;
                ++v21;
                a4 = 45;
              }
            }
            v41 = property;
            v42 = 0;
            while ( 1 )
            {
              v43 = v9[1];
              a4 = (unsigned int)(v9 + 1);
              if ( v43 == 58 )
                break;
              ++v42;
              ++v9;
              if ( (unsigned int)(v43 - 97) > 0x18 )
                goto LABEL_127;
              *v41++ = v43;
              if ( v42 == 256 )
                return 1;
            }
            if ( v9[2] == 93 )
            {
              property[v42] = 0;
              v59 = wctype(property);
              if ( !v59 )
                return 1;
              v60 = btowc((unsigned __int8)*a2);
              if ( !iswctype(v60, v59) )
              {
                v9 += 4;
                v20 = *(unsigned __int8 *)(a4 + 2);
LABEL_24:
                if ( v20 == 93 )
                {
                  if ( !v71 )
                    return 1;
                  goto LABEL_96;
                }
                continue;
              }
              v21 = v9 + 3;
              v20 = v9[3];
              v22 = v9 + 4;
            }
            else
            {
LABEL_127:
              v22 = v21 + 1;
              a4 = 58;
              if ( v17 != 91 )
              {
                ++v21;
LABEL_29:
                v20 = *v21;
                goto LABEL_30;
              }
            }
            break;
          }
LABEL_104:
          while ( 2 )
          {
            if ( !v20 )
              return 1;
            while ( 1 )
            {
              v38 = __clz(v20 - 92);
              if ( (a5 & 2) != 0 )
                a4 = 0;
              v39 = v38 >> 5;
              if ( (a5 & 2) == 0 )
                a4 = v39;
              if ( a4 )
              {
                if ( !v21[1] )
                  return 1;
                v20 = v21[2];
                v21 += 2;
                goto LABEL_103;
              }
              if ( v20 != 91 )
                goto LABEL_101;
              v20 = v21[1];
              if ( v20 != 58 )
                break;
              v55 = v21[2];
              v56 = v21 + 2;
              v57 = v21 + 257;
              while ( v55 != 58 )
              {
                if ( (unsigned int)(v55 - 97) > 0x18 )
                  goto LABEL_115;
                v58 = *++v56;
                v55 = v58;
                if ( v56 == v57 )
                  return 1;
              }
              if ( v56[1] == 93 )
              {
                v22 = v56 + 3;
                v20 = v56[2];
                goto LABEL_101;
              }
              v21 = v22;
              v20 = 58;
              ++v22;
            }
            if ( v20 == 61 )
            {
              if ( v21[2] && v21[3] == 61 && v21[4] == 93 )
              {
                v20 = v21[5];
                v22 = v21 + 6;
                goto LABEL_101;
              }
              return 1;
            }
            if ( v20 != 46 )
            {
LABEL_115:
              v21 = v22;
LABEL_103:
              v22 = v21 + 1;
              continue;
            }
            break;
          }
          for ( i = v21 + 2; ; ++i )
          {
            if ( !i[1] )
              return 1;
            if ( i[1] == 46 && i[2] == 93 )
              break;
          }
          v20 = (unsigned __int8)i[3];
          v22 = i + 4;
LABEL_101:
          if ( v20 != 93 )
          {
            v20 = *v22;
            v21 = v22;
            goto LABEL_103;
          }
          v9 = v22;
          if ( v71 )
            return 1;
LABEL_54:
          v6 = *v9;
          ++a2;
          s = (char *)(v9 + 1);
          if ( !*v9 )
          {
            v8 = (_BYTE *)a3;
            break;
          }
          continue;
        case '\\':
          if ( (a5 & 2) != 0 )
          {
            if ( (_BYTE *)a3 == a2 )
              return 1;
            if ( (a5 & 0x10) != 0 )
            {
              v54 = _ctype_tolower_loc();
              v9 = (unsigned __int8 *)s;
              v15 = 92;
              v14 = *v54;
LABEL_11:
              v16 = v14[(unsigned __int8)*a2];
              goto LABEL_95;
            }
            v15 = 92;
          }
          else
          {
            v12 = v9[1];
            v9 += 2;
            s = (char *)v9;
            if ( !v12 )
              return 1;
            if ( (a5 & 0x10) != 0 )
            {
              v13 = _ctype_tolower_loc();
              v14 = *v13;
              v15 = (*v13)[v12];
              if ( (_BYTE *)a3 == a2 )
                return 1;
              v15 = (unsigned __int8)v15;
              goto LABEL_11;
            }
            if ( (_BYTE *)a3 == a2 )
              return 1;
            v15 = v12;
          }
          v16 = (unsigned __int8)*a2;
          v9 = (unsigned __int8 *)s;
LABEL_95:
          if ( v16 != v15 )
            return 1;
LABEL_96:
          a4 = 0;
          goto LABEL_54;
        default:
LABEL_49:
          if ( (_BYTE *)a3 != a2 )
            goto LABEL_50;
          return 1;
      }
      break;
    }
  }
  return v8 != a2 && ((a5 & 8) == 0 || *a2 != 47);
}
