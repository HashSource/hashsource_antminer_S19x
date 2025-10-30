_DWORD *__fastcall sub_2BC17C(_DWORD *result)
{
  int v1; // r4
  _DWORD *v2; // r6
  int v3; // r7
  int v4; // r2
  int *v5; // r5
  char *v6; // r7
  _DWORD *v7; // r8
  int v8; // r9

  v1 = result[40];
  if ( v1 )
  {
    if ( (*(_BYTE *)(v1 + 2340) & 0x3F) == 4 )
    {
      v2 = result;
      if ( ((result[10] >> 5) & 0x40) == 0 )
      {
        v3 = *(_DWORD *)(v1 + 104);
        result = (_DWORD *)sub_2CDA08((int)result, v1 + 72, v3, 0, 0, 0, 0);
        v5 = result;
        if ( result )
        {
          if ( v3 )
          {
            v6 = (char *)&result[5 * v3];
            do
            {
              result = (_DWORD *)sub_2CFEF4(v2, v5[4], v4);
              v7 = result;
              if ( result && !(*((unsigned __int8 *)v5 + 12) >> 4) )
              {
                v8 = sub_2CD844(v2, *(_DWORD *)(v1 + 100), v5[2]);
                result = (_DWORD *)sub_2FC434(v8, 1);
                if ( result )
                  result = sub_2B9E04((_DWORD *)v7[35], *(_BYTE *)(v8 + 1), *v5);
              }
              v5 += 5;
            }
            while ( v5 != (int *)v6 );
          }
        }
      }
    }
  }
  return result;
}
