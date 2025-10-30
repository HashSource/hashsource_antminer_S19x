int __fastcall sub_13F5F0(int a1, char *s1, const char *a3)
{
  int v7; // r4
  unsigned int v8; // r0
  int v9; // r4
  char *v10; // r0

  if ( !strcmp(s1, "dh_paramgen_prime_len") )
    goto LABEL_11;
  if ( !strcmp(s1, "dh_rfc5114") )
  {
    v7 = *(_DWORD *)(a1 + 20);
    v8 = strtol(a3, 0, 10);
    if ( v8 <= 3 )
    {
      *(_DWORD *)(v7 + 24) = v8;
      return 1;
    }
    return -2;
  }
  if ( strcmp(s1, "dh_param") )
  {
    if ( strcmp(s1, "dh_paramgen_generator") && strcmp(s1, "dh_paramgen_subprime_len") && strcmp(s1, "dh_paramgen_type") )
    {
      if ( !strcmp(s1, "dh_pad") )
      {
        strtol(a3, 0, 10);
        return sub_DB77C(a1, 28, 1024);
      }
      return -2;
    }
LABEL_11:
    strtol(a3, 0, 10);
    return sub_DB77C(a1, 28, 2);
  }
  v9 = *(_DWORD *)(a1 + 20);
  v10 = sub_EAFD0((int)a3);
  if ( v10 )
  {
    *(_DWORD *)(v9 + 28) = v10;
    return 1;
  }
  sub_D0048(5, 120, 110, (int)"crypto/dh/dh_pmeth.c", 244);
  return -2;
}
