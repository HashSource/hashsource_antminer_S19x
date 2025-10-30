int __fastcall sub_46890(unsigned int *a1, int a2, unsigned int a3, int a4, unsigned int a5)
{
  unsigned int v5; // lr
  unsigned int v6; // r12
  unsigned int v7; // r12
  unsigned int v8; // r6
  unsigned int v9; // r12
  int v10; // r5
  unsigned int v11; // r5
  int v12; // r8
  unsigned int v13; // r7
  int v14; // r5
  int v15; // t1
  unsigned int v16; // r9
  unsigned int v17; // r5
  bool v18; // cc
  unsigned int v20; // r12
  unsigned int v21; // r1
  unsigned int v22; // r2
  int j; // r3
  unsigned int v24; // r5
  int v25; // r6
  _DWORD *i; // r12
  int v27; // r5
  unsigned int v28; // r7
  unsigned int v29; // r9
  _DWORD *v30; // r6
  bool v31; // zf
  int v32; // r8
  _DWORD *v33; // lr
  unsigned int v34; // r6
  unsigned int v35; // r12
  int v36; // r5
  unsigned int v37; // t1
  unsigned int v38; // r12
  unsigned int v39; // r5
  _DWORD *v40; // r7
  int v41; // lr
  unsigned int v42; // r5
  unsigned int v43; // r7
  _DWORD *v44; // lr
  int v45; // r4

  v5 = *a1;
  if ( a3 > *a1 )
  {
    v6 = *(unsigned __int8 *)(a2 + v5);
    if ( !*(_BYTE *)(a2 + v5) )
    {
      v45 = *(unsigned __int8 *)(a2 + v5);
      goto LABEL_40;
    }
    v45 = 0;
    while ( 1 )
    {
      if ( v6 == 44 )
      {
        if ( a4 )
        {
          v33 = (_DWORD *)(a4 + 20 * a1[2]);
          if ( (unsigned int)(*v33 - 1) > 1 )
          {
            v7 = *a1;
            a1[2] = v33[4];
            goto LABEL_9;
          }
        }
      }
      else if ( v6 > 0x2C )
      {
        if ( v6 == 93 )
          goto LABEL_52;
        if ( v6 > 0x5D )
        {
          if ( v6 != 123 )
          {
            if ( v6 != 125 )
              goto LABEL_76;
LABEL_52:
            if ( a4 )
            {
              v24 = a1[1];
              if ( v6 == 125 )
                v25 = 1;
              else
                v25 = 2;
              if ( !v24 )
                return -2;
              for ( i = (_DWORD *)(a4 + 20 * v24 - 20); i[1] == -1 || i[2] != -1; i = (_DWORD *)(a4 + 20 * v27) )
              {
                v27 = i[4];
                if ( v27 == -1 )
                {
                  v20 = *a1;
                  goto LABEL_39;
                }
              }
              if ( v25 != *i )
                return -2;
              v42 = i[4];
              i[2] = v5 + 1;
              v7 = *a1;
              a1[2] = v42;
              goto LABEL_9;
            }
            goto LABEL_38;
          }
        }
        else
        {
          if ( v6 == 58 )
          {
            v7 = *a1;
            a1[2] = a1[1] - 1;
            goto LABEL_9;
          }
          if ( v6 != 91 )
            goto LABEL_76;
        }
        ++v45;
        if ( a4 )
        {
          v28 = a1[1];
          if ( a5 <= v28 )
            return -1;
          v29 = a1[2];
          v30 = (_DWORD *)(a4 + 20 * v28);
          a1[1] = v28 + 1;
          v30[2] = -1;
          v30[1] = -1;
          v30[3] = 0;
          v30[4] = -1;
          if ( v29 != -1 )
          {
            ++*(_DWORD *)(a4 + 20 * v29 + 12);
            v30[4] = v29;
          }
          v31 = v6 == 123;
          v7 = *a1;
          if ( v31 )
            v32 = 1;
          else
            v32 = 2;
          *(_DWORD *)(a4 + 20 * v28) = v32;
          v30[1] = v5;
          a1[2] = v28;
          goto LABEL_9;
        }
      }
      else if ( v6 != 13 )
      {
        if ( v6 <= 0xD )
        {
          if ( v6 - 9 > 1 )
          {
LABEL_76:
            v34 = *a1;
            if ( a3 > *a1 )
            {
              v35 = *(unsigned __int8 *)(a2 + v34);
              v36 = a2 + v34;
              if ( *(_BYTE *)(a2 + v34) )
              {
                while ( v35 != 32 )
                {
                  if ( v35 <= 0x20 )
                  {
                    if ( v35 >= 9 && (v35 <= 0xA || v35 == 13) )
                      break;
                  }
                  else
                  {
                    if ( v35 == 58 )
                      break;
                    if ( v35 > 0x3A )
                    {
                      if ( v35 == 93 || v35 == 125 )
                        break;
                    }
                    else if ( v35 == 44 )
                    {
                      break;
                    }
                  }
                  if ( v35 - 32 > 0x5E )
                  {
LABEL_34:
                    v45 = -2;
                    *a1 = v5;
                    return v45;
                  }
                  *a1 = ++v34;
                  if ( a3 > v34 )
                  {
                    v37 = *(unsigned __int8 *)++v36;
                    v35 = v37;
                    if ( v37 )
                      continue;
                  }
                  break;
                }
              }
            }
            if ( a4 )
            {
              v38 = a1[1];
              if ( a5 <= v38 )
                goto LABEL_99;
              v39 = a1[2];
              ++v45;
              v40 = (_DWORD *)(a4 + 20 * v38);
              a1[1] = v38 + 1;
              *v40 = 0;
              v40[1] = v5;
              v7 = v34 - 1;
              v40[2] = v34;
              v40[4] = v39;
              v40[3] = 0;
              *a1 = v34 - 1;
              if ( v39 != -1 )
              {
                v41 = 16 * v39;
                goto LABEL_95;
              }
            }
            else
            {
              v7 = v34 - 1;
              ++v45;
            }
LABEL_9:
            v5 = v7 + 1;
            *a1 = v7 + 1;
            if ( a3 <= v7 + 1 )
              goto LABEL_40;
            goto LABEL_10;
          }
        }
        else if ( v6 != 32 )
        {
          if ( v6 != 34 )
            goto LABEL_76;
          v8 = v5 + 1;
          *a1 = v5 + 1;
          v9 = v5 + 1;
          if ( a3 <= v5 + 1 || (v10 = *(unsigned __int8 *)(a2 + v8), !*(_BYTE *)(a2 + v8)) )
          {
LABEL_49:
            *a1 = v5;
            return -3;
          }
          while ( v10 != 34 )
          {
            if ( v10 == 92 && (v11 = v9 + 1, a3 > v9 + 1) )
            {
              *a1 = v11;
              v12 = a2 + v11;
              switch ( *(_BYTE *)(a2 + v11) )
              {
                case '"':
                case '/':
                case '\\':
                case 'b':
                case 'f':
                case 'n':
                case 'r':
                case 't':
                  goto LABEL_21;
                case 'u':
                  v13 = v9 + 2;
                  v9 += 6;
                  *a1 = v13;
                  break;
                default:
                  goto LABEL_34;
              }
              while ( 1 )
              {
                if ( v13 == a3 )
                {
                  v9 = a3;
                  goto LABEL_48;
                }
                v15 = *(unsigned __int8 *)++v12;
                v14 = v15;
                if ( !v15 )
                  break;
                v16 = v14 & 0xFFFFFFDF;
                v17 = v14 - 48;
                v16 -= 65;
                v18 = v16 > 5;
                if ( v16 > 5 )
                  v18 = v17 > 9;
                if ( v18 )
                  goto LABEL_34;
                *a1 = ++v13;
                if ( v13 == v9 )
                  goto LABEL_48;
              }
              v9 = v13;
LABEL_48:
              *a1 = v9;
              if ( a3 <= v9 )
                goto LABEL_49;
            }
            else
            {
              v11 = *a1;
LABEL_21:
              v9 = v11 + 1;
              *a1 = v11 + 1;
              if ( a3 <= v11 + 1 )
                goto LABEL_49;
            }
            v10 = *(unsigned __int8 *)(a2 + v9);
            if ( !*(_BYTE *)(a2 + v9) )
              goto LABEL_49;
          }
          if ( a4 )
          {
            v43 = a1[1];
            if ( a5 <= v43 )
            {
LABEL_99:
              v45 = -1;
              *a1 = v5;
              return v45;
            }
            v39 = a1[2];
            ++v45;
            v44 = (_DWORD *)(a4 + 20 * v43);
            a1[1] = v43 + 1;
            *v44 = 3;
            v44[1] = v8;
            v44[2] = v9;
            v44[4] = v39;
            v44[3] = 0;
            if ( v39 != -1 )
            {
              v41 = 16 * v39;
              v7 = *a1;
LABEL_95:
              ++*(_DWORD *)(a4 + v41 + 4 * v39 + 12);
              goto LABEL_9;
            }
          }
          else
          {
            ++v45;
          }
        }
      }
LABEL_38:
      v20 = *a1;
LABEL_39:
      v5 = v20 + 1;
      *a1 = v20 + 1;
      if ( a3 <= v20 + 1 )
        goto LABEL_40;
LABEL_10:
      v6 = *(unsigned __int8 *)(a2 + v5);
      if ( !*(_BYTE *)(a2 + v5) )
        goto LABEL_40;
    }
  }
  v45 = 0;
LABEL_40:
  if ( !a4 )
    return v45;
  v21 = a1[1];
  v22 = v21 - 1;
  if ( (int)(v21 - 1) < 0 )
    return v45;
  for ( j = a4 + 20 * v21; *(_DWORD *)(j - 16) == -1 || *(_DWORD *)(j - 12) != -1; j -= 20 )
  {
    if ( --v22 == -1 )
      return v45;
  }
  return -3;
}
