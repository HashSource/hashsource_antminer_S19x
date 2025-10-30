int __fastcall sub_40110(int result)
{
  int v1; // r0

  if ( result )
  {
    if ( !*(_DWORD *)(result + 180) )
    {
      if ( (*(_DWORD *)(result + 12) & 0x20) != 0 )
        return sub_3FD14();
      v1 = sub_1B87A8(result);
      result = sub_201648(v1);
      if ( result )
        return sub_3FD14();
    }
  }
  return result;
}
