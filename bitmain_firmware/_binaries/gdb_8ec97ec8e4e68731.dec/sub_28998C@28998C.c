unsigned __int8 *__fastcall sub_28998C(unsigned __int8 *result, _DWORD *a2, _DWORD *a3)
{
  __int16 v3; // r3
  unsigned __int8 *v4; // r12
  int v5; // r0
  int v6; // lr
  char *v7; // r1

  if ( !a2 )
    a2 = off_46DED0;
  if ( result )
  {
    v3 = *result;
    if ( *result )
    {
      v4 = result + 1;
      while ( 1 )
      {
        if ( (v3 & 0x80) != 0 )
        {
          if ( dword_46DED8 )
          {
            v6 = *((unsigned __int8 *)a2 + 216);
            v3 &= 0x7Fu;
            result = (unsigned __int8 *)a2[55];
            a2 = result;
            if ( v6 != 1 )
            {
LABEL_12:
              if ( a3 )
                *a3 = v6;
              return result;
            }
          }
        }
        v5 = v3;
        v3 = *v4++;
        v6 = LOBYTE(a2[2 * v5]);
        v7 = (char *)&a2[2 * v5];
        if ( v6 != 1 )
          break;
        result = (unsigned __int8 *)*((_DWORD *)v7 + 1);
        if ( !*(v4 - 1) )
          goto LABEL_12;
        a2 = (_DWORD *)*((_DWORD *)v7 + 1);
      }
      if ( *(v4 - 1) )
      {
        return 0;
      }
      else
      {
        result = (unsigned __int8 *)*((_DWORD *)v7 + 1);
        if ( a3 )
          *a3 = v6;
      }
    }
    else
    {
      return (unsigned __int8 *)*result;
    }
  }
  return result;
}
