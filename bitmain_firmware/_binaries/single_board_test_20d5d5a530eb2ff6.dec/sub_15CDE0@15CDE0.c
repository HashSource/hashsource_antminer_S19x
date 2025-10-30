_DWORD *__fastcall sub_15CDE0(int a1, int a2, int a3)
{
  _DWORD *result; // r0

  result = sub_E0740((void *)0x34);
  if ( result )
  {
    *result = a1;
    result[1] = a2;
    result[2] = a3;
  }
  return result;
}
