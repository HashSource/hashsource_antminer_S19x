_DWORD *__fastcall sub_F384C(int a1, int a2, int *a3)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  __pid_t v8; // r0
  int v9; // r6
  int v10; // r3
  int v12; // r12
  int v13; // r5

  v6 = sub_E0740((void *)0x104);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 0;
    v8 = j_j_getpid();
    v7[1] = a3;
    v7[4] = v8;
    if ( a3 )
    {
      v7[61] = rand_drbg_get_entropy;
      v9 = dword_21FB54;
      v10 = dword_21FB5C;
      v7[62] = rand_drbg_cleanup_entropy;
      v7[17] = v9;
      v7[19] = v10;
      if ( sub_F2E30((int)v7, a1, a2) )
      {
        sub_F370C(a3);
        if ( v7[8] <= a3[8] )
        {
          sub_F3718(a3);
          return v7;
        }
        sub_F3718(a3);
        sub_D0048(36, 109, 131, (int)"crypto/rand/drbg_lib.c", 236);
      }
    }
    else
    {
      v7[61] = rand_drbg_get_entropy;
      v7[62] = rand_drbg_cleanup_entropy;
      v12 = dword_21FB50;
      v13 = dword_21FB58;
      v7[63] = rand_drbg_get_nonce;
      v7[17] = v12;
      v7[19] = v13;
      v7[64] = rand_drbg_cleanup_nonce;
      if ( sub_F2E30((int)v7, a1, a2) )
        return v7;
    }
    sub_F2F54(v7);
    return 0;
  }
  else
  {
    sub_D0048(36, 109, 65, (int)"crypto/rand/drbg_lib.c", 195);
    return 0;
  }
}
