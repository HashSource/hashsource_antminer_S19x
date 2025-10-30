int __fastcall sub_16A738(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r5
  int v8; // r0
  void *v9; // r6
  int v11; // r0

  v7 = sub_16C988();
  if ( v7 )
  {
    if ( a1 )
      sub_16D880();
    sub_16D61C(v7, a5);
    v8 = sub_16D528(v7, "pass phrase");
    v9 = (void *)v8;
    if ( v8 )
    {
      if ( sub_16C9DC(v7, v8) )
      {
        v11 = sub_16D6B0(v7);
        if ( v11 == -2 )
        {
          a2 = 0;
          sub_D0048(44, 118, 109, (int)"crypto/store/loader_file.c", 74);
        }
        else if ( v11 == -1 )
        {
          a2 = 0;
          sub_D0048(44, 118, 40, (int)"crypto/store/loader_file.c", 78);
        }
      }
      else
      {
        a2 = 0;
        sub_D0048(44, 118, 40, (int)"crypto/store/loader_file.c", 68);
      }
    }
    else
    {
      a2 = 0;
      sub_D0048(44, 118, 65, (int)"crypto/store/loader_file.c", 64);
    }
    CRYPTO_free(v9);
    sub_16C990(v7);
    return a2;
  }
  else
  {
    sub_D0048(44, 118, 65, (int)"crypto/store/loader_file.c", 54);
    return 0;
  }
}
