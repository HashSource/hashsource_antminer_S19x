int __fastcall sub_2ABCD8(int a1, char *a2, _DWORD *a3)
{
  int v3; // lr
  unsigned int v4; // r3
  int result; // r0
  char v6; // r12
  char v7; // t1

  v3 = 0;
  v4 = 0;
  result = 0;
  do
  {
    ++v3;
    v7 = *a2++;
    v6 = v7;
    result |= (v7 & 0x7F) << v4;
    v4 += 7;
  }
  while ( v7 < 0 );
  if ( v4 <= 0x1F && (v6 & 0x40) != 0 )
    result |= -1 << v4;
  *a3 = v3;
  return result;
}
