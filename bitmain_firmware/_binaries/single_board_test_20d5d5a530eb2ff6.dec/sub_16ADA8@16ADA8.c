int *__fastcall sub_16ADA8(int a1, int a2, int a3, int a4, int **a5, _DWORD *a6, int a7, int a8)
{
  int *v8; // r4
  int v10; // r0
  int v11; // r7
  char *v12; // r4
  const char *v13; // r0
  size_t v14; // r0
  int v15; // r0
  int v16; // r11
  int v17; // r3
  int v18; // r5
  int v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // [sp+8h] [bp-41Ch]
  int v24; // [sp+14h] [bp-410h] BYREF
  int v25; // [sp+18h] [bp-40Ch] BYREF
  int *v26; // [sp+1Ch] [bp-408h] BYREF
  _BYTE v27[1028]; // [sp+20h] [bp-404h] BYREF

  v8 = *a5;
  if ( !*a5 )
  {
    if ( a1 )
      return 0;
    v10 = sub_17D268();
    v11 = v10;
    if ( v10 )
    {
      *a6 = 1;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      if ( sub_17D9B0(v10, &byte_1A4198, 0) || sub_17D9B0(v11, 0, 0) )
      {
        v12 = &byte_1A4198;
LABEL_10:
        if ( !sub_17D508(v11, v12, &v24, &v25, &v26) )
        {
          sub_17D2AC(v11);
          return 0;
        }
        v8 = (int *)sub_10BFCC();
        if ( v8 && (v15 = sub_16BF9C(v24), (v16 = v15) != 0) )
        {
          v17 = sub_10BD3C(v8, v15);
          v18 = v17;
          if ( v17 )
          {
            v19 = sub_16BFDC(v25);
            v18 = v19;
            if ( v19 )
            {
              v17 = sub_10BD3C(v8, v19);
              if ( v17 )
              {
                while ( 1 )
                {
                  if ( sub_10C010((int)v26) <= 0 )
                  {
                    *a5 = v8;
                    sub_17D2AC(v11);
                    goto LABEL_2;
                  }
                  v20 = sub_10C01C(v26, 0);
                  v21 = sub_16BFDC(v20);
                  if ( !v21 )
                    goto LABEL_20;
                  v23 = v21;
                  v22 = sub_10BD3C(v8, v21);
                  v17 = v23;
                  if ( !v22 )
                    break;
                  sub_10BD54(v26);
                }
                v18 = 0;
                v16 = 0;
              }
            }
            else
            {
              v17 = 0;
            }
          }
        }
        else
        {
LABEL_20:
          v17 = 0;
          v18 = 0;
          v16 = 0;
        }
        OSSL_STORE_INFO_free(v17);
        OSSL_STORE_INFO_free(v18);
        OSSL_STORE_INFO_free(v16);
        sub_10BFDC((int)v8, (void (__fastcall *)(int))OSSL_STORE_INFO_free);
        sub_DA240(v24);
        X509_free(v25);
        sub_10BFDC((int)v26, (void (__fastcall *)(int))X509_free);
        *a5 = 0;
        sub_17D2AC(v11);
        return 0;
      }
      v13 = (const char *)sub_16A738(a7, (int)v27, 1024, (int)"PKCS12 import password", a8);
      v12 = (char *)v13;
      if ( v13 )
      {
        v14 = strlen(v13);
        if ( sub_17D9B0(v11, v12, v14) )
          goto LABEL_10;
        sub_D0048(44, 122, 113, (int)"crypto/store/loader_file.c", 237);
      }
      else
      {
        sub_D0048(44, 122, 114, (int)"crypto/store/loader_file.c", 232);
      }
    }
    sub_17D2AC(v11);
    return 0;
  }
LABEL_2:
  *a6 = 1;
  return sub_10BD54(v8);
}
