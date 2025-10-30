int __fastcall sub_3345D8(wint_t *a1, const wchar_t *a2, unsigned int a3, int a4, unsigned int a5)
{
  wint_t v5; // r5
  const wchar_t *v7; // r10
  wint_t *v8; // r10
  int v10; // r9
  int v11; // r8
  wint_t v12; // r0
  wint_t v13; // r11
  wint_t v14; // r2
  wint_t *v15; // r10
  wint_t v16; // r5
  wint_t v17; // r1
  wint_t *v18; // r6
  wint_t *v19; // r4
  wint_t v20; // r3
  bool v21; // zf
  wint_t v22; // r0
  int result; // r0
  int v24; // r11
  wint_t *v25; // r4
  wchar_t *v26; // r10
  wint_t v28; // r5
  wint_t *v29; // r4
  bool v30; // zf
  char v31; // r6
  bool v32; // zf
  int v33; // r3
  wint_t *v34; // r0
  int v35; // r3
  _DWORD *v36; // lr
  wint_t *v37; // r4
  wint_t *v38; // r0
  int v39; // r1
  wint_t v40; // r3
  bool v41; // zf
  wint_t *v42; // r2
  _BOOL4 v43; // r0
  bool v44; // zf
  _DWORD *i; // r10
  wchar_t v46; // r1
  wchar_t *v47; // r3
  wchar_t *v48; // r6
  wint_t *v49; // r4
  const wchar_t *v50; // r9
  wint_t v51; // r0
  wchar_t v52; // t1
  int v53; // r2
  int v54; // r3
  wint_t *v55; // r2
  wint_t v56; // r3
  wint_t v57; // t1
  char *v58; // r0
  unsigned int v59; // r3
  unsigned int v60; // t1
  bool v61; // zf
  int v62; // r2
  wint_t *v63; // r4
  int v64; // r3
  int v65; // r0
  wctype_t v66; // r1
  int v67; // r3
  const wchar_t *v68; // r3
  bool v69; // cc
  wchar_t *s; // [sp+Ch] [bp-520h]
  int v72; // [sp+18h] [bp-514h]
  char v73[256]; // [sp+20h] [bp-50Ch] BYREF
  char v74; // [sp+120h] [bp-40Ch] BYREF
  _DWORD v75[258]; // [sp+124h] [bp-408h] BYREF

  v5 = *a1;
  v7 = (const wchar_t *)a3;
  s = (wchar_t *)(a1 + 1);
  if ( *a1 )
  {
    v8 = a1;
    v10 = a5 & 2;
    v11 = a5 & 0x10;
    while ( 2 )
    {
      if ( (a5 & 0x10) != 0 )
        v5 = towlower(v5);
      switch ( v5 )
      {
        case '!':
        case '+':
        case '@':
          if ( (a5 & 0x20) == 0 )
            goto LABEL_48;
          if ( v8[1] != 40 )
            goto LABEL_48;
          result = sub_333FB8((wchar_t *)v5, s, (unsigned int)a2, a3, a4, a5);
          if ( result == -1 )
            goto LABEL_48;
          return result;
        case '*':
          v24 = a4;
          v25 = v8;
          v26 = (wchar_t *)a3;
          if ( (a5 & 0x20) != 0 && v25[1] == 40 )
          {
            result = sub_333FB8((wchar_t *)0x2A, s, (unsigned int)a2, a3, v24, a5);
            if ( result != -1 )
              return result;
          }
          if ( a2 != (const wchar_t *)a3 && *a2 == 46 && v24 & 1 )
            return 1;
          v28 = v25[1];
          v29 = v25 + 2;
          v30 = v28 == 63;
          if ( v28 != 63 )
            v30 = v28 == 42;
          if ( v30 )
          {
            v31 = a5 & 0x20;
            if ( (a5 & 0x20) != 0 )
              v31 = 1;
            do
            {
              if ( *v29 == 40 )
                v33 = v31 & 1;
              else
                v33 = 0;
              if ( !v33 || (v34 = sub_333D68(v29), v34 == v29) )
              {
                v34 = v29;
                if ( v28 == 63 )
                {
                  if ( (const wchar_t *)a3 == a2 )
                    return 1;
                  v35 = *a2++;
                  if ( v35 == 47 && (a5 & 1) != 0 )
                    return 1;
                }
              }
              v28 = *v34;
              v29 = v34 + 1;
              v32 = *v34 == 42;
              if ( *v34 != 42 )
                v32 = v28 == 63;
            }
            while ( v32 );
            v26 = (wchar_t *)a3;
          }
          if ( v28 )
          {
            if ( (a5 & 1) != 0 )
              v46 = 47;
            else
              v46 = 0;
            v47 = wmemchr(a2, v46, v26 - a2);
            if ( !v47 )
              v47 = v26;
            v48 = v47;
            if ( v28 == 91 )
              goto LABEL_220;
            if ( (a5 & 0x20) != 0 )
            {
              v61 = v28 == 43;
              if ( v28 != 43 )
                v61 = v28 == 64;
              v62 = v61;
              if ( v28 == 33 )
                v62 |= 1u;
              if ( v62 && *v29 == 40 )
              {
LABEL_220:
                v63 = v29 - 1;
                if ( (a5 & 1) == 0 )
                  a5 &= ~4u;
                if ( v47 > a2 )
                {
                  v64 = v24;
                  do
                  {
                    v65 = sub_3345D8(v63, a2++, v26, v64, a5);
                    v64 = 0;
                    if ( !v65 )
                      return 0;
                  }
                  while ( v48 > a2 );
                }
                return 1;
              }
            }
            if ( v28 != 47 )
            {
              if ( (a5 & 1) != 0 )
                goto LABEL_144;
              goto LABEL_227;
            }
            if ( (a5 & 1) == 0 )
            {
LABEL_227:
              a5 &= ~4u;
LABEL_144:
              if ( v28 == 92 && !v10 )
                v28 = *v29;
              if ( v11 )
                v28 = towlower(v28);
              v49 = v29 - 1;
              if ( v48 <= a2 )
                return 1;
              while ( 1 )
              {
                v50 = a2;
                v52 = *a2++;
                v51 = v52;
                if ( v11 )
                  v51 = towlower(v51);
                if ( v28 == v51 )
                {
                  v67 = v24;
                  if ( v24 )
                    v67 = 1;
                  if ( !sub_3345D8(v49, v50, v26, v67, a5) )
                    break;
                }
                v24 = 0;
                if ( v48 <= a2 )
                  return 1;
              }
              return 0;
            }
            if ( v26 <= a2 )
              return 1;
            if ( *a2 != 47 )
            {
              v68 = a2 + 1;
              do
              {
                v69 = v26 > v68;
                a2 = v68++;
                if ( !v69 )
                  return 1;
              }
              while ( *a2 != 47 );
            }
            return sub_3345D8(v29, a2 + 1, v26, (a5 >> 2) & 1, a5) != 0;
          }
          else
          {
            if ( (a5 & 1) == 0 || (a5 & 8) != 0 )
              return 0;
            return wmemchr(a2, 47, v26 - a2) != 0;
          }
        case '/':
          if ( (a5 & 5) != 5 )
            goto LABEL_48;
          if ( a2 == (const wchar_t *)a3 || *a2 != 47 )
            return 1;
          v8 = (wint_t *)s;
          a4 = 1;
          goto LABEL_53;
        case '?':
          if ( (a5 & 0x20) != 0 && v8[1] == 40 )
          {
            result = sub_333FB8((wchar_t *)0x3F, s, (unsigned int)a2, a3, a4, a5);
            if ( result != -1 )
              return result;
          }
          if ( a2 == (const wchar_t *)a3 )
            return 1;
          if ( *a2 == 47 )
          {
            a4 = a5 & 1;
            if ( (a5 & 1) != 0 )
              return 1;
          }
          else
          {
            if ( *a2 == 46 )
              a4 &= 1u;
            else
              a4 = 0;
            if ( a4 )
              return 1;
          }
          v8 = (wint_t *)s;
          goto LABEL_53;
        case '[':
          if ( !dword_48FEE8 )
          {
            if ( getenv("POSIXLY_CORRECT") )
              v53 = 1;
            else
              v53 = -1;
            dword_48FEE8 = v53;
          }
          if ( a2 == (const wchar_t *)a3 )
            return 1;
          v13 = *a2;
          if ( *a2 == 46 )
          {
            if ( a4 )
              return 1;
          }
          else if ( v13 == 47 && (a5 & 1) != 0 )
          {
            return 1;
          }
          v14 = v8[1];
          if ( v14 == 33 || ((v14 == 94) & ((unsigned int)dword_48FEE8 >> 31)) != 0 )
          {
            v15 = v8 + 2;
            v72 = 1;
          }
          else
          {
            v15 = (wint_t *)s;
            v72 = 0;
          }
          if ( (a5 & 0x10) != 0 )
            v13 = towlower(v13);
          v16 = *v15;
          v8 = v15 + 1;
          while ( 2 )
          {
            if ( (a5 & 2) == 0 && v16 == 92 )
            {
              v17 = *v8;
              if ( !*v8 )
                return 1;
              if ( (a5 & 0x10) != 0 )
                v17 = towlower(*v8);
              v18 = v8 + 1;
              v16 = v8[1];
              goto LABEL_31;
            }
            v17 = v16;
            v18 = v8;
            if ( v16 != 91 )
            {
              if ( !v16 )
              {
                v5 = 91;
LABEL_49:
                v22 = *a2;
                if ( (a5 & 0x10) != 0 )
                  v22 = towlower(v22);
                if ( v22 != v5 )
                  return 1;
                v8 = (wint_t *)s;
                a4 = 0;
                goto LABEL_53;
              }
              goto LABEL_28;
            }
            v16 = *v8;
            if ( *v8 != 58 )
            {
              while ( 1 )
              {
LABEL_29:
                if ( (a5 & 0x10) != 0 )
                  v17 = towlower(v17);
LABEL_31:
                v19 = v18 + 1;
                v8 = v18 + 1;
                if ( v16 != 45 )
                {
                  if ( v17 != v13 )
                    goto LABEL_23;
                  goto LABEL_111;
                }
                v20 = v18[1];
                v21 = v20 == 93;
                if ( v20 != 93 )
                  v21 = v20 == 0;
                if ( !v21 )
                  goto LABEL_102;
                if ( v17 == v13 )
                  goto LABEL_111;
                if ( v20 != 93 )
                {
LABEL_102:
                  v41 = v20 == 92;
                  if ( v20 == 92 )
                    v41 = v10 == 0;
                  v42 = v18 + 2;
                  if ( v41 )
                  {
                    v20 = v18[2];
                    v42 = v18 + 3;
                  }
                  if ( !v20 )
                    return 1;
                  v8 = v42 + 1;
                  v43 = v17 <= v13;
                  v16 = *v42;
                  if ( v20 < v13 )
                    v43 = 0;
                  if ( !v43 )
                    goto LABEL_23;
                  v18 = v42;
                  v19 = v42 + 1;
                  goto LABEL_111;
                }
                v16 = 93;
                ++v18;
                v17 = 45;
              }
            }
            v36 = v75;
            v37 = v8;
            v38 = v75;
            v39 = 0;
            while ( 1 )
            {
              v40 = v37[1];
              if ( v40 == 58 )
                break;
              ++v39;
              ++v37;
              if ( v40 - 97 > 0x18 )
                goto LABEL_100;
              *v38++ = v40;
              if ( v39 == 256 )
                return 1;
            }
            if ( v37[2] == 93 )
            {
              v58 = v73;
              v75[v39] = 0;
              v59 = v75[0];
              while ( 1 )
              {
                if ( v59 <= 0x3F )
                {
                  if ( v59 < 0x25 && v59 - 32 > 3 )
                    return 1;
                }
                else if ( v59 < 0x41 || v59 > 0x5F && v59 - 97 > 0x1D )
                {
                  return 1;
                }
                if ( v58 == &v74 )
                  return 1;
                *v58 = v59;
                v60 = v36[1];
                ++v36;
                v59 = v60;
                if ( !v60 )
                  break;
                ++v58;
              }
              v58[1] = 0;
              v66 = wctype(v73);
              if ( !v66 )
                return 1;
              if ( !iswctype(*a2, v66) )
              {
                v8 = v37 + 4;
                v16 = v37[3];
LABEL_23:
                if ( v16 == 93 )
                {
                  if ( !v72 )
                    return 1;
                  goto LABEL_93;
                }
                continue;
              }
              v18 = v37 + 3;
              v16 = v37[3];
              v19 = v37 + 4;
            }
            else
            {
LABEL_100:
              v19 = v8 + 1;
              v17 = 58;
              if ( v13 != 91 )
              {
                v18 = v8 + 1;
LABEL_28:
                v16 = *v18;
                goto LABEL_29;
              }
            }
            break;
          }
LABEL_111:
          v8 = v19;
          while ( 2 )
          {
            if ( !v16 )
              return 1;
            while ( 1 )
            {
              v44 = v16 == 92;
              if ( v16 == 92 )
                v44 = v10 == 0;
              a4 = v44;
              if ( v44 )
              {
                if ( !v18[1] )
                  return 1;
                v16 = v18[2];
                v18 += 2;
                goto LABEL_114;
              }
              if ( v16 != 91 )
                goto LABEL_112;
              v16 = v18[1];
              if ( v16 != 58 )
                break;
              v55 = v18 + 2;
              v56 = v18[2];
              while ( v56 != 58 )
              {
                if ( v56 - 97 > 0x18 )
                  goto LABEL_127;
                v57 = v55[1];
                ++v55;
                v56 = v57;
                if ( v55 == v18 + 257 )
                  return 1;
              }
              if ( v55[1] == 93 )
              {
                v8 = v55 + 3;
                v16 = v55[2];
                goto LABEL_112;
              }
              v18 = v8;
              v16 = 58;
              ++v8;
            }
            if ( v16 == 61 )
            {
              if ( v18[2] && v18[3] == 61 && v18[4] == 93 )
              {
                v8 = v18 + 6;
                v16 = v18[5];
                goto LABEL_112;
              }
              return 1;
            }
            if ( v16 != 46 )
            {
LABEL_127:
              v18 = v8;
LABEL_114:
              v8 = v18 + 1;
              continue;
            }
            break;
          }
          for ( i = v18 + 2; ; ++i )
          {
            v54 = i[1];
            if ( !v54 )
              return 1;
            if ( v54 == 46 && i[2] == 93 )
              break;
          }
          v16 = i[3];
          v8 = i + 4;
LABEL_112:
          if ( v16 != 93 )
          {
            v16 = *v8;
            v18 = v8;
            goto LABEL_114;
          }
          if ( v72 )
            return 1;
LABEL_53:
          v5 = *v8;
          ++a2;
          s = (wchar_t *)(v8 + 1);
          if ( !*v8 )
          {
            v7 = (const wchar_t *)a3;
            break;
          }
          continue;
        case '\\':
          if ( (a5 & 2) != 0 )
          {
            if ( a2 == (const wchar_t *)a3 )
              return 1;
            if ( (a5 & 0x10) != 0 )
              goto LABEL_10;
          }
          else
          {
            v5 = v8[1];
            s = (wchar_t *)(v8 + 2);
            if ( !v5 )
              return 1;
            if ( (a5 & 0x10) != 0 )
            {
              v5 = towlower(v5);
              if ( a2 == (const wchar_t *)a3 )
                return 1;
LABEL_10:
              v8 = (wint_t *)s;
              v12 = towlower(*a2);
              goto LABEL_92;
            }
            if ( a2 == (const wchar_t *)a3 )
              return 1;
          }
          v12 = *a2;
          v8 = (wint_t *)s;
LABEL_92:
          if ( v12 != v5 )
            return 1;
LABEL_93:
          a4 = 0;
          goto LABEL_53;
        default:
LABEL_48:
          if ( a2 != (const wchar_t *)a3 )
            goto LABEL_49;
          return 1;
      }
      break;
    }
  }
  return v7 != a2 && ((a5 & 8) == 0 || *a2 != 47);
}
