int __fastcall sub_BD344(int a1)
{
  int result; // r0

  result = sub_BD304((_BYTE *)a1);
  if ( result )
  {
    result = *(_DWORD *)(a1 + 44);
    if ( result )
      return *(_DWORD *)(a1 + 48) != 0;
  }
  return result;
}
