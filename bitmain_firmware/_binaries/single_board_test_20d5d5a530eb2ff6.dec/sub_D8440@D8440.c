int __fastcall sub_D8440(int *a1, _DWORD *a2, _DWORD *a3, int a4, void *src, int a6)
{
  _DWORD *v7; // r7
  int v10; // r6
  _DWORD *v11; // r3
  int v12; // r5
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r2
  bool v17; // zf
  int v18; // r5
  int v19; // r0
  int v20; // r3
  int v21; // r3
  int v23; // r0
  int v24; // r0
  int v25; // r2
  size_t v26; // r0
  size_t v27; // r0
  size_t v28; // r0

  v7 = a2;
  if ( a6 == -1 )
  {
    v10 = a1[2];
  }
  else
  {
    v10 = a6 != 0;
    a1[2] = v10;
  }
  if ( a1[1] )
  {
    v11 = (_DWORD *)*a1;
    if ( *a1 )
    {
      if ( !a2 || *a2 == *v11 )
        goto LABEL_15;
      goto LABEL_8;
    }
    if ( !a2 )
    {
LABEL_47:
      v18 = 0;
      sub_D0048(6, 123, 131, (int)"crypto/evp/evp_enc.c", 149);
      return v18;
    }
    goto LABEL_8;
  }
  v11 = (_DWORD *)*a1;
  if ( !a2 )
  {
    if ( v11 )
      goto LABEL_15;
    goto LABEL_47;
  }
  if ( v11 || a1[24] )
  {
LABEL_8:
    v12 = a1[23];
    sub_D7A10(a1);
    a1[2] = v10;
    a1[23] = v12;
  }
  if ( a3 )
  {
    if ( !sub_CDD6C(a3) )
    {
      v25 = 102;
      goto LABEL_34;
    }
  }
  else
  {
    a3 = (_DWORD *)sub_15B6F8(*v7);
    if ( !a3 )
    {
LABEL_12:
      v13 = v7[8];
      a1[1] = (int)a3;
      *a1 = (int)v7;
      if ( v13 )
      {
        v18 = sub_E0740(v13, "crypto/evp/evp_enc.c", 129);
        a1[24] = v18;
        if ( !v18 )
        {
          *a1 = 0;
          sub_D0048(6, 123, 65, (int)"crypto/evp/evp_enc.c", 132);
          return v18;
        }
        v11 = (_DWORD *)*a1;
      }
      else
      {
        v11 = v7;
        a1[24] = 0;
      }
      v14 = v11[4];
      v15 = a1[23];
      a1[22] = v7[2];
      a1[23] = v15 & 1;
      if ( (v14 & 0x40) != 0 )
      {
        v18 = sub_D83D4((int)a1);
        if ( !v18 )
        {
          *a1 = 0;
          sub_D0048(6, 123, 134, (int)"crypto/evp/evp_enc.c", 144);
          return v18;
        }
        v11 = (_DWORD *)*a1;
      }
LABEL_15:
      v16 = v11[1];
      v17 = v16 == 1;
      if ( v16 != 1 )
        v17 = ((v16 - 8) & 0xFFFFFFF7) == 0;
      if ( !v17 )
        sub_BC328(
          "assertion failed: ctx->cipher->block_size == 1 || ctx->cipher->block_size == 8 || ctx->cipher->block_size == 16",
          "crypto/evp/evp_enc.c",
          158);
      v18 = a1[23] & 1;
      if ( !v18 )
      {
        v23 = sub_D8920(a1);
        if ( (int *)(((unsigned int)&loc_F0004 + 3) & sub_D8928(v23)) == (int *)((char *)&dword_10000 + 2) )
        {
          sub_D0048(6, 123, 170, (int)"crypto/evp/evp_enc.c", 162);
          return v18;
        }
      }
      v19 = sub_D8920(a1);
      if ( (sub_D8928(v19) & 0x10) == 0 )
      {
        v24 = sub_D8920(a1);
        switch ( sub_D8928(v24) & 0xF0007 )
        {
          case 0:
          case 1:
            break;
          case 2:
            goto LABEL_36;
          case 3:
          case 4:
            a1[20] = 0;
LABEL_36:
            if ( sub_D8944(a1) > 16 )
              sub_BC328(
                "assertion failed: EVP_CIPHER_CTX_iv_length(ctx) <= (int)sizeof(ctx->iv)",
                "crypto/evp/evp_enc.c",
                182);
            if ( src )
            {
              v26 = sub_D8944(a1);
              memcpy(a1 + 4, src, v26);
            }
            v27 = sub_D8944(a1);
            memcpy(a1 + 8, a1 + 4, v27);
            break;
          case 5:
            a1[20] = 0;
            if ( src )
            {
              v28 = sub_D8944(a1);
              memcpy(a1 + 8, src, v28);
            }
            break;
          default:
            return 0;
        }
      }
      v20 = *a1;
      if ( a4 || (*(_DWORD *)(v20 + 16) & 0x20) != 0 )
      {
        v18 = (*(int (__fastcall **)(int *, int, void *, int))(v20 + 20))(a1, a4, src, v10);
        if ( !v18 )
          return v18;
        v20 = *a1;
      }
      v21 = *(_DWORD *)(v20 + 4);
      v18 = 1;
      a1[3] = 0;
      a1[25] = 0;
      a1[26] = v21 - 1;
      return v18;
    }
  }
  v7 = (_DWORD *)sub_15B70C(a3, *v7);
  if ( v7 )
    goto LABEL_12;
  sub_CDDF8((int)a3);
  v25 = 113;
LABEL_34:
  sub_D0048(6, 123, 134, (int)"crypto/evp/evp_enc.c", v25);
  return 0;
}
