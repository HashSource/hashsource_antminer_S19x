int __fastcall sub_A18CC(int a1)
{
  int result; // r0
  int v2; // r3
  int v3; // r3

  result = sub_A0870(a1);
  if ( result )
  {
    v2 = *(_DWORD *)(result + 24);
    if ( *(_BYTE *)v2 == 1 )
    {
      result = *(_DWORD *)(v2 + 20);
      if ( result )
      {
        v3 = *(_DWORD *)(result + 24);
        result = *(_DWORD *)(v3 + 8);
        if ( result )
          return strcmp((const char *)result, "ada__tags__dispatch_table") == 0;
        result = *(_DWORD *)(v3 + 12);
        if ( result )
          return strcmp((const char *)result, "ada__tags__dispatch_table") == 0;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
