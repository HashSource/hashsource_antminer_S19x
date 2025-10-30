int __fastcall sub_DF260(int a1, char *s1, int a3)
{
  int *v6; // r4
  int v7; // r0
  char *v9; // r2
  int v10; // r0
  int v11; // r1

  if ( !a3 )
  {
    sub_D0048(52, 100, 102, (int)"crypto/kdf/tls1_prf.c", 97);
    return 0;
  }
  if ( *s1 == 109 && s1[1] == 100 && !s1[2] )
  {
    v6 = *(int **)(a1 + 20);
    v7 = sub_D99DC(a3);
    if ( v7 )
    {
      *v6 = v7;
      return 1;
    }
    else
    {
      sub_D0048(52, 100, 100, (int)"crypto/kdf/tls1_prf.c", 105);
      return 0;
    }
  }
  if ( !strcmp(s1, "secret") )
  {
    v9 = (char *)a3;
    v10 = a1;
    v11 = 4097;
    return sub_DB850(v10, v11, v9);
  }
  if ( !strcmp(s1, "hexsecret") )
    return sub_DB880(a1, 4097, a3);
  if ( !strcmp(s1, "seed") )
  {
    v9 = (char *)a3;
    v10 = a1;
    v11 = 4098;
    return sub_DB850(v10, v11, v9);
  }
  if ( !strcmp(s1, "hexseed") )
    return sub_DB880(a1, 4098, a3);
  sub_D0048(52, 100, 103, (int)"crypto/kdf/tls1_prf.c", 120);
  return -2;
}
