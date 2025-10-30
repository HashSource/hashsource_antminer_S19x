_QWORD *__fastcall sub_6E400(__int64 a1)
{
  _QWORD *result; // r0

  result = sub_6D500((void *)0x10);
  if ( result )
  {
    result[1] = a1;
    *result = 0x100000003LL;
  }
  return result;
}
