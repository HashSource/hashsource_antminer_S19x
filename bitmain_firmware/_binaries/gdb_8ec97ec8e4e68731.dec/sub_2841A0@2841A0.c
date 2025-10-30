int __fastcall sub_2841A0(int result)
{
  int v1; // r2

  if ( byte_48AC2B && !*(_BYTE *)(result + 8 * (unsigned __int8)byte_48AC2B) )
    *(_DWORD *)(result + 8 * (unsigned __int8)byte_48AC2B + 4) = 2711208;
  if ( byte_48AC2D && !*(_BYTE *)(result + 8 * (unsigned __int8)byte_48AC2D) )
    *(_DWORD *)(result + 8 * (unsigned __int8)byte_48AC2D + 4) = 2711208;
  if ( byte_48AC35 && !*(_BYTE *)(result + 8 * (unsigned __int8)byte_48AC35) )
    *(_DWORD *)(result + 8 * (unsigned __int8)byte_48AC35 + 4) = 2711208;
  if ( byte_48AC2C )
  {
    v1 = *(unsigned __int8 *)(result + 8 * (unsigned __int8)byte_48AC2C);
    result += 8 * (unsigned __int8)byte_48AC2C;
    if ( !v1 )
      *(_DWORD *)(result + 4) = 2711208;
  }
  return result;
}
