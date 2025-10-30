int __fastcall sub_2F6234(int a1, unsigned int a2)
{
  int result; // r0

  result = a1 + 12;
  while ( *(_DWORD *)(result + 4) > a2 || a2 >= *(_DWORD *)(result + 8) )
  {
    result = *(_DWORD *)result;
    if ( !result )
      return result;
  }
  return 1;
}
