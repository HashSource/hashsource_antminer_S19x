int __fastcall sub_8C4A8(int a1, _DWORD *a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 1480);
  if ( result )
  {
    if ( a2 )
      *a2 = result + 8;
    return 32;
  }
  return result;
}
