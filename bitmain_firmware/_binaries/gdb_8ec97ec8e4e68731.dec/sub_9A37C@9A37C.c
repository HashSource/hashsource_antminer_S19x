int __fastcall sub_9A37C(int result)
{
  char *v1; // r2
  int v2; // r3
  int v3; // r3

  if ( result )
  {
    v1 = *(char **)(result + 24);
    v2 = *v1;
    if ( v2 < 8 )
      return 0;
    if ( v2 <= 9 )
      return 1;
    if ( v2 == 12 )
    {
      v3 = *((_DWORD *)v1 + 5);
      if ( v3 == result )
        return 1;
      return sub_9A37C(v3) != 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
