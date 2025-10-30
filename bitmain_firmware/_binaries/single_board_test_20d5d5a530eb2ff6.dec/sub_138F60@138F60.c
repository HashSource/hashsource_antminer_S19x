int *__fastcall sub_138F60(int *a1)
{
  int *result; // r0
  int v2; // r3
  void *v3; // r0

  result = (int *)sub_138ED0(a1);
  if ( result )
  {
    v2 = *result;
    if ( *result )
    {
      if ( *(_DWORD *)(v2 + 12) != 32 )
        return sub_B7E48(*(const char **)(v2 + 8), *(_DWORD *)v2);
      v3 = sub_B7E30();
    }
    else
    {
      v3 = sub_12F3FC();
    }
    return sub_B655C((int)v3);
  }
  return result;
}
