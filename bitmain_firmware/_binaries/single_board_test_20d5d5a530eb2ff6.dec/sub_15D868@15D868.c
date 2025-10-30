int __fastcall sub_15D868(int a1, _BYTE *a2, int a3, int a4)
{
  const char *v4; // r7
  int v5; // r2
  _BYTE *v6; // r5
  int result; // r0
  unsigned int v8; // r4
  char v9; // r4
  char v10; // r1
  unsigned int v11; // r1

  if ( a1 )
  {
    if ( (*(_DWORD *)(a1 + 92) & 2) != 0 )
      v4 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz./";
    else
      v4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  }
  else
  {
    v4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  }
  if ( a4 <= 0 )
  {
    result = 0;
  }
  else
  {
    v5 = a3 + 3;
    v6 = a2 + 4;
    result = 0;
    do
    {
      a2 = v6;
      if ( a4 <= 2 )
      {
        v9 = 61;
        if ( a4 == 2 )
        {
          v11 = (*(unsigned __int8 *)(v5 - 3) << 16) | (*(unsigned __int8 *)(v5 - 2) << 8);
          *(v6 - 4) = v4[v11 >> 18];
          *(v6 - 3) = v4[(v11 >> 12) & 0x3F];
          v9 = v4[(v11 >> 6) & 0x3F];
        }
        else
        {
          v10 = 16 * *(_BYTE *)(v5 - 3);
          *(v6 - 4) = v4[*(unsigned __int8 *)(v5 - 3) >> 2];
          *(v6 - 3) = v4[v10 & 0x3F];
        }
        a2 = v6;
        *(v6 - 1) = 61;
        *(v6 - 2) = v9;
      }
      else
      {
        v8 = *(unsigned __int8 *)(v5 - 1) | (*(unsigned __int8 *)(v5 - 2) << 8) | (*(unsigned __int8 *)(v5 - 3) << 16);
        *(v6 - 4) = v4[v8 >> 18];
        *(v6 - 3) = v4[(v8 >> 12) & 0x3F];
        *(v6 - 2) = v4[(v8 >> 6) & 0x3F];
        *(v6 - 1) = v4[v8 & 0x3F];
      }
      a4 -= 3;
      result += 4;
      v5 += 3;
      v6 += 4;
    }
    while ( a4 > 0 );
  }
  *a2 = 0;
  return result;
}
