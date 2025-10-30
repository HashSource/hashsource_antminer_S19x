void *__fastcall sub_211FD8(void *a1, int a2, _DWORD *a3)
{
  void *result; // r0
  int v6; // r12
  _DWORD *v7; // r2
  int v8; // r3
  int v9; // r1

  result = memset(a1, 0, 4 * a2);
  v6 = *a3;
  if ( *a3 )
  {
    v7 = a3;
    v8 = 0;
    do
    {
      v9 = v7[3];
      ++v8;
      v7 += 3;
      if ( v9 != -1 )
      {
        result = (void *)*(v7 - 2);
        *((_DWORD *)a1 + v9) = result;
      }
    }
    while ( v8 != v6 );
  }
  return result;
}
