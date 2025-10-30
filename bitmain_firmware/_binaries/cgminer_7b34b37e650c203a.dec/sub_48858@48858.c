_QWORD *__fastcall sub_48858(__int64 a1)
{
  _QWORD *result; // r0

  result = sub_4774C((void *)0x10);
  if ( result )
  {
    result[1] = a1;
    *(_DWORD *)result = 3;
    *((_DWORD *)result + 1) = 1;
  }
  return result;
}
