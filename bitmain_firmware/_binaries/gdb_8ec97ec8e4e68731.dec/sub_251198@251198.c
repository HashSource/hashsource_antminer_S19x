int __fastcall sub_251198(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  char v4; // r4
  unsigned int v5; // lr
  unsigned int v6; // r3
  unsigned int v7; // r12
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r4
  unsigned int v13; // r3
  unsigned int v14; // r2

  v5 = a4;
  if ( HIDWORD(a1) > 1 )
  {
    a1 = sub_94700(
           (int)"./target-float.c",
           177,
           "%s: Assertion `%s' failed.",
           "long unsigned int get_field(const bfd_byte*, floatformat_byteorders, unsigned int, unsigned int, unsigned int)",
           "order == floatformat_little || order == floatformat_big");
LABEL_19:
    v9 = (int)*(unsigned __int8 *)(a1 + (v13 >> 3)) >> -v4;
    goto LABEL_17;
  }
  if ( !HIDWORD(a1) )
  {
    v6 = a4 + 8 - (a2 & 7) + a3;
    v7 = v6 & 7;
    v8 = (a2 >> 3) - (v6 >> 3);
    if ( (v6 & 7) != 0 )
    {
      v9 = (int)*(unsigned __int8 *)(a1 + v8) >> (8 - v7);
    }
    else
    {
      v7 = 0;
      v9 = 0;
    }
    v10 = v8 + 1;
    goto LABEL_11;
  }
  v13 = a3 + a4;
  v7 = v13 & 7;
  v14 = v13 >> 3;
  v4 = (v13 & 7) - 8;
  if ( (v13 & 7) != 0 )
    goto LABEL_19;
  v7 = 0;
  v9 = 0;
LABEL_17:
  v10 = v14 - 1;
LABEL_11:
  while ( v5 > v7 )
  {
    v11 = *(unsigned __int8 *)(a1 + v10);
    if ( HIDWORD(a1) == 1 )
      --v10;
    else
      ++v10;
    v9 |= v11 << v7;
    v7 += 8;
  }
  if ( v5 <= 0x1F )
    return v9 & ~(-1 << v5);
  return v9;
}
