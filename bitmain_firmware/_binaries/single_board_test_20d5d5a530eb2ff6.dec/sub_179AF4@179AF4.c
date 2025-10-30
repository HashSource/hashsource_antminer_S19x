int __fastcall sub_179AF4(int a1, char *a2, void **a3, unsigned __int8 *a4)
{
  size_t *v6; // r6
  size_t v7; // r0
  int v8; // r3
  int v9; // r1
  int v10; // r5
  int v11; // r2
  __int16 v12; // r2
  int v13; // r8
  int i; // r0
  unsigned __int8 *v15; // r12
  __int16 v16; // lr
  int v17; // r12
  int j; // r0
  int v19; // r3
  int v20; // r2
  int v21; // r8
  char *v22; // r0
  char *v23; // r9
  int v24; // t1
  char *v25; // r3
  char *v26; // r10
  int v27; // r0
  char *v28; // r3
  char *v29; // r10
  const char *v30; // r2
  unsigned int v31; // r1
  const char *v32; // r2
  char v33; // r1
  int v34; // t1
  int v36; // r1
  char *v37; // lr
  int v38; // t1
  int v39; // r2
  int v40; // r0
  int v41; // r2
  int v42; // r0
  char *v43; // [sp+Ch] [bp-18h]
  char v44; // [sp+Ch] [bp-18h]
  const char *v45; // [sp+Ch] [bp-18h]
  char *v46; // [sp+Ch] [bp-18h]
  char v47; // [sp+10h] [bp-14h]
  char *v50; // [sp+1Ch] [bp-8h]

  v6 = (size_t *)sub_BADF8();
  if ( !v6 )
    return 0;
  v7 = strlen((const char *)a4);
  if ( !sub_BAE84(v6, v7 + 1) )
  {
LABEL_66:
    sub_BAE3C((int)v6);
    return 0;
  }
  v8 = *a4;
  v9 = *(_DWORD *)(a1 + 4);
  v10 = 0;
  v47 = 0;
  v11 = (char)v8;
LABEL_4:
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        if ( v11 < 0 )
          goto LABEL_26;
LABEL_5:
        v12 = *(_WORD *)(v9 + 2 * v8);
        if ( (v12 & 0x40) != 0 )
        {
          v13 = v8;
          ++a4;
          for ( i = v10; ; ++i )
          {
            v8 = *a4;
            v10 = i;
            v15 = a4 + 1;
            v11 = (char)v8;
            if ( (v8 & 0x80u) == 0 )
            {
              v16 = *(_WORD *)(v9 + 2 * v8);
              if ( (v16 & 8) != 0 )
              {
LABEL_23:
                if ( v13 != v8 )
                  goto LABEL_4;
LABEL_24:
                v8 = a4[1];
LABEL_25:
                ++a4;
                if ( (v8 & 0x80u) != 0 )
                {
LABEL_26:
                  ++a4;
                  *(_BYTE *)(v6[1] + v10++) = v8;
                  v8 = *a4;
                  v9 = *(_DWORD *)(a1 + 4);
                  v11 = (char)v8;
                  goto LABEL_4;
                }
                goto LABEL_5;
              }
              if ( v13 == v8 )
                goto LABEL_24;
              if ( (v16 & 0x20) != 0 )
              {
                v8 = *++a4;
                v11 = (char)v8;
                if ( (v8 & 0x80u) == 0 )
                {
                  if ( (*(_WORD *)(v9 + 2 * v8) & 8) != 0 )
                    goto LABEL_23;
                }
                else
                {
                  a4 = v15;
                }
              }
            }
            ++a4;
            *(_BYTE *)(v6[1] + i) = v8;
            v9 = *(_DWORD *)(a1 + 4);
          }
        }
        if ( (*(_WORD *)(v9 + 2 * v8) & 0x400) != 0 )
        {
          v17 = v8;
          ++a4;
          for ( j = v10; ; ++j )
          {
            v8 = *a4;
            v10 = j;
            v11 = (char)v8;
            if ( (v8 & 0x80u) == 0 && (*(_WORD *)(v9 + 2 * v8) & 8) != 0 )
              break;
            if ( v17 == v8 )
            {
              v8 = a4[1];
              if ( v17 != v8 )
                goto LABEL_25;
              ++a4;
            }
            ++a4;
            *(_BYTE *)(v6[1] + j) = v8;
            v9 = *(_DWORD *)(a1 + 4);
          }
          if ( v17 == v8 )
          {
            v8 = a4[1];
            goto LABEL_25;
          }
          continue;
        }
        break;
      }
      if ( (v12 & 0x20) != 0 )
      {
        v19 = a4[1];
        if ( (v19 & 0x80) != 0 )
          goto LABEL_34;
        if ( (*(_WORD *)(v9 + 2 * v19) & 8) == 0 )
        {
          if ( v19 == 114 )
          {
            LOBYTE(v19) = 13;
LABEL_40:
            *(_BYTE *)(v6[1] + v10++) = v19;
            v8 = a4[2];
            a4 += 2;
            v9 = *(_DWORD *)(a1 + 4);
            v11 = (char)v8;
            continue;
          }
LABEL_34:
          switch ( v19 )
          {
            case 'n':
              LOBYTE(v19) = 10;
              break;
            case 'b':
              LOBYTE(v19) = 8;
              break;
            case 't':
              LOBYTE(v19) = 9;
              break;
          }
          goto LABEL_40;
        }
        goto LABEL_69;
      }
      break;
    }
    v20 = v12 & 8;
    if ( !v20 )
    {
      if ( v8 != 36 )
        goto LABEL_26;
      v21 = a4[1];
      if ( v21 == 123 )
      {
        v20 = 125;
      }
      else
      {
        if ( v21 != 40 )
        {
          v22 = (char *)(a4 + 1);
          if ( (v21 & 0x80) == 0 )
          {
LABEL_46:
            v23 = v22;
            if ( (*(_WORD *)(v9 + 2 * v21) & 0x107) != 0 )
            {
              while ( 1 )
              {
                v24 = (unsigned __int8)*++v23;
                v21 = v24;
                if ( (v24 & 0x80) != 0 )
                  break;
                if ( (*(_WORD *)(v9 + 2 * v21) & 0x107) == 0 )
                  goto LABEL_73;
              }
            }
            else
            {
LABEL_73:
              if ( v21 == 58 )
              {
                v44 = v23[1];
                if ( v44 == 58 )
                {
                  *v23 = 0;
                  v21 = (unsigned __int8)v23[2];
                  v36 = *(_DWORD *)(a1 + 4);
                  if ( (v21 & 0x80) != 0 )
                  {
                    v37 = v23 + 2;
                  }
                  else
                  {
                    v37 = v23 + 2;
                    if ( (*(_WORD *)(v36 + 2 * v21) & 0x107) == 0 )
                    {
LABEL_82:
                      *v37 = 0;
                      if ( !v20 )
                      {
                        v41 = (int)(v23 + 2);
                        v50 = v23;
                        v23 = v37;
                        v47 = 58;
                        v29 = v37;
                        v42 = sub_1797A8(a1, v22, v41);
                        v28 = v50;
                        v30 = (const char *)v42;
                        goto LABEL_54;
                      }
                      v26 = v22;
                      v25 = v23;
                      v22 = v23 + 2;
                      v23 = v37;
                      v47 = 58;
LABEL_51:
                      if ( v21 == v20 )
                      {
                        v43 = v25;
                        v27 = sub_1797A8(a1, v26, (int)v22);
                        v28 = v43;
                        v29 = v23 + 1;
                        v30 = (const char *)v27;
                        if ( !v43 )
                          goto LABEL_55;
                        goto LABEL_53;
                      }
LABEL_71:
                      sub_D0048(14, 101, 102, (int)"crypto/conf/conf_def.c", 618);
                      goto LABEL_66;
                    }
                    while ( 1 )
                    {
                      v38 = (unsigned __int8)*++v37;
                      v21 = v38;
                      if ( (v38 & 0x80) != 0 )
                        break;
                      if ( (*(_WORD *)(v36 + 2 * v21) & 0x107) == 0 )
                        goto LABEL_82;
                    }
                  }
                  *v37 = 0;
                  if ( !v20 )
                  {
                    v39 = (int)(v23 + 2);
                    v46 = v23;
                    v23 = v37;
                    v47 = 58;
                    v29 = v37;
                    v40 = sub_1797A8(a1, v22, v39);
                    v28 = v46;
                    v30 = (const char *)v40;
LABEL_53:
                    v44 = v47;
LABEL_54:
                    *v28 = v44;
                    goto LABEL_55;
                  }
                  goto LABEL_71;
                }
              }
            }
            v25 = 0;
            v26 = a2;
            *v23 = 0;
            if ( v20 )
              goto LABEL_51;
LABEL_64:
            v29 = v23;
            v30 = (const char *)sub_1797A8(a1, a2, (int)v22);
LABEL_55:
            *v23 = v21;
            if ( v30 )
            {
              v45 = v30;
              v31 = *v6 - (v29 - (char *)a4) + strlen(v30);
              if ( v31 > 0x10000 )
              {
                sub_D0048(14, 101, 116, (int)"crypto/conf/conf_def.c", 643);
              }
              else
              {
                if ( sub_BAF60(v6, v31) )
                {
                  v32 = v45;
                  v33 = *v45;
                  if ( *v45 )
                  {
                    do
                    {
                      ++v10;
                      *(_BYTE *)(v6[1] + v10 - 1) = v33;
                      v34 = *(unsigned __int8 *)++v32;
                      v33 = v34;
                    }
                    while ( v34 );
                  }
                  *v23 = v21;
                  a4 = (unsigned __int8 *)v29;
                  v8 = (unsigned __int8)*v29;
                  v9 = *(_DWORD *)(a1 + 4);
                  v11 = (char)v8;
                  continue;
                }
                sub_D0048(14, 101, 65, (int)"crypto/conf/conf_def.c", 647);
              }
            }
            else
            {
              sub_D0048(14, 101, 104, (int)"crypto/conf/conf_def.c", 638);
            }
            goto LABEL_66;
          }
LABEL_63:
          v23 = v22;
          v25 = 0;
          *v22 = 0;
          v26 = a2;
          if ( v20 )
            goto LABEL_51;
          goto LABEL_64;
        }
        v20 = 41;
      }
      v21 = a4[2];
      v22 = (char *)(a4 + 2);
      if ( (v21 & 0x80) == 0 )
        goto LABEL_46;
      goto LABEL_63;
    }
    break;
  }
LABEL_69:
  *(_BYTE *)(v6[1] + v10) = 0;
  CRYPTO_free(*a3);
  *a3 = (void *)v6[1];
  CRYPTO_free(v6);
  return 1;
}
