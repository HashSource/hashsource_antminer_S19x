int __fastcall sub_10D15C(int *a1, char *a2, int a3)
{
  char *v3; // r8
  int v4; // r3
  char *v6; // r9
  char *i; // r7
  char *v8; // r10
  signed int v9; // r4
  int *v10; // r11
  int v11; // t1
  bool v12; // zf
  const char *v13; // r5
  int *v14; // r0
  int *v15; // r4
  unsigned __int8 *v16; // r0
  void **v18; // r0
  int v19; // r2

  if ( a2 )
  {
    v3 = a2;
    v4 = (unsigned __int8)*a2;
    if ( *a2 )
    {
      v6 = a2 + 1;
      for ( i = a2; ; ++i )
      {
        v12 = v4 == 0;
        if ( v4 )
          v12 = v4 == 58;
        if ( v12 )
        {
          v8 = v6;
          if ( i == v3 )
          {
            ++v6;
            if ( !v4 )
              return 1;
          }
          else
          {
            v9 = 0;
            v10 = a1;
            while ( v9 < sub_10C010(*v10) )
            {
              v13 = *(const char **)sub_10C01C((_DWORD *)*v10, v9);
              if ( i - v3 == strlen(v13) && !strncmp(v13, v3, i - v3) )
                break;
              ++v9;
            }
            a1 = v10;
            if ( v9 >= sub_10C010(*v10) )
            {
              if ( !*v10 )
              {
                v18 = sub_10BFCC();
                *v10 = (int)v18;
                if ( !v18 )
                {
                  v19 = 185;
LABEL_32:
                  sub_D0048(11, 100, 65, (int)"crypto/x509/by_dir.c", v19);
                  return 0;
                }
              }
              v14 = (int *)CRYPTO_malloc((void *)0xC);
              v15 = v14;
              if ( !v14 )
              {
                v19 = 191;
                goto LABEL_32;
              }
              v14[1] = a3;
              v14[2] = (int)sub_10BFD4(sub_10CC5C);
              v16 = sub_E9EF4((unsigned __int8 *)v3, i - v3);
              *v15 = (int)v16;
              if ( !v16 || !v15[2] )
              {
                CRYPTO_free(v16);
                sub_10BFDC(v15[2], (void (__fastcall *)(int))sub_10CC78);
                CRYPTO_free(v15);
                return 0;
              }
              if ( !sub_10BD3C((int *)*v10, (int)v15) )
              {
                CRYPTO_free((void *)*v15);
                sub_10BFDC(v15[2], (void (__fastcall *)(int))sub_10CC78);
                CRYPTO_free(v15);
                sub_D0048(11, 100, 65, (int)"crypto/x509/by_dir.c", 203);
                return 0;
              }
            }
            ++v6;
            if ( !*i )
              return 1;
          }
          v3 = v8;
        }
        else
        {
          ++v6;
        }
        v11 = (unsigned __int8)i[1];
        v4 = v11;
      }
    }
  }
  sub_D0048(11, 100, 113, (int)"crypto/x509/by_dir.c", 160);
  return 0;
}
