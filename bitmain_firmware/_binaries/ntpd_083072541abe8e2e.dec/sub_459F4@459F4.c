int __fastcall sub_459F4(int *a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  int v5; // lr
  int v6; // r4
  unsigned int v7; // r12
  int v8; // r10
  int v9; // r12
  int v10; // r6
  int v11; // r12
  int v12; // r4
  int v13; // r4
  int v14; // r7
  unsigned int v15; // r4
  int v16; // r12
  int v17; // r5
  int v18; // t1
  unsigned int v19; // r9
  unsigned int v20; // r5
  bool v21; // cc
  int v23; // r12
  int v24; // r1
  int v25; // r2
  int j; // r3
  int v27; // r4
  int v28; // r5
  _DWORD *i; // r12
  int v30; // r12
  int v31; // r4
  unsigned int v32; // r12
  int v33; // r5
  unsigned int v34; // t1
  unsigned int v35; // r12
  int v36; // r5
  int v37; // r6
  _DWORD *v38; // r7
  unsigned int v39; // r5
  int v40; // r6
  _DWORD *v41; // r4
  bool v42; // zf
  int v43; // r6
  int v44; // r4
  unsigned int v45; // r4
  int v46; // lr
  int v47; // r5
  _DWORD *v48; // r4

  v5 = *a1;
  v6 = 0;
  if ( a3 > *a1 )
  {
    v7 = *(unsigned __int8 *)(a2 + v5);
    if ( *(_BYTE *)(a2 + v5) )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v7 == 44 )
        {
          v9 = *a1;
          if ( a4 && (unsigned int)(*(_DWORD *)(a4 + 20 * a1[2]) - 1) > 1 )
            a1[2] = *(_DWORD *)(a4 + 20 * a1[2] + 16);
LABEL_8:
          v5 = v9 + 1;
          *a1 = v9 + 1;
          if ( v9 + 1 >= a3 )
            goto LABEL_41;
          goto LABEL_9;
        }
        if ( v7 > 0x2C )
        {
          if ( v7 != 93 )
          {
            if ( v7 <= 0x5D )
            {
              if ( v7 == 58 )
              {
                v9 = *a1;
                a1[2] = a1[1] - 1;
                goto LABEL_8;
              }
              if ( v7 != 91 )
              {
LABEL_63:
                v31 = *a1;
                if ( a3 > *a1 )
                {
                  v32 = *(unsigned __int8 *)(a2 + v31);
                  v33 = a2 + v31;
                  if ( *(_BYTE *)(a2 + v31) )
                  {
                    while ( v32 != 32 )
                    {
                      if ( v32 <= 0x20 )
                      {
                        if ( v32 >= 9 && (v32 <= 0xA || v32 == 13) )
                          break;
                      }
                      else
                      {
                        if ( v32 == 58 )
                          break;
                        if ( v32 > 0x3A )
                        {
                          if ( v32 == 93 || v32 == 125 )
                            break;
                        }
                        else if ( v32 == 44 )
                        {
                          break;
                        }
                      }
                      if ( v32 - 32 > 0x5E )
                      {
LABEL_35:
                        v6 = -2;
                        *a1 = v5;
                        return v6;
                      }
                      *a1 = ++v31;
                      if ( a3 != v31 )
                      {
                        v34 = *(unsigned __int8 *)++v33;
                        v32 = v34;
                        if ( v34 )
                          continue;
                      }
                      break;
                    }
                  }
                }
                if ( a4 )
                {
                  v35 = a1[1];
                  if ( a5 <= v35 )
                    goto LABEL_110;
                  v36 = a1[2];
                  v37 = 5 * v35;
                  v38 = (_DWORD *)(a4 + 20 * v35);
                  a1[1] = v35 + 1;
                  v38[3] = 0;
                  v9 = v31 - 1;
                  *(_DWORD *)(a4 + 4 * v37) = 0;
                  ++v8;
                  v38[1] = v5;
                  if ( v36 != -1 )
                    v5 = 5 * v36;
                  v38[2] = v31;
                  if ( v36 != -1 )
                    v5 = a4 + 4 * v5;
                  v38[4] = v36;
                  *a1 = v9;
                  if ( v36 != -1 )
                    ++*(_DWORD *)(v5 + 12);
                }
                else
                {
                  v9 = v31 - 1;
                  ++v8;
                }
                goto LABEL_8;
              }
LABEL_91:
              ++v8;
              if ( a4 )
              {
                v39 = a1[1];
                if ( a5 <= v39 )
                  return -1;
                v40 = a1[2];
                v41 = (_DWORD *)(a4 + 20 * v39);
                a1[1] = v39 + 1;
                v41[2] = -1;
                v41[1] = -1;
                v41[3] = 0;
                v41[4] = -1;
                if ( v40 != -1 )
                {
                  ++*(_DWORD *)(a4 + 20 * v40 + 12);
                  v41[4] = v40;
                }
                v42 = v7 == 123;
                v9 = *a1;
                if ( v42 )
                  v43 = 1;
                else
                  v43 = 2;
                *(_DWORD *)(a4 + 20 * v39) = v43;
                v41[1] = v5;
                a1[2] = v39;
                goto LABEL_8;
              }
              goto LABEL_39;
            }
            if ( v7 == 123 )
              goto LABEL_91;
            if ( v7 != 125 )
              goto LABEL_63;
          }
          if ( a4 )
          {
            v27 = a1[1];
            if ( v7 == 125 )
              v28 = 1;
            else
              v28 = 2;
            if ( !v27 )
              return -2;
            for ( i = (_DWORD *)(a4 + 20 * v27 - 20); i[1] == -1 || i[2] != -1; i = (_DWORD *)(a4 + 20 * v30) )
            {
              v30 = i[4];
              if ( v30 == -1 )
              {
                v23 = *a1;
                goto LABEL_40;
              }
            }
            if ( *i != v28 )
              return -2;
            v44 = i[4];
            i[2] = v5 + 1;
            v9 = *a1;
            a1[2] = v44;
            goto LABEL_8;
          }
        }
        else if ( v7 != 13 )
        {
          if ( v7 <= 0xD )
          {
            if ( v7 - 9 > 1 )
              goto LABEL_63;
          }
          else if ( v7 != 32 )
          {
            if ( v7 != 34 )
              goto LABEL_63;
            v10 = v5 + 1;
            *a1 = v5 + 1;
            v11 = v5 + 1;
            if ( a3 <= v5 + 1 || (v12 = *(unsigned __int8 *)(a2 + v10), !*(_BYTE *)(a2 + v10)) )
            {
LABEL_34:
              *a1 = v5;
              return -3;
            }
            while ( v12 != 34 )
            {
              if ( v12 == 92 && (v13 = v11 + 1, a3 > v11 + 1) )
              {
                *a1 = v13;
                v14 = a2 + v13;
                switch ( *(_BYTE *)(a2 + v13) )
                {
                  case '"':
                  case '/':
                  case '\\':
                  case 'b':
                  case 'f':
                  case 'n':
                  case 'r':
                  case 't':
                    goto LABEL_20;
                  case 'u':
                    v15 = v11 + 2;
                    v16 = v11 + 6;
                    *a1 = v15;
                    break;
                  default:
                    goto LABEL_35;
                }
                do
                {
                  if ( a3 == v15 )
                    break;
                  v18 = *(unsigned __int8 *)++v14;
                  v17 = v18;
                  if ( !v18 )
                    break;
                  v19 = v17 & 0xFFFFFFDF;
                  v20 = v17 - 48;
                  v19 -= 65;
                  v21 = v19 > 5;
                  if ( v19 > 5 )
                    v21 = v20 > 9;
                  if ( v21 )
                    goto LABEL_35;
                  *a1 = ++v15;
                }
                while ( v15 != v16 );
                v11 = v15;
                *a1 = v15;
                if ( a3 <= v15 )
                  goto LABEL_34;
              }
              else
              {
                v13 = *a1;
LABEL_20:
                v11 = v13 + 1;
                *a1 = v13 + 1;
                if ( a3 <= v13 + 1 )
                  goto LABEL_34;
              }
              v12 = *(unsigned __int8 *)(a2 + v11);
              if ( !*(_BYTE *)(a2 + v11) )
                goto LABEL_34;
            }
            if ( a4 )
            {
              v45 = a1[1];
              if ( a5 <= v45 )
              {
LABEL_110:
                *a1 = v5;
                return -1;
              }
              v46 = a1[2];
              v47 = 5 * v45;
              a1[1] = v45 + 1;
              v48 = (_DWORD *)(a4 + 20 * v45);
              v48[3] = 0;
              ++v8;
              *(_DWORD *)(a4 + 4 * v47) = 3;
              v48[1] = v10;
              v48[2] = v11;
              v48[4] = v46;
              if ( v46 != -1 )
              {
                v9 = *a1;
                ++*(_DWORD *)(a4 + 20 * v46 + 12);
                goto LABEL_8;
              }
            }
            else
            {
              ++v8;
            }
          }
        }
LABEL_39:
        v23 = *a1;
LABEL_40:
        v5 = v23 + 1;
        *a1 = v23 + 1;
        if ( v23 + 1 >= a3 )
        {
LABEL_41:
          v6 = v8;
          break;
        }
LABEL_9:
        v7 = *(unsigned __int8 *)(a2 + v5);
        if ( !*(_BYTE *)(a2 + v5) )
          goto LABEL_41;
      }
    }
  }
  if ( a4 )
  {
    v24 = a1[1];
    v25 = v24 - 1;
    if ( v24 - 1 >= 0 )
    {
      for ( j = a4 + 20 * v24; *(_DWORD *)(j - 16) == -1 || *(_DWORD *)(j - 12) != -1; j -= 20 )
      {
        if ( --v25 == -1 )
          return v6;
      }
      return -3;
    }
  }
  return v6;
}
