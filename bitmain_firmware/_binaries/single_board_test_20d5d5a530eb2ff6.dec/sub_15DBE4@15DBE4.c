int *__fastcall sub_15DBE4(int *result, _BYTE *a2, int *a3)
{
  int v3; // r3
  int *v5; // r4

  v3 = *result;
  if ( *result )
  {
    v5 = result;
    result = (int *)sub_15D868((int)result, a2, (int)(result + 2), v3);
    if ( (v5[23] & 1) == 0 )
    {
      *((_BYTE *)result + (_DWORD)a2) = 10;
      result = (int *)((char *)result + 1);
    }
    v3 = (int)result;
    *((_BYTE *)result + (_DWORD)a2) = 0;
    *v5 = 0;
  }
  *a3 = v3;
  return result;
}
