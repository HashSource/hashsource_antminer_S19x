int __fastcall sub_322E4(int result)
{
  int v1; // r12
  unsigned int v2; // r1
  _BOOL4 v3; // r3
  int v4; // r3

  v1 = *(_BYTE *)result & 0xF;
  v2 = *(_BYTE *)(result + 2) / 3u;
  v3 = v2 <= 0x4D;
  if ( !*(_DWORD *)(dword_A0D68 + 4 * v1 + 4) )
    v3 = 0;
  if ( !v3 )
    return sub_3762C();
  v4 = *(unsigned __int8 *)(result + 1);
  if ( v4 == 144 )
  {
    if ( (*(_DWORD *)(result + 4) & 0x88) != 0 )
    {
      result = 78;
      *(_BYTE *)(*(_DWORD *)(dword_1AEA64 + 4) + 78 * v1 + v2) = 1;
    }
  }
  else
  {
    if ( v4 != 224 )
      return sub_3762C();
    return sub_321E0(*(_BYTE *)result & 0xF, v2, *(_DWORD *)(result + 4), dword_1AEA64 + 8);
  }
  return result;
}
