const char *__fastcall sub_2CE3F0(int a1, int a2, unsigned int *a3)
{
  _DWORD *v3; // r12
  const char *result; // r0
  unsigned int v5; // r3
  unsigned int v6; // r1
  int v7; // r12
  int v8; // r3

  v3 = *(_DWORD **)(a1 + 160);
  result = (const char *)v3[582];
  if ( result )
  {
    if ( v3[583] || (result = (const char *)v3[584]) != 0 )
    {
      v5 = *(unsigned __int16 *)(a2 + 48);
      v6 = v5 & 0x7FFF;
      *a3 = v5 >> 15;
      if ( (v5 & 0x7FFF) != 0 )
      {
        if ( v6 == 1 )
        {
          return "Base";
        }
        else if ( v3[142] >= v6 )
        {
          return *(const char **)(v3[144] + 40 * v6 - 16);
        }
        else
        {
          v7 = v3[145];
          for ( result = ""; v7; v7 = *(_DWORD *)(v7 + 28) )
          {
            v8 = *(_DWORD *)(v7 + 24);
            if ( v8 )
            {
              while ( *(unsigned __int16 *)(v8 + 6) != v6 )
              {
                v8 = *(_DWORD *)(v8 + 20);
                if ( !v8 )
                  goto LABEL_12;
              }
              result = *(const char **)(v8 + 16);
            }
LABEL_12:
            ;
          }
        }
      }
      else
      {
        return "";
      }
    }
  }
  return result;
}
