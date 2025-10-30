_DWORD *__fastcall sub_235F8(_DWORD *result, int *a2)
{
  int v2; // lr
  int v3; // r2
  int v4; // r3
  __int64 v5; // r2

  v2 = a2[1];
  v3 = *result + *a2;
  *a2 = v3;
  v4 = result[1] + v2;
  a2[1] = v4;
  if ( v4 > 999999 )
  {
    LODWORD(v5) = v3 + 1;
    HIDWORD(v5) = v4 - 1000000;
    *(_QWORD *)a2 = v5;
  }
  return result;
}
