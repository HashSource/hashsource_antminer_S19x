int __fastcall sub_1867C8(int result)
{
  char v1; // r2

  if ( result == -1 )
    return sub_1867A8();
  v1 = *(_BYTE *)(dword_48797C + result);
  if ( v1 )
  {
    v1 = 0;
  }
  else if ( !*(_BYTE *)(dword_487980 + result) && *(_BYTE *)(dword_487948 + result) == 1 )
  {
    v1 = *(_BYTE *)(dword_487984 + result) == 0;
  }
  *(_BYTE *)(dword_487988 + result) = v1;
  return result;
}
