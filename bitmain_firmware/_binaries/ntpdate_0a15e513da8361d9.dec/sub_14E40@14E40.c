void *__fastcall sub_14E40(_DWORD *a1, const void *a2, size_t a3)
{
  int v4; // r3
  void *result; // r0

  if ( !a1 || *a1 != 1114990113 )
    sub_10C38();
  v4 = a1[3];
  if ( a3 + v4 > a1[2] )
    sub_10C38();
  result = memcpy((void *)(a1[1] + v4), a2, a3);
  a1[3] += a3;
  return result;
}
