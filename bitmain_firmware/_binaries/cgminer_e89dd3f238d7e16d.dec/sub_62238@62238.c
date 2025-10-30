int __fastcall sub_62238(int result)
{
  int i; // [sp+4h] [bp-8h]

  for ( i = result; *(_BYTE *)(i + *(_DWORD *)(i + 16) + 8); ++*(_DWORD *)(i + 36) )
  {
    result = sub_620E0(i, *(_BYTE *)(i + *(_DWORD *)(i + 16) + 8));
    ++*(_DWORD *)(i + 16);
  }
  return result;
}
