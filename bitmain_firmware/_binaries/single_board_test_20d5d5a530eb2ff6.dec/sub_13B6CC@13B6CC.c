int __fastcall sub_13B6CC(int a1, char *s)
{
  int result; // r0
  int v4; // r4

  if ( s )
  {
    result = (int)_strdup(s);
    v4 = result;
    if ( !result )
      return result;
  }
  else
  {
    v4 = 0;
  }
  free(*(void **)(a1 + 4));
  *(_DWORD *)(a1 + 4) = v4;
  return 1;
}
