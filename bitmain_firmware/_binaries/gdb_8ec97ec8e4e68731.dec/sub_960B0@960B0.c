unsigned int __fastcall sub_960B0(int a1, int *a2)
{
  __int16 v2; // r3
  unsigned int result; // r0
  int v4; // r2

  v2 = a1;
  result = a1 & 0xFFFFF1F4;
  if ( result )
    return -1;
  v4 = v2 & 0x200;
  if ( (v2 & 0x200) != 0 )
    v4 = 64;
  if ( (v2 & 0x800) != 0 )
    v4 |= 0x80u;
  if ( (v2 & 0x400) != 0 )
    v4 |= 0x200u;
  if ( (v2 & 8) != 0 )
    v4 |= 0x400u;
  if ( (v2 & 1) != 0 )
    v4 |= 1u;
  if ( (v2 & 2) != 0 )
    v4 |= 2u;
  *a2 = v4;
  return result;
}
