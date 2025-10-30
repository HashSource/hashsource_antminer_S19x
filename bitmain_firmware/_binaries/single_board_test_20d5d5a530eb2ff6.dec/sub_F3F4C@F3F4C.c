int __fastcall sub_F3F4C(int a1, int a2, void *a3, unsigned int a4)
{
  unsigned int v5; // r4
  int result; // r0
  _DWORD *v10; // r5
  unsigned int v11; // r3
  void *v12; // r0
  bool v13; // cf
  void *v14; // r4

  if ( a2 )
    v5 = 16;
  else
    v5 = 48;
  result = sub_10C594(&unk_6E1AE0, sub_F3E68);
  if ( result )
  {
    result = dword_6E1ADC;
    if ( dword_6E1ADC )
    {
      v10 = sub_E0740((void *)0x24);
      if ( v10 )
      {
        v11 = a4;
        if ( a4 >= 0x3000 )
          v11 = 12288;
        v12 = (void *)v5;
        if ( v5 < (unsigned int)a3 )
          v12 = a3;
        v13 = v11 >= (unsigned int)v12;
        v10[5] = v11;
        v10[4] = a3;
        if ( v11 >= (unsigned int)v12 )
          v10[6] = v12;
        else
          v12 = (void *)v11;
        if ( !v13 )
          v10[6] = v11;
        if ( a2 )
          v14 = sub_E180C(v12);
        else
          v14 = sub_E0740(v12);
        *v10 = v14;
        if ( v14 )
        {
          result = (int)v10;
          v10[8] = a1;
          v10[3] = a2;
        }
        else
        {
          sub_D0048(36, 116, 65, (int)"crypto/rand/rand_lib.c", 464);
          CRYPTO_free(v10);
          return 0;
        }
      }
      else
      {
        sub_D0048(36, 116, 65, (int)"crypto/rand/rand_lib.c", 447);
        return 0;
      }
    }
  }
  return result;
}
