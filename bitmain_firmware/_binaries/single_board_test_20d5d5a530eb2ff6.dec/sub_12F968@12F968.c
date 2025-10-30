_DWORD *__fastcall sub_12F968(_DWORD *result, int *a2, int a3)
{
  int *v3; // r6
  _DWORD *v4; // r5
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r3

  if ( a3 > 0 )
  {
    if ( (a3 & 0xFFFFFFFC) == 0 )
      goto LABEL_6;
    v3 = a2 + 4;
    v4 = result + 8;
    do
    {
      v5 = *(v3 - 4);
      a3 -= 4;
      *(v4 - 7) = 0;
      a2 = v3;
      result = v4;
      v3 += 4;
      v4 += 8;
      *(v4 - 16) = v5 * v5;
      v6 = *(v3 - 7);
      *(v4 - 13) = 0;
      *(v4 - 14) = v6 * v6;
      v7 = *(v3 - 6);
      *(v4 - 11) = 0;
      *(v4 - 12) = v7 * v7;
      v8 = *(v3 - 5);
      *(v4 - 9) = 0;
      *(v4 - 10) = v8 * v8;
    }
    while ( (a3 & 0xFFFFFFFC) != 0 );
    if ( a3 )
    {
LABEL_6:
      v9 = *a2;
      result[1] = 0;
      *result = v9 * v9;
      if ( a3 != 1 )
      {
        v10 = a2[1];
        result[3] = 0;
        result[2] = v10 * v10;
        if ( a3 != 2 )
        {
          v11 = a2[2];
          result[5] = 0;
          result[4] = v11 * v11;
        }
      }
    }
  }
  return result;
}
