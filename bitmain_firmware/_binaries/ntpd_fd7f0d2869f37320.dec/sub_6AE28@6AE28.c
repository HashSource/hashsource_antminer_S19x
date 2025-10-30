int *__fastcall sub_6AE28(int a1)
{
  int v1; // r4
  signed int v2; // r4
  int *result; // r0
  int v4; // r3
  int v5; // r6
  int *i; // lr
  int v7; // r1

  dword_108234 = 0;
  dword_10822C = 0;
  dword_108238 = 0;
  dword_108230 = 0;
  v1 = dword_10823C;
  dword_10823C = 0;
  v2 = a1 + v1;
  result = (int *)sub_64BCC(0, v2, 0x8A4u, 0);
  if ( v2 > 0 )
  {
    v4 = 0;
    v5 = dword_108240;
    for ( i = result; ; i += 553 )
    {
      ++v4;
      ++dword_10822C;
      v7 = dword_108234;
      *i = v5;
      v5 = (int)i;
      dword_108234 = v7 + 1;
      if ( v2 == v4 )
        break;
    }
    dword_108240 = (int)&result[553 * v2 - 553];
  }
  ++dword_108238;
  return result;
}
