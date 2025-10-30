_DWORD *__fastcall sub_130C74(_DWORD *result)
{
  int v1; // r3
  int v2; // r1
  int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r4
  int v6; // r2
  unsigned int v7; // r3
  int v8; // r1
  int v9; // r2
  bool v10; // cf

  if ( result )
  {
    v1 = result[9];
    if ( v1 )
    {
      result[9] = v1 - 1;
    }
    else
    {
      v2 = result[5];
      v3 = result[6] - 1;
      v4 = result[8];
      result[6] = v3;
      v5 = *(_DWORD *)(v2 + 4 * v3);
      if ( v4 > v5 )
      {
        v6 = result[3];
        v7 = v4 - v5;
        v8 = v6 - v7;
        v9 = ((_BYTE)v6 - 1) & 0xF;
        result[3] = v8;
        while ( 1 )
        {
          v10 = v7-- != 0;
          if ( !v10 )
            break;
          while ( !v9 )
          {
            v10 = v7-- != 0;
            v9 = 15;
            result[1] = *(_DWORD *)(result[1] + 320);
            if ( !v10 )
              goto LABEL_9;
          }
          --v9;
        }
      }
LABEL_9:
      result[8] = v5;
      result[10] = 0;
    }
  }
  return result;
}
