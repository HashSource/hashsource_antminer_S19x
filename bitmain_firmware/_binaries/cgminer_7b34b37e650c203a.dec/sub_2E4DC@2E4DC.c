int __fastcall sub_2E4DC(int result, int a2)
{
  int v2; // r3

  if ( result )
  {
    v2 = *(_DWORD *)(result + 352);
    if ( a2 != *(_DWORD *)(result + 340) )
    {
      if ( v2 )
      {
        result = *(_DWORD *)(v2 + 352);
        while ( *(_DWORD *)(v2 + 340) != a2 )
        {
          v2 = result;
          if ( !result )
            return result;
          result = *(_DWORD *)(result + 352);
        }
      }
      return v2;
    }
  }
  return result;
}
