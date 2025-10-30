_QWORD *__fastcall sub_47F30(int a1)
{
  __int64 v1; // r4
  _QWORD *result; // r0

  if ( a1 && *(_DWORD *)a1 == 3 )
    v1 = *(_QWORD *)(a1 + 8);
  else
    v1 = 0;
  result = sub_4774C((void *)0x10);
  if ( result )
  {
    result[1] = v1;
    *(_DWORD *)result = 3;
    *((_DWORD *)result + 1) = 1;
  }
  return result;
}
