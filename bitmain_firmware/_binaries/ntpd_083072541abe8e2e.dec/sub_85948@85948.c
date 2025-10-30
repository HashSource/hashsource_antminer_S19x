unsigned int __fastcall sub_85948(unsigned int result, int a2)
{
  bool v2; // cc
  const char *v4; // r6
  char *v5; // r1

  v2 = a2 != 0;
  if ( a2 )
    v2 = result > 0xF;
  if ( v2 && (*(_DWORD *)(a2 + 16) & 8) == 0 )
  {
    v4 = *(const char **)(a2 + 24);
    if ( v4 )
    {
      v5 = _strdup(*(const char **)(a2 + 24));
      if ( !v5 )
        sub_7E624(v4);
      return sub_7E784((int **)(a2 + 28), (int)v5);
    }
  }
  return result;
}
