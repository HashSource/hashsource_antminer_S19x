void *__fastcall sub_12D38(_DWORD *a1, _DWORD *a2)
{
  void *result; // r0

  if ( *a2 != 10 )
    sub_10C38();
  if ( a2[1] || a2[2] || a2[3] != -65536 )
    sub_10C38();
  result = memset(a1, 0, 0x18u);
  *a1 = 2;
  a1[1] = a2[4];
  return result;
}
