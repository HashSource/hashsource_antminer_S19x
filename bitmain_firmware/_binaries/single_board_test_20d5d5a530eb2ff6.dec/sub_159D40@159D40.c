int __fastcall sub_159D40(_DWORD *a1, _DWORD *a2, int a3)
{
  int result; // r0
  int v4; // r5
  char *v5; // r6
  char *v6; // r0
  char *v7; // r7
  char *v8; // r1
  char *v9; // r2
  char *v10; // r0
  int v11; // t1
  char v12; // r3
  char *v13; // [sp+Ch] [bp-8h] BYREF

  v13 = 0;
  result = sub_C8950(a1, a2, a3, (int *)&v13);
  v4 = result;
  if ( result )
  {
    v5 = (char *)(2 * (result + 1));
    v6 = (char *)CRYPTO_malloc(v5);
    v7 = v6;
    if ( v6 )
    {
      v8 = v13;
      v9 = v6 + 2;
      v10 = &v13[v4];
      do
      {
        v11 = (unsigned __int8)*v8++;
        v9 += 2;
        v12 = a0123456789abcd[v11 >> 4];
        *(v9 - 3) = a0123456789abcd[v11 & 0xF];
        *(v9 - 4) = v12;
      }
      while ( v8 != v10 );
      v7[(_DWORD)v5 - 2] = 0;
      CRYPTO_free(v13);
      return (int)v7;
    }
    else
    {
      CRYPTO_free(v13);
      return 0;
    }
  }
  return result;
}
