int __fastcall sub_C2668(int result)
{
  int v1; // r3
  int v2; // r2

  if ( result )
  {
    v1 = *(_DWORD *)(result + 12);
    if ( v1 )
    {
      while ( 1 )
      {
        v2 = v1;
        v1 = *(_DWORD *)(v1 + 12);
        if ( !v1 )
          break;
        result = v2;
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}
