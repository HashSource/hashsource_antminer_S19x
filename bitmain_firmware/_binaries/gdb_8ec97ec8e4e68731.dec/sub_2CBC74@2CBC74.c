_DWORD *__fastcall sub_2CBC74(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r7
  _DWORD *result; // r0
  char *v10; // lr
  int v11; // r1
  unsigned int v12; // r12
  int v13; // t1
  _BOOL4 v14; // r2

  v5 = a4 - a3;
  result = sub_2AD09C(a1, 4 * (a4 - a3) + 40);
  if ( result )
  {
    *(_QWORD *)result = 0x100000000LL;
    if ( a4 > a3 )
    {
      v10 = (char *)(result + 9);
      v11 = a2 + 4 * a3 - 4;
      v12 = a3;
      do
      {
        ++v12;
        v13 = *(_DWORD *)(v11 + 4);
        v11 += 4;
        *((_DWORD *)v10 + 1) = v13;
        v10 += 4;
      }
      while ( a4 != v12 );
    }
    result[9] = v5;
    if ( a3 )
      v14 = 0;
    else
      v14 = a5 != 0;
    if ( v14 )
      *((_BYTE *)result + 32) |= 0x30u;
  }
  return result;
}
