unsigned int __fastcall sub_2AB878(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r12
  unsigned int result; // r0
  int v7; // r1
  int v8; // r1
  int v9; // lr

  v3 = a2 & 7;
  if ( (a2 & 7) != 0 )
    sub_2A6BF0((int)"libbfd.c", 768, (int)"bfd_get_bits");
  v4 = a2 / 8;
  if ( a2 / 8 <= 0 )
    return 0;
  result = 0;
  v7 = 0;
  do
  {
    v8 = v7 << 8;
    if ( a3 )
      v9 = v3;
    else
      v9 = v4 - 1 - v3;
    ++v3;
    v7 = v8 | HIBYTE(result);
    result = *(unsigned __int8 *)(a1 + v9) | (result << 8);
  }
  while ( v4 != v3 );
  return result;
}
