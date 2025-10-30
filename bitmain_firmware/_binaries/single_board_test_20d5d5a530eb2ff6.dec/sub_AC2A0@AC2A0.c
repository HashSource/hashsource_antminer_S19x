int __fastcall sub_AC2A0(int a1, int a2, unsigned __int8 *a3, int a4)
{
  bool v4; // zf
  int v5; // r7
  unsigned __int8 *v6; // r5
  size_t v7; // r4
  int v9; // r2
  int v11; // r11
  _BYTE *v12; // r0
  _BYTE *v13; // r9
  int v14; // r4
  unsigned int v15; // r2
  unsigned __int8 *v16; // r1
  unsigned int v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r3
  unsigned int v20; // r0
  unsigned int v21; // r3
  int v22; // r7
  void *v23; // r0
  bool v24; // cc
  unsigned int v25; // r4
  unsigned int v26; // r3
  unsigned int v27; // r11
  unsigned __int8 *v28; // r7
  int v29; // r2
  unsigned int v30; // r5

  v4 = a4 == 0;
  if ( a4 )
    v4 = a3 == 0;
  v5 = v4;
  if ( !a1 )
    v5 |= 1u;
  if ( v5 )
  {
    sub_D0048(20, 543, 67, "ssl/ssl_rsa.c", 876);
    return 0;
  }
  else
  {
    v6 = a3;
    v7 = a4;
    if ( a2 == 1 )
    {
      v11 = a4 + 4;
      v12 = (_BYTE *)CRYPTO_malloc(a4 + 4, "ssl/ssl_rsa.c", 889);
      v13 = v12;
      if ( v12 )
      {
        *v12 = 0;
        v12[1] = 0;
        v12[2] = 1;
        v12[3] = -48;
        memcpy(v12 + 4, v6, v7);
        v14 = sub_AC2A0(a1, 2, v13, v11);
        CRYPTO_free(v13, "ssl/ssl_rsa.c", 900);
        return v14;
      }
      else
      {
        sub_D0048(20, 543, 65, "ssl/ssl_rsa.c", 891);
        return 0;
      }
    }
    else
    {
      if ( a2 == 2 && a4 >= 4 )
      {
        v15 = a4 - 4;
        if ( (unsigned int)(a4 - 4) > 1 )
        {
          v16 = v6 + 4;
          do
          {
            v17 = v15 - 2;
            v18 = v15 - 4;
            if ( v17 <= 1 )
              break;
            v19 = v16[3] | (v16[2] << 8);
            if ( v19 > v18 )
              break;
            v20 = v19 + 8;
            v21 = v18 - v19;
            v15 = v21 - 4;
            v16 += v20;
            if ( !v21 )
            {
              v22 = **(_DWORD **)(a1 + 192);
              if ( !v22 )
              {
                sub_D0048(20, 543, 68, "ssl/ssl_rsa.c", 909);
                return 0;
              }
              v23 = (void *)CRYPTO_realloc(*(_DWORD *)(v22 + 12), v7, "ssl/ssl_rsa.c", 913);
              if ( !v23 )
              {
                sub_D0048(20, 543, 65, "ssl/ssl_rsa.c", 915);
                return 0;
              }
              *(_DWORD *)(**(_DWORD **)(a1 + 192) + 12) = v23;
              memcpy(v23, v6, v7);
              *(_DWORD *)(**(_DWORD **)(a1 + 192) + 16) = v7;
              if ( v7 > 3 )
              {
                do
                {
                  v24 = v7 - 4 > 3;
                  v25 = v7 - 8;
                  if ( !v24 )
                    break;
                  v26 = v6[7] | (v6[6] << 8);
                  if ( v26 > v25 )
                    break;
                  v27 = v25 - v26;
                  v28 = &v6[v26 + 8];
                  v29 = _byteswap_ulong(*(_DWORD *)v6);
                  v30 = v6[5] | (v6[4] << 8);
                  if ( v29 == 464 )
                  {
                    if ( !sub_929E4(a1, v30, (int)sub_AB4D4, 0, 0, (int)sub_AAFE8, 0) )
                      break;
                  }
                  else if ( !sub_927A0(a1, v30, v29, (int)sub_AB440, 0, 0, (int)sub_AAFD4, 0) )
                  {
                    break;
                  }
                  v7 = v27;
                  v6 = v28;
                  if ( !v27 )
                    return 1;
                }
                while ( v27 > 3 );
              }
              v9 = 928;
              goto LABEL_12;
            }
          }
          while ( v21 > 3 && v15 > 1 );
        }
      }
      v9 = 905;
LABEL_12:
      sub_D0048(20, 543, 388, "ssl/ssl_rsa.c", v9);
      return 0;
    }
  }
}
