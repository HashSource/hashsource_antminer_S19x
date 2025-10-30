int __fastcall sub_C5BBC(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12);
  if ( result )
    return sub_C6288(result, a2);
  return result;
}
