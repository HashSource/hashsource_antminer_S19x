int __fastcall sub_1744F0(int a1)
{
  int result; // r0

  result = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 32);
  if ( result )
  {
    while ( *(_DWORD *)result != 1 )
    {
      result = *(_DWORD *)(result + 24);
      if ( !result )
        return result;
    }
    return *(_DWORD *)(result + 8) == 1 && *(_QWORD *)(result + 16) == 0;
  }
  return result;
}
