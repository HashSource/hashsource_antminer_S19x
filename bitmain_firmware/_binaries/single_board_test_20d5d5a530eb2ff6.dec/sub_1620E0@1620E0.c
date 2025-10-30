int __fastcall sub_1620E0(int a1, int a2, int a3, int a4, unsigned __int8 c, int a6, int a7, char *dest, _DWORD *a9)
{
  int *v11; // r5
  int v12; // r7
  int v13; // r0
  bool v14; // cc
  int v15; // r8
  char *v16; // r9
  int v17; // r7
  void *v19; // r4
  char *v20; // r6
  int v21; // r0
  int v22; // r3
  int v23; // r2
  bool v24; // zf
  bool v25; // zf
  size_t v26; // r2
  char *v27; // r4
  char *v28; // r5
  int v29; // r1
  _BYTE *v30; // r2
  char *v31; // r1
  _BYTE *v32; // r6
  char *v33; // r4
  char *v34; // r9
  int v35; // r1
  int v36; // r11
  size_t v37; // r3
  char *v38; // r10
  int v39; // r11
  int v40; // r1
  unsigned __int8 *v41; // r12
  char *v42; // lr
  unsigned __int8 *v43; // r0
  int v44; // r1
  int v45; // t1
  unsigned int v46; // r3
  void *s; // [sp+Ch] [bp-28h]
  char *v50; // [sp+14h] [bp-20h]
  int v51; // [sp+18h] [bp-1Ch]
  char *v52; // [sp+18h] [bp-1Ch]
  int v53; // [sp+1Ch] [bp-18h]
  char *v54; // [sp+1Ch] [bp-18h]
  void *v55; // [sp+1Ch] [bp-18h]
  int v56; // [sp+20h] [bp-14h]
  void *v57; // [sp+28h] [bp-Ch]
  int *v58; // [sp+2Ch] [bp-8h]

  v11 = (int *)sub_D14F4();
  if ( !v11 )
    goto LABEL_6;
  v12 = sub_D8C6C((int)a9);
  v13 = sub_D8C78((int)a9);
  v14 = v12 <= 0;
  if ( v12 > 0 )
    v14 = v13 <= 0;
  v15 = v13;
  if ( v14 )
  {
LABEL_6:
    v19 = 0;
    v16 = 0;
    v20 = 0;
    s = 0;
  }
  else
  {
    s = CRYPTO_malloc((void *)v12);
    v19 = CRYPTO_malloc((void *)v15);
    v20 = (char *)CRYPTO_malloc((void *)(v12 + 1));
    v21 = sub_189308(v12 + a4 - 1, v12);
    v22 = v12 * v21;
    v53 = v12 * v21;
    if ( a2 )
    {
      v51 = v12 * sub_189308(v12 + a2 - 1, v12);
      v23 = v51;
      v22 = v53;
    }
    else
    {
      v23 = 0;
      v51 = 0;
    }
    v56 = v23 + v22;
    v16 = (char *)CRYPTO_malloc((void *)(v23 + v22));
    v24 = v19 == 0;
    if ( v19 )
      v24 = s == 0;
    if ( !v24 )
    {
      v25 = v16 == 0;
      if ( v16 )
        v25 = v20 == 0;
      if ( !v25 )
      {
        v26 = v12;
        if ( v12 < 1 )
          v26 = 1;
        memset(s, c, v26);
        if ( v53 <= 0 )
        {
          v54 = v16;
        }
        else
        {
          v57 = v19;
          v27 = &v16[v53];
          v58 = v11;
          v28 = v16;
          v54 = &v16[v53];
          do
          {
            sub_18959C(v28 - v16, a4);
            *v28++ = *(_BYTE *)(a3 + v29);
          }
          while ( v28 != v27 );
          v19 = v57;
          v11 = v58;
        }
        if ( v51 > 0 )
        {
          v30 = v54;
          v50 = v20;
          v31 = &v54[v51];
          v52 = v16;
          v55 = v19;
          v32 = v30;
          v33 = v30;
          v34 = v31;
          do
          {
            sub_18959C(v33 - v32, a2);
            *v33++ = *(_BYTE *)(a1 + v35);
          }
          while ( v33 != v34 );
          v20 = v50;
          v16 = v52;
          v19 = v55;
        }
        while ( sub_D1520(v11, a9, 0)
             && sub_D16D8((int)v11, (int)s, v12)
             && sub_D16D8((int)v11, (int)v16, v56)
             && sub_D16E4(v11, (int)v19, 0) )
        {
          if ( a6 > 1 )
          {
            v36 = 1;
            do
            {
              ++v36;
              if ( !sub_D1520(v11, a9, 0) || !sub_D16D8((int)v11, (int)v19, v15) || !sub_D16E4(v11, (int)v19, 0) )
                goto LABEL_7;
            }
            while ( a6 != v36 );
          }
          v37 = a7;
          if ( a7 >= v15 )
            v37 = v15;
          memcpy(dest, v19, v37);
          if ( a7 <= v15 )
          {
            v17 = 1;
            goto LABEL_8;
          }
          v38 = v20 - 1;
          a7 -= v15;
          v39 = 0;
          dest += v15;
          do
          {
            sub_18959C(v39++, v15);
            *++v38 = *((_BYTE *)v19 + v40);
          }
          while ( v12 > v39 );
          if ( v56 > 0 )
          {
            v41 = (unsigned __int8 *)&v16[v12 - 1];
            do
            {
              v42 = &v20[v12];
              v43 = v41;
              v44 = 1;
              do
              {
                v45 = (unsigned __int8)*--v42;
                v46 = *v43 + v44 + v45;
                *v43-- = v46;
                v44 = (unsigned __int16)(v46 >> 8);
              }
              while ( v20 != v42 );
              v41 += v12;
            }
            while ( v56 > (int)&v41[1 - v12 - (_DWORD)v16] );
          }
        }
      }
    }
  }
LABEL_7:
  v17 = 0;
  sub_D0048(35, 111, 65, (int)"crypto/pkcs12/p12_key.c", 165);
LABEL_8:
  CRYPTO_free(v19);
  CRYPTO_free(v20);
  CRYPTO_free(s);
  CRYPTO_free(v16);
  sub_D1504(v11);
  return v17;
}
