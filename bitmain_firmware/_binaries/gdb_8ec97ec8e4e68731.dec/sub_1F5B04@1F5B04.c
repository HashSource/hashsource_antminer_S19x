_DWORD *__fastcall sub_1F5B04(_DWORD *result, int a2, int *a3)
{
  int v3; // r3
  int v4; // lr
  int v5; // r3
  _DWORD *v6; // lr
  int v7; // r3

  v3 = 678152731 * ((a2 - (int)result) >> 2);
  v4 = v3 >> 2;
  if ( v3 >> 2 > 0 )
  {
    v5 = *a3;
    v6 = &result[76 * v4];
    while ( 1 )
    {
      if ( *result == v5 && result[1] == a3[1] )
      {
        if ( result[2] == a3[2] )
          return result;
        if ( v5 == result[19] )
        {
LABEL_11:
          if ( result[20] == a3[1] && result[21] == a3[2] )
          {
            result += 19;
            return result;
          }
        }
      }
      else if ( v5 == result[19] )
      {
        goto LABEL_11;
      }
      if ( v5 == result[38] && result[39] == a3[1] && result[40] == a3[2] )
      {
        result += 38;
        return result;
      }
      if ( v5 == result[57] && result[58] == a3[1] && result[59] == a3[2] )
      {
        result += 57;
        return result;
      }
      result += 76;
      if ( result == v6 )
      {
        v3 = 678152731 * ((a2 - (int)result) >> 2);
        break;
      }
    }
  }
  if ( v3 == 2 )
  {
    v7 = *a3;
    if ( *result != *a3 )
      goto LABEL_27;
LABEL_34:
    if ( result[1] == a3[1] && result[2] == a3[2] )
      return result;
    goto LABEL_27;
  }
  if ( v3 != 3 )
  {
    if ( v3 != 1 )
      return (_DWORD *)a2;
    v7 = *a3;
    goto LABEL_28;
  }
  v7 = *a3;
  if ( *result == *a3 && result[1] == a3[1] && result[2] == a3[2] )
    return result;
  result += 19;
  if ( *result == v7 )
    goto LABEL_34;
LABEL_27:
  result += 19;
LABEL_28:
  if ( *result != v7 || result[1] != a3[1] || result[2] != a3[2] )
    return (_DWORD *)a2;
  return result;
}
