int __fastcall sub_4BAF4(int a1, int a2, _WORD *a3)
{
  int v5; // r0
  __int16 v7; // r3
  int v8; // r1

  v5 = (__int16)a3[256];
  v7 = a3[253] + 1;
  v8 = (__int16)word_99158[v5];
  a3[253] = v7;
  if ( v7 >= sub_8CE58((__int16)word_99164[v5], v8) )
    return sub_4B988(a1, a2);
  sub_4BA64(a1, a2);
  a3[254] = 0;
  return 0;
}
