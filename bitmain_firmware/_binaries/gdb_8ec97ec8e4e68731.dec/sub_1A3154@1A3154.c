int __fastcall sub_1A3154(int a1, const char *a2, int a3, int a4)
{
  int result; // r0
  int v8; // r0

  result = strcmp(*(const char **)(a1 + 4), a2);
  if ( !result )
  {
    v8 = *(_DWORD *)(a1 + 8);
    if ( v8 )
    {
      if ( a3 )
        return sub_1A2D60(v8, *(_DWORD *)(a1 + 12), a3, a4);
      else
        return -1;
    }
    else
    {
      result = a3;
      if ( a3 )
        return 1;
    }
  }
  return result;
}
