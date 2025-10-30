int *__fastcall sub_69EA8(int a1)
{
  int v1; // r6
  signed int v2; // r6
  int *result; // r0
  int v4; // r3
  int v5; // r4
  int *i; // lr
  int v7; // r1

  dword_107210 = 0;
  dword_107208 = 0;
  dword_107214 = 0;
  dword_10720C = 0;
  v1 = dword_107218;
  dword_107218 = 0;
  v2 = a1 + v1;
  result = (int *)sub_63C68(0, v2, 0x8A4u, 0);
  if ( v2 > 0 )
  {
    v4 = 0;
    v5 = dword_10721C;
    for ( i = result; ; i += 553 )
    {
      v7 = dword_107208;
      ++v4;
      *i = v5;
      v5 = (int)i;
      dword_107208 = v7 + 1;
      ++dword_107210;
      if ( v2 == v4 )
        break;
    }
    dword_10721C = (int)&result[553 * v2 - 553];
  }
  ++dword_107214;
  return result;
}
