int __fastcall sub_17CB4C(int a1, char *a2, int a3)
{
  int v6; // r5
  int v7; // r0
  bool v8; // zf
  int v10; // r6
  int v11; // r1
  int v12; // r7
  int v13; // r7
  int v14; // r0
  int v15; // r11
  bool v16; // cc
  int v17; // r0
  int n; // r8
  int v19; // r3
  size_t v20; // r11
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // r4
  int i; // r1
  int v26; // r0
  int v27; // r0
  int v28; // r4
  int v29; // r3
  int v30; // r0
  int v31; // [sp+8h] [bp-14h]
  int v32; // [sp+Ch] [bp-10h]
  int v33; // [sp+10h] [bp-Ch]

  v6 = sub_B66C8(a1);
  v7 = sub_B7170(a1);
  v8 = v7 == 0;
  if ( v7 )
    v8 = v6 == 0;
  if ( v8 )
    return 0;
  v10 = v7;
  sub_B66FC(a1, 15);
  if ( *(_DWORD *)(v6 + 16) != 1 )
  {
    *(_DWORD *)v6 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 16) = 1;
    sub_15DAAC(*(_DWORD **)(v6 + 28));
  }
  v11 = *(_DWORD *)(v6 + 4);
  if ( v11 > 1501 )
    sub_BC328("assertion failed: ctx->buf_off < (int)sizeof(ctx->buf)", "crypto/evp/bio_b64.c", 351);
  v12 = *(_DWORD *)v6;
  if ( *(int *)v6 > 1502 )
    sub_BC328("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)", "crypto/evp/bio_b64.c", 352);
  if ( v11 > v12 )
    sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 353);
  v13 = v12 - v11;
  if ( v13 <= 0 )
  {
LABEL_19:
    v16 = (int)a2 <= 0;
    if ( a2 )
      v16 = a3 <= 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)v6 = 0;
    v17 = v16;
    if ( !v16 )
    {
      v31 = v17;
      v32 = a1;
      while ( 1 )
      {
        n = a3;
        if ( a3 >= 1024 )
          n = 1024;
        if ( (sub_B6708(v32, -1) & 0x100) != 0 )
        {
          v19 = *(_DWORD *)(v6 + 8);
          if ( v19 <= 0 )
          {
            if ( n <= 2 )
            {
              memcpy((void *)(v6 + 1534), a2, n);
              *(_DWORD *)(v6 + 8) = n;
              return v31 + n;
            }
            v33 = v6 + 32;
            n = 3 * (n / 3);
            v30 = sub_15DC10((_BYTE *)(v6 + 32), (int)a2, n);
            *(_DWORD *)v6 = v30;
            if ( v30 > 1502 )
              sub_BC328("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)", "crypto/evp/bio_b64.c", 412);
            if ( v30 < *(_DWORD *)(v6 + 4) )
              sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 413);
            v24 = v30;
            v20 = n;
            v31 += n;
          }
          else
          {
            if ( v19 > 3 )
              sub_BC328("assertion failed: ctx->tmp_len <= 3", "crypto/evp/bio_b64.c", 379);
            n = 3 - v19;
            if ( 3 - v19 <= a3 )
              v20 = 3 - v19;
            else
              v20 = 1;
            if ( 3 - v19 > a3 )
              n = v20;
            memcpy((void *)(v6 + v19 + 1534), a2, v20);
            v21 = *(_DWORD *)(v6 + 8) + n;
            v22 = v31 + n;
            v31 += n;
            *(_DWORD *)(v6 + 8) = v21;
            if ( v21 <= 2 )
              return v22;
            v33 = v6 + 32;
            v23 = sub_15DC10((_BYTE *)(v6 + 32), v6 + 1534, v21);
            *(_DWORD *)v6 = v23;
            if ( v23 > 1502 )
              sub_BC328("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)", "crypto/evp/bio_b64.c", 394);
            if ( v23 < *(_DWORD *)(v6 + 4) )
              sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 395);
            v24 = v23;
            *(_DWORD *)(v6 + 8) = 0;
          }
        }
        else
        {
          v33 = v6 + 32;
          if ( !sub_15DABC(*(signed int **)(v6 + 28), (_BYTE *)(v6 + 32), (int *)v6, a2, n) )
          {
            if ( v31 )
              return v31;
            else
              return -1;
          }
          if ( *(int *)v6 > 1502 )
            sub_BC328("assertion failed: ctx->buf_len <= (int)sizeof(ctx->buf)", "crypto/evp/bio_b64.c", 421);
          if ( *(_DWORD *)v6 < *(_DWORD *)(v6 + 4) )
            sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 422);
          v24 = *(_DWORD *)v6;
          v20 = n;
          v31 += n;
        }
        a2 += v20;
        *(_DWORD *)(v6 + 4) = 0;
        if ( v24 > 0 )
          break;
LABEL_51:
        a3 -= n;
        *(_DWORD *)v6 = 0;
        *(_DWORD *)(v6 + 4) = 0;
        if ( a3 <= 0 )
          return v31;
      }
      for ( i = v33; ; i = v6 + v26 + 32 )
      {
        v27 = sub_B69CC(v10, i, v24);
        if ( v27 <= 0 )
          break;
        if ( v24 < v27 )
          sub_BC328("assertion failed: i <= n", "crypto/evp/bio_b64.c", 436);
        v24 -= v27;
        v26 = v27 + *(_DWORD *)(v6 + 4);
        *(_DWORD *)(v6 + 4) = v26;
        if ( v26 > 1502 )
          sub_BC328("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)", "crypto/evp/bio_b64.c", 439);
        if ( v26 > *(_DWORD *)v6 )
          sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 440);
        if ( v24 <= 0 )
          goto LABEL_51;
      }
      v28 = v27;
      sub_B724C(v32);
      v29 = v31;
      if ( !v31 )
        return v28;
      return v29;
    }
    return 0;
  }
  while ( 1 )
  {
    v14 = sub_B69CC(v10, v11 + 32 + v6, v13);
    if ( v14 <= 0 )
      break;
    if ( v14 > v13 )
      sub_BC328("assertion failed: i <= n", "crypto/evp/bio_b64.c", 361);
    v11 = *(_DWORD *)(v6 + 4) + v14;
    *(_DWORD *)(v6 + 4) = v11;
    if ( v11 > 1502 )
      sub_BC328("assertion failed: ctx->buf_off <= (int)sizeof(ctx->buf)", "crypto/evp/bio_b64.c", 363);
    if ( v11 > *(_DWORD *)v6 )
      sub_BC328("assertion failed: ctx->buf_len >= ctx->buf_off", "crypto/evp/bio_b64.c", 364);
    v13 -= v14;
    if ( v13 <= 0 )
      goto LABEL_19;
  }
  v15 = v14;
  sub_B724C(a1);
  return v15;
}
