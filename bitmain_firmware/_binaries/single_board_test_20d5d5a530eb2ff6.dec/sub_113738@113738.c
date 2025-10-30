int __fastcall sub_113738(int a1, char *s, void *a3)
{
  int v4; // r7
  char *v5; // r4
  void *v6; // r6
  int result; // r0

  v4 = a1 + 52;
  v5 = s;
  if ( !s )
  {
    v6 = 0;
LABEL_5:
    CRYPTO_free(*(void **)(a1 + 48));
    *(_DWORD *)(a1 + 48) = v5;
    if ( v4 )
      *(_DWORD *)(a1 + 52) = v6;
    return 1;
  }
  v6 = a3;
  if ( !a3 )
    v6 = (void *)strlen(s);
  result = (int)sub_E9E68(v5, v6);
  v5 = (char *)result;
  if ( result )
    goto LABEL_5;
  return result;
}
