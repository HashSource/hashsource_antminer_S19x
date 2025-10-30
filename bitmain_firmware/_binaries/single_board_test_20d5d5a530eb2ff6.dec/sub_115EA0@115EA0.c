int __fastcall sub_115EA0(int a1, int *a2)
{
  int result; // r0
  void *v4; // r8
  int v5; // r7
  _BYTE *v6; // r4
  int v7; // r5
  unsigned int v8; // r0

  result = (int)sub_10F99C(a2, 0, 0);
  v4 = (void *)result;
  if ( result )
  {
    if ( *(_BYTE *)result )
    {
      v5 = result + 1;
      v6 = (_BYTE *)(result + 1);
      v7 = result + 2;
      while ( 1 )
      {
        if ( *v6 == 47 )
        {
          if ( !sub_BDB10((unsigned __int8)v6[1], 2)
            || (v8 = (unsigned __int8)v6[2], v8 != 61) && (!sub_BDB10(v8, 2) || v6[3] != 61) )
          {
            if ( *v6 )
              goto LABEL_14;
          }
LABEL_6:
          if ( &v6[-v5] != (_BYTE *)sub_B69CC(a1, v5, (int)&v6[-v5]) )
            goto LABEL_18;
          if ( !*v6 )
          {
LABEL_8:
            CRYPTO_free(v4);
            return 1;
          }
          if ( sub_B69CC(a1, (int)", ", 2) != 2 )
          {
LABEL_18:
            sub_D0048(11, 117, 7, (int)"crypto/x509/x_name.c", 535);
            CRYPTO_free(v4);
            return 0;
          }
          if ( !*v6 )
            goto LABEL_8;
          v5 = v7;
          ++v6;
          ++v7;
        }
        else
        {
          if ( !*v6 )
            goto LABEL_6;
LABEL_14:
          ++v6;
          ++v7;
        }
      }
    }
    CRYPTO_free((void *)result);
    return 1;
  }
  return result;
}
