int *__fastcall sub_330DCC(int *result, unsigned __int8 *a2, unsigned int a3)
{
  int v3; // r3
  unsigned int v4; // r6
  int v5; // r5
  _WORD *v6; // r5
  int v7; // r4
  int v8; // r4
  __int16 v9; // r3
  __int16 v10; // t1

  v3 = *result;
  v4 = (unsigned int)result + 10;
  if ( *result > 49 )
    v5 = (((2863311531u * (unsigned __int64)(unsigned int)(v3 + 2)) >> 32) & 0xFFFFFFFE) - 2;
  else
    v5 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v3) + 0x7FFFFFFF);
  v6 = (_WORD *)(v4 + v5);
  if ( a3 > 0x31 )
    v7 = 3 * ((a3 + 2) / 3) - 3;
  else
    v7 = 3 * *((unsigned __int8 *)&dword_438B18[5] + a3) - 3;
  v8 = a3 - v7;
  if ( v4 <= (unsigned int)v6 )
  {
    *v6 = 0;
    if ( v8 <= 0 )
      goto LABEL_9;
    while ( 1 )
    {
      v9 = 0;
      do
      {
        v10 = *a2++;
        --v8;
        v9 = v10 + 10 * v9;
        *v6 = v9;
      }
      while ( v8 );
LABEL_9:
      if ( v4 > (unsigned int)(v6 - 1) )
        break;
      v8 = 3;
      *--v6 = 0;
    }
  }
  *result = a3;
  return result;
}
