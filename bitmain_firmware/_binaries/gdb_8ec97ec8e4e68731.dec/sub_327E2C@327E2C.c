int __fastcall sub_327E2C(int a1, char *a2, char a3)
{
  __int64 v3; // r4
  int v5; // r3
  int v6; // r8
  unsigned int v7; // r3
  char v8; // r0
  int v9; // r9
  unsigned int v10; // r7
  int v11; // r0
  unsigned __int16 *v12; // lr
  int v13; // r0
  bool v14; // cc
  int result; // r0
  unsigned int v16; // r2
  unsigned __int16 *v17; // r8
  int v18; // r8
  int v19; // r12
  int v20; // r12
  unsigned int v21; // r3
  int v22; // r2
  int v23; // r4
  __int64 v24; // r4
  int v25; // r8
  bool v26; // zf
  int v27; // r5
  int v28; // r2
  unsigned int v29; // r4
  unsigned int v30; // r2
  unsigned int v31; // r4
  bool v32; // cf
  bool v33; // cf
  unsigned int v34; // r2
  char *v35; // lr
  int v36; // r4
  unsigned int *v37; // r5
  unsigned int v38; // r12
  unsigned int v39; // t1
  unsigned int v40; // r3
  unsigned int v41; // r12
  bool v42; // cc
  bool v43; // cf
  unsigned int v44; // r3
  char *v45; // r2
  int v46; // r2
  unsigned int v47; // r4
  unsigned int v48; // r2
  unsigned int v49; // r4
  bool v50; // cf
  bool v51; // cf
  unsigned int v52; // r2
  char *v53; // r5
  bool v54; // nf
  _DWORD *v55; // lr
  char v56; // r2
  char v57; // r2
  int v58; // r7
  int v59; // t1
  unsigned int v60; // r3
  int v61; // r0
  unsigned int v62; // r7
  bool v63; // cc
  unsigned int v64; // r7
  bool v65; // cf
  unsigned int v66; // r3
  char v67; // r2
  int v68; // r2
  unsigned int v69; // r4
  unsigned int v70; // r2
  unsigned int v71; // r4
  bool v72; // cf
  bool v73; // cf
  unsigned int v74; // r2

  v5 = *(_DWORD *)a1;
  v6 = *(_DWORD *)(a1 + 4);
  if ( *(int *)a1 > 49 )
  {
    v3 = 2863311531LL * (unsigned int)(v5 + 2);
    v7 = (HIDWORD(v3) & 0xFFFFFFFE) - 2;
  }
  else
  {
    v7 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v5) + 0x7FFFFFFF);
  }
  v8 = *(_BYTE *)(a1 + 8);
  if ( (*(_BYTE *)(a1 + 8) & 0x80) != 0 )
  {
    *a2++ = 45;
    v8 = *(_BYTE *)(a1 + 8);
  }
  if ( (v8 & 0x70) == 0 )
  {
    v9 = *(_DWORD *)a1;
    goto LABEL_7;
  }
  if ( (v8 & 0x40) != 0 )
  {
    strcpy(a2, "Inf");
    strcpy(a2 + 3, "inity");
    return 1953066601;
  }
  else
  {
    if ( (v8 & 0x10) != 0 )
      *a2++ = 115;
    result = *(_DWORD *)"NaN";
    strcpy(a2, "NaN");
    a2 += 3;
    if ( !v6 )
    {
      result = *(unsigned __int16 *)(a1 + 10);
      v9 = *(_DWORD *)a1;
      if ( *(_WORD *)(a1 + 10) || v9 != 1 )
      {
LABEL_7:
        v10 = a1 + 10;
        if ( v9 <= 49 )
        {
          v11 = 35608;
        }
        else
        {
          v11 = -1431655765;
          LODWORD(v3) = v9 + 2;
        }
        if ( v9 <= 49 )
        {
          HIWORD(v11) = 67;
          v11 += v9;
        }
        else
        {
          v3 = (unsigned int)v3 * (unsigned __int64)(unsigned int)v11;
        }
        v12 = (unsigned __int16 *)(v10 + v7);
        if ( v9 > 49 )
          v13 = HIDWORD(v3) >> 1;
        else
          v13 = *(unsigned __int8 *)(v11 + 20);
        v14 = v6 <= 0;
        result = v9 - 3 * (v13 - 1) - 1;
        if ( !v6 )
        {
          if ( v10 <= (unsigned int)v12 )
          {
            if ( result < 0 )
              goto LABEL_61;
            v16 = *v12;
            v17 = (unsigned __int16 *)(v10 + v7);
            while ( 1 )
            {
              v35 = a2 - 1;
              v36 = result;
              v37 = &dword_438D00[result];
              do
              {
                *++v35 = 48;
                v39 = *v37--;
                v38 = v39;
                v40 = 2 * v39;
                if ( 2 * v39 < v16 )
                {
                  v41 = 8 * v38;
                  v40 &= 0x3FFFFFFFu;
                  v42 = v41 > v16;
                  if ( v41 <= v16 )
                    v16 -= v41;
                  v38 = v41 >> 1;
                  if ( !v42 )
                    *v35 = 56;
                  if ( v16 >= v38 )
                  {
                    v16 -= v38;
                    LOBYTE(v38) = *v35 + 4;
                    *v35 = v38;
                  }
                }
                v43 = v16 >= v40;
                if ( v16 >= v40 )
                {
                  LOBYTE(v38) = *v35;
                  v16 -= v40;
                }
                v44 = v40 >> 1;
                if ( v43 )
                  *v35 = v38 + 2;
                if ( v16 >= v44 )
                {
                  v16 -= v44;
                  ++*v35;
                }
                v32 = v36-- != 0;
              }
              while ( v32 );
              ++result;
              v12 = v17;
              a2 += result;
LABEL_61:
              v17 = v12 - 1;
              if ( v10 > (unsigned int)(v12 - 1) )
                break;
              v16 = *(v12 - 1);
              result = 2;
            }
          }
LABEL_79:
          *a2 = 0;
          return result;
        }
        v18 = v9 + v6;
        v19 = !v14;
        v20 = v19 | (v18 < -5);
        v21 = *(unsigned __int16 *)(v10 + v7);
        if ( !v20 )
          goto LABEL_83;
        if ( v18 == 1 )
          v22 = 0;
        else
          v22 = a3 & 1;
        v20 = v18 - 1;
        if ( v22 )
        {
          LOWORD(v23) = 21846;
          if ( v20 < 0 )
          {
            HIWORD(v23) = 21845;
            v25 = 1 - v18 - 3 * (((unsigned __int64)((1 - v18) * (__int64)v23) >> 32) - ((1 - v18) >> 31));
            if ( v25 )
            {
              v25 = 3 - v25;
              v20 -= v25;
            }
          }
          else
          {
            HIWORD(v23) = 21845;
            v24 = v20 * (__int64)v23;
            v25 = v20 - 3 * (HIDWORD(v24) - (v20 >> 31));
            v20 = 3 * (HIDWORD(v24) - (v20 >> 31));
          }
          v26 = v9 == 1;
          if ( v9 == 1 )
            v26 = *(unsigned __int16 *)(a1 + 10) == 0;
          if ( !v26 || (*(_BYTE *)(a1 + 8) & 0x70) != 0 )
          {
            v18 = v25 + 1;
LABEL_42:
            v27 = v18;
            while ( 1 )
            {
              if ( result >= 0 )
              {
                v28 = result--;
              }
              else
              {
                if ( (unsigned __int16 *)v10 == v12 )
                {
                  if ( *(_DWORD *)a1 > v18 )
                  {
LABEL_141:
                    *a2++ = 46;
                    while ( 1 )
                    {
                      if ( result >= 0 )
                      {
                        v68 = result--;
                      }
                      else
                      {
                        if ( (unsigned __int16 *)v10 == v12 )
                          goto LABEL_110;
                        v21 = *(v12 - 1);
                        result = 1;
                        --v12;
                        v68 = 2;
                      }
                      v69 = dword_438D00[v68];
                      *a2 = 48;
                      v70 = 2 * v69;
                      if ( v21 > 2 * v69 )
                      {
                        v71 = 8 * v69;
                        v70 &= 0x3FFFFFFFu;
                        v72 = v21 >= v71;
                        if ( v21 >= v71 )
                          v21 -= v71;
                        v69 = v71 >> 1;
                        if ( v72 )
                          *a2 = 56;
                        if ( v21 >= v69 )
                        {
                          v21 -= v69;
                          LOBYTE(v69) = *a2 + 4;
                          *a2 = v69;
                        }
                      }
                      v73 = v21 >= v70;
                      ++a2;
                      if ( v21 >= v70 )
                      {
                        LOBYTE(v69) = *(a2 - 1);
                        v21 -= v70;
                      }
                      v74 = v70 >> 1;
                      if ( v73 )
                        *(a2 - 1) = v69 + 2;
                      if ( v21 >= v74 )
                      {
                        v21 -= v74;
                        ++*(a2 - 1);
                      }
                    }
                  }
                  v53 = &a2[v27];
                  do
                    *a2++ = 48;
                  while ( a2 != v53 );
LABEL_110:
                  v54 = v20 < 0;
                  if ( !v20 )
                    goto LABEL_79;
                  v55 = &unk_438D28;
                  if ( v20 < 0 )
                    v20 = -v20;
                  *a2 = 69;
                  if ( v54 )
                    v56 = 45;
                  else
                    v56 = 43;
                  a2[1] = v56;
                  a2 += 2;
                  v57 = 0;
                  while ( 2 )
                  {
                    *a2 = 48;
                    v59 = *--v55;
                    v58 = v59;
                    v60 = 2 * v59;
                    if ( 2 * v59 < (unsigned int)v20 )
                    {
                      v62 = 8 * v58;
                      v60 &= 0x3FFFFFFFu;
                      v63 = v62 > v20;
                      if ( v62 <= v20 )
                        v20 -= v62;
                      v64 = v62 >> 1;
                      if ( v63 )
                      {
                        v61 = 48;
                      }
                      else
                      {
                        v61 = 56;
                        *a2 = 56;
                      }
                      if ( v20 >= v64 )
                      {
                        v20 -= v64;
                        v61 = (unsigned __int8)(v61 + 4);
                        *a2 = v61;
                      }
                    }
                    else
                    {
                      v61 = 48;
                    }
                    v65 = v20 >= v60;
                    if ( v20 >= v60 )
                    {
                      v20 -= v60;
                      v61 = (unsigned __int8)(v61 + 2);
                    }
                    v66 = v60 >> 1;
                    if ( v65 )
                      *a2 = v61;
                    if ( v20 >= v66 )
                    {
                      v20 -= v66;
                      result = v61 + 1;
                      *a2 = result;
                    }
                    else
                    {
                      v67 = v57 ^ 1;
                      if ( v61 == 48 )
                        result = v67 & 1;
                      else
                        result = 0;
                      if ( result )
                      {
                        v57 = 0;
LABEL_119:
                        if ( v55 == dword_438D00 )
                          goto LABEL_79;
                        continue;
                      }
                    }
                    break;
                  }
                  ++a2;
                  v57 = 1;
                  goto LABEL_119;
                }
                v21 = *(v12 - 1);
                result = 1;
                --v12;
                v28 = 2;
              }
              v29 = dword_438D00[v28];
              *a2 = 48;
              v30 = 2 * v29;
              if ( v21 > 2 * v29 )
              {
                v31 = 8 * v29;
                v30 &= 0x3FFFFFFFu;
                v32 = v21 >= v31;
                if ( v21 >= v31 )
                  v21 -= v31;
                v29 = v31 >> 1;
                if ( v32 )
                  *a2 = 56;
                if ( v21 >= v29 )
                {
                  v21 -= v29;
                  LOBYTE(v29) = *a2 + 4;
                  *a2 = v29;
                }
              }
              v33 = v21 >= v30;
              ++a2;
              if ( v21 >= v30 )
              {
                LOBYTE(v29) = *(a2 - 1);
                v21 -= v30;
              }
              v34 = v30 >> 1;
              if ( v33 )
                *(a2 - 1) = v29 + 2;
              if ( v21 >= v34 )
              {
                v21 -= v34;
                ++*(a2 - 1);
              }
              if ( !--v27 )
              {
                if ( v18 < *(_DWORD *)a1 )
                  goto LABEL_141;
                goto LABEL_110;
              }
            }
          }
          if ( v25 )
          {
            v20 += 3;
            v18 = v25 - 2;
LABEL_83:
            if ( v18 <= 0 )
            {
              v45 = a2 + 2;
              *a2 = 48;
              a2[1] = 46;
              if ( v18 )
              {
                a2 = &v45[-v18];
                do
                  *v45++ = 48;
                while ( v45 != a2 );
              }
              else
              {
                a2 += 2;
              }
              while ( 1 )
              {
                if ( result >= 0 )
                {
                  v46 = result--;
                }
                else
                {
                  if ( (unsigned __int16 *)v10 == v12 )
                    goto LABEL_110;
                  v21 = *(v12 - 1);
                  result = 1;
                  --v12;
                  v46 = 2;
                }
                v47 = dword_438D00[v46];
                *a2 = 48;
                v48 = 2 * v47;
                if ( v21 > 2 * v47 )
                {
                  v49 = 8 * v47;
                  v48 &= 0x3FFFFFFFu;
                  v50 = v21 >= v49;
                  if ( v21 >= v49 )
                    v21 -= v49;
                  v47 = v49 >> 1;
                  if ( v50 )
                    *a2 = 56;
                  if ( v21 >= v47 )
                  {
                    v21 -= v47;
                    LOBYTE(v47) = *a2 + 4;
                    *a2 = v47;
                  }
                }
                v51 = v21 >= v48;
                ++a2;
                if ( v21 >= v48 )
                {
                  LOBYTE(v47) = *(a2 - 1);
                  v21 -= v48;
                }
                v52 = v48 >> 1;
                if ( v51 )
                  *(a2 - 1) = v47 + 2;
                if ( v21 >= v52 )
                {
                  v21 -= v52;
                  ++*(a2 - 1);
                }
              }
            }
            goto LABEL_42;
          }
        }
        v18 = 1;
        goto LABEL_42;
      }
    }
  }
  return result;
}
