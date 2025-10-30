void *__fastcall sub_81D10(_DWORD *a1)
{
  void *result; // r0

  a1[8] = 0;
  a1[9] = 0;
  a1[271] = 0;
  a1[270] = 0;
  a1[269] = 0;
  a1[267] = 0;
  a1[268] = 0;
  result = memset(a1 + 10, 0, 0x401u);
  if ( a1[272] )
    result = (void *)sub_885E4(a1[272]);
  a1[272] = 0;
  return result;
}
