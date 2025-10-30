int __fastcall sub_172F3C(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r7
  unsigned __int8 *v7; // r9
  int v8; // r6
  int v9; // r4
  _BOOL4 v10; // r11
  unsigned __int8 *v11; // r10
  unsigned int v12; // r0
  unsigned __int8 *v13; // r5
  int v14; // r7
  int v15; // r4
  char *v16; // r7
  char *v17; // r11
  char *v18; // r5
  char *v19; // r9
  char v20; // t1
  int v21; // r0
  char *v23; // r0
  int v24; // r0
  int v25; // [sp+Ch] [bp-20h]
  char *v26; // [sp+10h] [bp-1Ch]
  int v27; // [sp+14h] [bp-18h]

  v5 = sub_B6D58(a1, a3, a4);
  v6 = v5;
  if ( v5 > 0 )
  {
    v7 = (unsigned __int8 *)(a3 + v5);
    v8 = *(unsigned __int8 *)(a3 + v5 - 1);
    v25 = 0;
    v26 = 0;
    v27 = 0;
    if ( v8 == 10 )
      goto LABEL_24;
    while ( 1 )
    {
      if ( v8 == 13 )
        goto LABEL_26;
      while ( 1 )
      {
        v9 = v6 - 1;
        v10 = v8 == 92;
        if ( v6 == 1 )
        {
LABEL_18:
          v13 = v7;
          v9 = v6;
        }
        else
        {
          v11 = (unsigned __int8 *)(a3 + v9);
          while ( 1 )
          {
            v12 = *v11;
            v13 = v11--;
            if ( !sub_BDB10(v12, 16) )
              break;
            if ( !--v9 )
              goto LABEL_18;
          }
        }
        *v13 = 0;
        if ( v9 == 1 )
        {
LABEL_28:
          sub_D0048(13, 103, 150, (int)"crypto/asn1/f_string.c", 133);
          CRYPTO_free(v26);
          return 0;
        }
        if ( ((v9 - v10) & 1) != 0 )
        {
          sub_D0048(13, 103, 145, (int)"crypto/asn1/f_string.c", 94);
          CRYPTO_free(v26);
          return 0;
        }
        v14 = (v9 - v10) >> 1;
        v15 = v14 + v25;
        if ( v14 + v25 > v27 )
        {
          v23 = (char *)CRYPTO_realloc(v26, (void *)(v25 + 2 * v14), (int)"crypto/asn1/f_string.c", 100);
          if ( !v23 )
          {
            sub_D0048(13, 103, 65, (int)"crypto/asn1/f_string.c", 102);
            CRYPTO_free(v26);
            return 0;
          }
          v26 = v23;
          v27 = v14 + v15;
        }
        if ( v14 )
        {
          v16 = (char *)(a3 + 2 * v14);
          v17 = (char *)a3;
          v18 = &v26[v25];
LABEL_15:
          v19 = v17 + 2;
          while ( 1 )
          {
            v20 = *v17++;
            v21 = sub_E9F98(v20);
            if ( v21 < 0 )
              break;
            *v18 = v21 | (16 * *v18);
            if ( v19 == v17 )
            {
              ++v18;
              if ( v17 == v16 )
                goto LABEL_21;
              goto LABEL_15;
            }
          }
          sub_D0048(13, 103, 141, (int)"crypto/asn1/f_string.c", 114);
          CRYPTO_free(v26);
          return 0;
        }
LABEL_21:
        if ( v8 != 92 )
          goto LABEL_31;
        v24 = sub_B6D58(a1, a3, a4);
        v6 = v24;
        if ( v24 <= 0 )
          goto LABEL_28;
        v7 = (unsigned __int8 *)(a3 + v24);
        v25 = v15;
        v8 = *(unsigned __int8 *)(a3 + v24 - 1);
        if ( v8 != 10 )
          break;
LABEL_24:
        --v6;
        *(_BYTE *)(a3 + v6) = 0;
        if ( !v6 )
          goto LABEL_28;
        v7 = (unsigned __int8 *)(a3 + v6);
        v8 = *(unsigned __int8 *)(a3 + v6 - 1);
        if ( v8 == 13 )
        {
LABEL_26:
          --v6;
          *(_BYTE *)(a3 + v6) = 0;
          if ( !v6 )
            goto LABEL_28;
          v7 = (unsigned __int8 *)(a3 + v6);
          v8 = *(unsigned __int8 *)(a3 + v6 - 1);
        }
      }
    }
  }
  v15 = 0;
  v26 = 0;
LABEL_31:
  *a2 = v15;
  a2[2] = v26;
  return 1;
}
