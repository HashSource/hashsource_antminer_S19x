int __fastcall sub_AC040(int a1, int a2)
{
  int v4; // r0
  int v5; // r7
  char *v6; // r8
  int v7; // r0
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r9
  int v12; // r10
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r0
  int v22; // r4
  unsigned int v23; // r0

  v4 = sub_D00F0(a1);
  if ( !a1 )
    __und(0xFFu);
  v5 = *(_DWORD *)(a1 + 112);
  v6 = *(char **)(a1 + 116);
  v7 = sub_B7820(v4);
  v8 = sub_B655C(v7);
  v9 = v8;
  if ( v8 )
  {
    if ( sub_B6ECC(v8, 108, 3, a2) <= 0 )
    {
      v11 = 0;
      sub_D0048(20, 220, 2, "ssl/ssl_rsa.c", 596);
      v12 = 0;
    }
    else
    {
      v10 = sub_EF25C(v9, 0, v5, v6);
      v11 = v10;
      if ( v10 )
      {
        v12 = sub_ABAC0(a1, v10);
        v13 = sub_D0760();
        v16 = v12;
        if ( v12 )
          v16 = 1;
        if ( v13 )
          v16 = 0;
        v17 = v16;
        if ( v16 && (v17 = sub_89534(a1, 88, 0, 0)) != 0 )
        {
          while ( 1 )
          {
            v21 = sub_EF18C(v9, 0, v5, v6);
            v22 = v21;
            if ( !v21 )
              break;
            if ( !sub_89534(a1, 89, 0, v21) )
            {
              v12 = 0;
              X509_free(v22, v19, v20);
              goto LABEL_12;
            }
          }
          v23 = sub_D065C();
          if ( HIBYTE(v23) == 9 && (v23 & 0xFFF) == 0x6C )
            sub_D00F0(108);
          else
            v12 = 0;
        }
        else
        {
          v12 = v17;
        }
      }
      else
      {
        v12 = 0;
        sub_D0048(20, 220, 9, "ssl/ssl_rsa.c", 603);
      }
    }
  }
  else
  {
    v11 = 0;
    sub_D0048(20, 220, 7, "ssl/ssl_rsa.c", 591);
    v12 = 0;
  }
LABEL_12:
  X509_free(v11, v14, v15);
  BIO_vfree_0(v9);
  return v12;
}
