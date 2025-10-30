int __fastcall sub_12D4B0(_DWORD *a1, _DWORD *a2, char *a3, int a4)
{
  int v5; // r0
  int v6; // r6
  char *v7; // r10
  int v8; // r8
  signed int v9; // r9
  unsigned __int8 *v10; // r11
  int v11; // r4
  unsigned int v12; // r0
  unsigned __int8 *v13; // r5
  char *v14; // r6
  int v15; // r10
  int v16; // r4
  char *v17; // r10
  char *v18; // r5
  char *v19; // r11
  char v20; // t1
  int v21; // r0
  size_t v23; // r1
  char *v24; // r0
  int v25; // r0
  char *v26; // [sp+8h] [bp-24h]
  int v27; // [sp+Ch] [bp-20h]
  int v28; // [sp+10h] [bp-1Ch]
  _BOOL4 v29; // [sp+14h] [bp-18h]

  a2[1] = 2;
  v5 = sub_B6D58(a1, (int)a3, a4);
  v6 = v5;
  if ( v5 > 0 )
  {
    v7 = &a3[v5];
    v8 = (unsigned __int8)a3[v5 - 1];
    v9 = 0;
    v27 = 0;
    v26 = 0;
    v28 = 1;
    if ( v8 == 10 )
      goto LABEL_27;
    while ( 1 )
    {
      if ( v8 == 13 )
        goto LABEL_29;
      while ( 1 )
      {
        v10 = (unsigned __int8 *)a3;
        v11 = 0;
        v29 = v8 == 92;
        while ( 1 )
        {
          v12 = *v10;
          v13 = v10++;
          if ( !sub_BDB10(v12, 16) )
            break;
          if ( ++v11 >= v6 )
          {
            v13 = (unsigned __int8 *)v7;
            v11 = v6;
            break;
          }
        }
        *v13 = 0;
        if ( v11 <= 1 )
          goto LABEL_21;
        if ( v28 && *a3 == 48 && a3[1] == 48 )
        {
          v11 -= 2;
          v14 = a3 + 2;
        }
        else
        {
          v14 = a3;
        }
        if ( ((v11 - v29) & 1) != 0 )
        {
          sub_D0048(13, 102, 145, (int)"crypto/asn1/f_int.c", 103);
          CRYPTO_free(v26);
          return 0;
        }
        v15 = (v11 - v29) >> 1;
        v16 = v15 + v27;
        if ( v15 + v27 > v9 )
        {
          v23 = v9;
          v9 = v15 + v16;
          v24 = (char *)sub_E0788(v26, v23, (void *)(v15 + v16), (size_t)"crypto/asn1/f_int.c", 109);
          if ( !v24 )
          {
            sub_D0048(13, 102, 65, (int)"crypto/asn1/f_int.c", 111);
            CRYPTO_free(v26);
            return 0;
          }
          v26 = v24;
        }
        if ( v15 )
        {
          v17 = &v14[2 * v15];
          v18 = &v26[v27];
LABEL_18:
          v19 = v14 + 2;
          while ( 1 )
          {
            v20 = *v14++;
            v21 = sub_E9F98(v20);
            if ( v21 < 0 )
              break;
            *v18 = v21 | (16 * *v18);
            if ( v19 == v14 )
            {
              ++v18;
              if ( v14 == v17 )
                goto LABEL_24;
              goto LABEL_18;
            }
          }
          sub_D0048(13, 102, 141, (int)"crypto/asn1/f_int.c", 123);
          goto LABEL_21;
        }
LABEL_24:
        if ( v8 != 92 )
        {
          *a2 = v16;
          a2[2] = v26;
          return 1;
        }
        v28 = 0;
        v25 = sub_B6D58(a1, (int)a3, a4);
        v6 = v25;
        if ( v25 <= 0 )
          goto LABEL_21;
        v7 = &a3[v25];
        v27 = v16;
        v8 = (unsigned __int8)a3[v25 - 1];
        if ( v8 != 10 )
          break;
LABEL_27:
        a3[--v6] = 0;
        if ( !v6 )
          goto LABEL_21;
        v7 = &a3[v6];
        v8 = (unsigned __int8)a3[v6 - 1];
        if ( v8 == 13 )
        {
LABEL_29:
          a3[--v6] = 0;
          if ( !v6 )
            goto LABEL_21;
          v7 = &a3[v6];
          v8 = (unsigned __int8)a3[v6 - 1];
        }
      }
    }
  }
  v26 = 0;
LABEL_21:
  sub_D0048(13, 102, 150, (int)"crypto/asn1/f_int.c", 140);
  CRYPTO_free(v26);
  return 0;
}
