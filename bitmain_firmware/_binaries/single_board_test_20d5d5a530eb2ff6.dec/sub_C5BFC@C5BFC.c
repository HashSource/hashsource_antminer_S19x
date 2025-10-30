int __fastcall sub_C5BFC(int result, int a2, int a3, int a4)
{
  int v4; // r5

  if ( result )
  {
    v4 = *(_DWORD *)(result + 16);
    if ( v4 )
    {
      result = *(_DWORD *)(result + 12);
      if ( result )
        return sub_C8950(result, v4, a2, a3, a4);
    }
    else
    {
      return 0;
    }
  }
  return result;
}
