int __fastcall sub_26C444(int result)
{
  if ( (*(_BYTE *)(result + 4) & 0x10) == 0 )
    return sub_26C3B8(result);
  ++*(_DWORD *)(result + 56);
  return result;
}
