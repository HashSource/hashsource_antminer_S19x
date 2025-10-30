_BYTE *__fastcall sub_7EF30(_BYTE *result)
{
  char v1; // r3
  char v2; // r3
  char v3; // r3
  char v4; // r3
  char v5; // r3
  char v6; // r3
  char v7; // r3

  v1 = result[7] + 1;
  result[7] = v1;
  if ( !v1 )
  {
    v2 = result[6] + 1;
    result[6] = v2;
    if ( !v2 )
    {
      v3 = result[5] + 1;
      result[5] = v3;
      if ( !v3 )
      {
        v4 = result[4] + 1;
        result[4] = v4;
        if ( !v4 )
        {
          v5 = result[3] + 1;
          result[3] = v5;
          if ( !v5 )
          {
            v6 = result[2] + 1;
            result[2] = v6;
            if ( !v6 )
            {
              v7 = result[1] + 1;
              result[1] = v7;
              if ( !v7 )
                ++*result;
            }
          }
        }
      }
    }
  }
  return result;
}
