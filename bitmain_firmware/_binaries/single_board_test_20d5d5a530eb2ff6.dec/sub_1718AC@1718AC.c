int *__fastcall sub_1718AC(_DWORD *a1)
{
  int **v1; // r8
  int v2; // r1
  int v3; // r3
  bool v4; // zf
  char *v5; // r6
  unsigned __int8 *v6; // r4
  unsigned __int8 *v7; // r11
  int v8; // t1
  bool v9; // zf
  unsigned int v10; // r0
  unsigned int v11; // t1
  size_t v12; // r0
  bool v13; // cf
  char *v14; // r4
  unsigned int v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // t1
  size_t v18; // r0
  unsigned __int8 *v19; // r8
  unsigned int v20; // r0
  int **v21; // r0
  int v22; // r0
  int v24; // t1
  bool v25; // zf
  unsigned int v26; // r0
  unsigned int v27; // t1
  size_t v28; // r0
  char *v29; // r4
  unsigned int v30; // r0
  unsigned int v31; // r0
  unsigned int v32; // t1
  size_t v33; // r0
  unsigned __int8 *v34; // r10
  unsigned int v35; // r0
  int v36; // t1
  bool v37; // zf
  unsigned int v38; // r0
  unsigned int v39; // t1
  size_t v40; // r0
  unsigned __int8 *v41; // r8
  unsigned int v42; // r0
  int **v43; // r0
  bool v44; // zf
  int v45; // r3
  int v46; // t1
  bool v47; // zf
  bool v48; // zf
  int v49; // t1
  int v50; // r3
  int v51; // t1
  bool v52; // zf
  bool v53; // zf
  bool v54; // zf
  bool v55; // zf
  unsigned int v56; // r0
  unsigned int v57; // t1
  size_t v58; // r0
  unsigned __int8 *v59; // r10
  unsigned int v60; // r0
  char *v61; // r2
  int *v63; // [sp+4h] [bp-408h]
  _BYTE v64[1028]; // [sp+8h] [bp-404h] BYREF

  v63 = (int *)sub_10BFD4(sub_171528);
  if ( v63 )
  {
    v1 = 0;
    while ( sub_B6D58(a1, (int)v64, 1024) > 0 )
    {
      v2 = 1;
      if ( v1 )
      {
        if ( sub_BDB10(v64[0], 8) )
          v2 = 3;
        else
          v2 = 1;
      }
      v3 = v64[0];
      if ( v64[0] )
      {
        v4 = v64[0] == 13;
        if ( v64[0] != 13 )
          v4 = v64[0] == 10;
        if ( !v4 )
        {
          v5 = 0;
          v6 = v64;
          v7 = v64;
          do
          {
            switch ( v2 )
            {
              case 1:
                while ( v3 != 58 )
                {
                  v8 = *++v7;
                  v3 = v8;
                  if ( v8 )
                  {
                    v9 = v3 == 13;
                    if ( v3 != 13 )
                      v9 = v3 == 10;
                    if ( !v9 )
                      continue;
                  }
                  goto LABEL_133;
                }
                *v7 = 0;
                v10 = *v6;
                if ( !*v6 )
                  goto LABEL_169;
                while ( v10 != 34 )
                {
                  if ( !sub_BDB10(v10, 8) )
                    goto LABEL_26;
                  v11 = *++v6;
                  v10 = v11;
                  if ( !v11 )
                    goto LABEL_169;
                }
                if ( !v6[1] )
                  goto LABEL_169;
                if ( !++v6 )
                  goto LABEL_169;
LABEL_26:
                v5 = (char *)v6;
                v12 = strlen((const char *)v6) - 1;
                v13 = __CFADD__(v6, v12);
                v14 = (char *)&v6[v12];
                if ( v13 )
                  goto LABEL_169;
                v15 = (unsigned __int8)v5[v12];
                if ( v15 == 34 )
                {
LABEL_175:
                  if ( v5 != v14 - 1 )
                  {
                    *v14 = 0;
                    v3 = *++v7;
                    v6 = v7;
                    if ( *v7 )
                      goto LABEL_89;
                    goto LABEL_33;
                  }
                }
                else
                {
                  while ( 1 )
                  {
                    if ( !sub_BDB10(v15, 8) )
                    {
                      v3 = *++v7;
                      v6 = v7;
                      if ( v3 )
                        goto LABEL_89;
                      goto LABEL_33;
                    }
                    *v14-- = 0;
                    if ( v14 < v5 )
                      break;
                    v15 = (unsigned __int8)*v14;
                    if ( v15 == 34 )
                      goto LABEL_175;
                  }
                }
LABEL_169:
                v3 = *++v7;
                v5 = 0;
                v6 = v7;
                if ( v3 )
                  goto LABEL_89;
                goto LABEL_33;
              case 2:
                if ( v3 == 59 )
                  goto LABEL_93;
                break;
              case 3:
                goto LABEL_57;
              case 4:
                goto LABEL_122;
            }
            do
            {
              if ( v3 == 40 )
              {
                v50 = *++v7;
                if ( v50 )
                {
                  v54 = v50 == 13;
                  if ( v50 != 13 )
                    v54 = v50 == 10;
                  if ( !v54 )
                  {
                    v2 = 2;
                    goto LABEL_127;
                  }
                }
                goto LABEL_133;
              }
              v36 = *++v7;
              v3 = v36;
              if ( !v36 )
                goto LABEL_33;
LABEL_89:
              v37 = v3 == 13;
              if ( v3 != 13 )
                v37 = v3 == 10;
              if ( v37 )
                goto LABEL_33;
            }
            while ( v3 != 59 );
LABEL_93:
            *v7 = 0;
            v38 = *v6;
            if ( *v6 )
            {
              while ( v38 != 34 )
              {
                if ( !sub_BDB10(v38, 8) )
                  goto LABEL_100;
                v39 = *++v6;
                v38 = v39;
                if ( !v39 )
                  goto LABEL_173;
              }
              if ( !v6[1] )
                goto LABEL_173;
              if ( !++v6 )
                goto LABEL_173;
LABEL_100:
              v40 = strlen((const char *)v6) - 1;
              v41 = &v6[v40];
              if ( __CFADD__(v6, v40) )
                goto LABEL_173;
              v42 = v6[v40];
              if ( v42 == 34 )
              {
LABEL_178:
                if ( v6 == v41 - 1 )
                  goto LABEL_173;
                *v41 = 0;
              }
              else
              {
                while ( sub_BDB10(v42, 8) )
                {
                  *v41-- = 0;
                  if ( v41 < v6 )
                    goto LABEL_173;
                  v42 = *v41;
                  if ( v42 == 34 )
                    goto LABEL_178;
                }
              }
            }
            else
            {
LABEL_173:
              v6 = 0;
            }
            v43 = (int **)sub_171730(v5, (char *)v6);
            v1 = v43;
            if ( !v43 )
              goto LABEL_51;
            if ( !sub_10BD3C(v63, (int)v43) )
              goto LABEL_48;
            v3 = v7[1];
            v6 = v7 + 1;
            if ( !v7[1] )
            {
LABEL_168:
              v7 = v6;
              goto LABEL_133;
            }
LABEL_109:
            v44 = v3 == 13;
            if ( v3 != 13 )
              v44 = v3 == 10;
            if ( v44 )
              goto LABEL_168;
            v7 = v6;
LABEL_57:
            while ( v3 != 61 )
            {
              v24 = *++v7;
              v3 = v24;
              if ( v24 )
              {
                v25 = v3 == 13;
                if ( v3 != 13 )
                  v25 = v3 == 10;
                if ( !v25 )
                  continue;
              }
              goto LABEL_133;
            }
            *v7 = 0;
            v26 = *v6;
            if ( !*v6 )
              goto LABEL_171;
            while ( v26 != 34 )
            {
              if ( !sub_BDB10(v26, 8) )
                goto LABEL_65;
              v27 = *++v6;
              v26 = v27;
              if ( !v27 )
                goto LABEL_171;
            }
            if ( !v6[1] || (++v6, !v6) )
            {
LABEL_171:
              v3 = v7[1];
              v6 = v7 + 1;
              v5 = 0;
              ++v7;
              if ( v3 )
                goto LABEL_119;
              goto LABEL_72;
            }
LABEL_65:
            v5 = (char *)v6;
            v28 = strlen((const char *)v6) - 1;
            v13 = __CFADD__(v6, v28);
            v29 = (char *)&v6[v28];
            if ( v13 )
              goto LABEL_171;
            v30 = (unsigned __int8)v5[v28];
            if ( v30 != 34 )
            {
              while ( sub_BDB10(v30, 8) )
              {
                *v29-- = 0;
                if ( v29 < v5 )
                  goto LABEL_171;
                v30 = (unsigned __int8)*v29;
                if ( v30 == 34 )
                  goto LABEL_182;
              }
              v3 = v7[1];
              v6 = ++v7;
              if ( v3 )
                goto LABEL_119;
LABEL_72:
              v31 = *v6;
              if ( *v6 )
              {
                while ( v31 != 34 )
                {
                  if ( !sub_BDB10(v31, 8) )
                    goto LABEL_79;
                  v32 = *++v6;
                  v31 = v32;
                  if ( !v32 )
                    goto LABEL_186;
                }
                if ( !v6[1] )
                  goto LABEL_186;
                if ( !++v6 )
                  goto LABEL_186;
LABEL_79:
                v33 = strlen((const char *)v6) - 1;
                v34 = &v6[v33];
                if ( __CFADD__(v6, v33) )
                  goto LABEL_186;
                v35 = v6[v33];
                if ( v35 == 34 )
                {
LABEL_190:
                  if ( v6 == v34 - 1 )
                    goto LABEL_186;
                  *v34 = 0;
                  sub_1717F0(v1 + 2, v5, (char *)v6);
                }
                else
                {
                  while ( sub_BDB10(v35, 8) )
                  {
                    *v34-- = 0;
                    if ( v34 < v6 )
                      goto LABEL_186;
                    v35 = *v34;
                    if ( v35 == 34 )
                      goto LABEL_190;
                  }
                  sub_1717F0(v1 + 2, v5, (char *)v6);
                }
              }
              else
              {
LABEL_186:
                sub_1717F0(v1 + 2, v5, 0);
              }
              goto LABEL_133;
            }
LABEL_182:
            if ( v5 == v29 - 1 )
              goto LABEL_171;
            *v29 = 0;
            v6 = v7 + 1;
            v3 = *++v7;
            if ( !v3 )
              goto LABEL_72;
            while ( 1 )
            {
              while ( 1 )
              {
LABEL_119:
                v48 = v3 == 13;
                if ( v3 != 13 )
                  v48 = v3 == 10;
                if ( v48 )
                  goto LABEL_72;
LABEL_122:
                if ( v3 == 59 )
                {
                  *v7 = 0;
                  v56 = *v6;
                  if ( *v6 )
                  {
                    while ( v56 != 34 )
                    {
                      if ( !sub_BDB10(v56, 8) )
                        goto LABEL_161;
                      v57 = *++v6;
                      v56 = v57;
                      if ( !v57 )
                        goto LABEL_174;
                    }
                    if ( !v6[1] )
                      goto LABEL_174;
                    if ( !++v6 )
                      goto LABEL_174;
LABEL_161:
                    v58 = strlen((const char *)v6) - 1;
                    v59 = &v6[v58];
                    if ( __CFADD__(v6, v58) )
                      goto LABEL_174;
                    v60 = v6[v58];
                    if ( v60 == 34 )
                    {
LABEL_180:
                      if ( v6 == v59 - 1 )
                        goto LABEL_174;
                      *v59 = 0;
                    }
                    else
                    {
                      while ( sub_BDB10(v60, 8) )
                      {
                        *v59-- = 0;
                        if ( v59 < v6 )
                          goto LABEL_174;
                        v60 = *v59;
                        if ( v60 == 34 )
                          goto LABEL_180;
                      }
                    }
                  }
                  else
                  {
LABEL_174:
                    v6 = 0;
                  }
                  v61 = (char *)v6;
                  v6 = v7 + 1;
                  sub_1717F0(v1 + 2, v5, v61);
                  v3 = v7[1];
                  if ( !v7[1] )
                    goto LABEL_168;
                  goto LABEL_109;
                }
                if ( v3 != 34 )
                  break;
                v45 = *++v7;
                if ( !v45 )
                  goto LABEL_133;
                while ( 1 )
                {
                  v47 = v45 == 13;
                  if ( v45 != 13 )
                    v47 = v45 == 10;
                  if ( v47 )
                    goto LABEL_133;
                  if ( v45 == 34 )
                    break;
                  v46 = *++v7;
                  v45 = v46;
                  if ( !v46 )
                    goto LABEL_133;
                }
                v3 = *++v7;
                if ( !v3 )
                  goto LABEL_72;
              }
              if ( v3 == 40 )
                break;
              v49 = *++v7;
              v3 = v49;
              if ( !v49 )
                goto LABEL_72;
            }
            v50 = *++v7;
            if ( !v50 )
              goto LABEL_133;
            v55 = v50 == 13;
            if ( v50 != 13 )
              v55 = v50 == 10;
            if ( v55 )
              goto LABEL_133;
            v2 = 4;
LABEL_127:
            while ( v50 != 41 )
            {
              v51 = *++v7;
              v50 = v51;
              if ( v51 )
              {
                v52 = v50 == 13;
                if ( v50 != 13 )
                  v52 = v50 == 10;
                if ( !v52 )
                  continue;
              }
              goto LABEL_133;
            }
            v3 = *++v7;
            if ( !v3 )
              break;
            v53 = v3 == 13;
            if ( v3 != 13 )
              v53 = v3 == 10;
          }
          while ( !v53 );
          if ( v2 != 2 )
            goto LABEL_72;
LABEL_33:
          v16 = *v6;
          if ( *v6 )
          {
            while ( v16 != 34 )
            {
              if ( !sub_BDB10(v16, 8) )
                goto LABEL_40;
              v17 = *++v6;
              v16 = v17;
              if ( !v17 )
                goto LABEL_185;
            }
            if ( !v6[1] )
              goto LABEL_185;
            if ( !++v6 )
              goto LABEL_185;
LABEL_40:
            v18 = strlen((const char *)v6) - 1;
            v19 = &v6[v18];
            if ( __CFADD__(v6, v18) )
              goto LABEL_185;
            v20 = v6[v18];
            if ( v20 == 34 )
            {
LABEL_187:
              if ( v6 == v19 - 1 )
                goto LABEL_185;
              *v19 = 0;
            }
            else
            {
              while ( sub_BDB10(v20, 8) )
              {
                *v19-- = 0;
                if ( v19 < v6 )
                  goto LABEL_185;
                v20 = *v19;
                if ( v20 == 34 )
                  goto LABEL_187;
              }
            }
          }
          else
          {
LABEL_185:
            v6 = 0;
          }
          v21 = (int **)sub_171730(v5, (char *)v6);
          v1 = v21;
          if ( v21 )
          {
            if ( sub_10BD3C(v63, (int)v21) )
              goto LABEL_133;
LABEL_48:
            CRYPTO_free(*v1);
            CRYPTO_free(v1[1]);
            v22 = (int)v1[2];
            if ( v22 )
              sub_10BFDC(v22, (void (__fastcall *)(int))sub_1714F4);
            CRYPTO_free(v1);
          }
LABEL_51:
          sub_10BFDC((int)v63, sub_171570);
          return 0;
        }
      }
      v7 = v64;
LABEL_133:
      if ( v7 == v64 )
        return v63;
    }
  }
  return v63;
}
