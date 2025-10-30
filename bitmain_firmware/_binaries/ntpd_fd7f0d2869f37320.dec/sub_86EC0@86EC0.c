const char *__fastcall sub_86EC0(const char *result, int a2)
{
  bool v2; // cc
  char *v4; // r1

  v2 = a2 != 0;
  if ( a2 )
    v2 = (unsigned int)result > 0xF;
  if ( v2 && (*(_DWORD *)(a2 + 16) & 8) == 0 )
  {
    result = *(const char **)(a2 + 24);
    if ( result )
    {
      v4 = sub_7FA64(result);
      return (const char *)sub_7FC64((int **)(a2 + 28), (int)v4);
    }
  }
  return result;
}
