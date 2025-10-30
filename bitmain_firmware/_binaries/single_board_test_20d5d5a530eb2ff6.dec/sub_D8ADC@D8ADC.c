int __fastcall sub_D8ADC(int a1)
{
  int v1; // r0
  int v2; // r4
  int v4; // r5
  int v5; // r1
  int v6; // r2
  int v7; // r3

  v1 = sub_D8AD8(a1);
  if ( v1 == 429 )
    return 429;
  v2 = v1;
  if ( v1 >= 430 )
  {
    if ( v1 == 654 )
      return 425;
    if ( v1 <= 654 )
    {
      if ( v1 == 651 )
        return 425;
      if ( v1 < 652 )
      {
        if ( v1 != 650 )
          goto LABEL_25;
        return 421;
      }
      if ( v1 != 652 )
        return 421;
    }
    else
    {
      if ( v1 > 657 )
      {
        if ( v1 < 660 )
          return 30;
        goto LABEL_25;
      }
      if ( v1 >= 656 )
        return 30;
    }
    return 429;
  }
  if ( v1 == 97 )
    return 5;
  if ( v1 > 97 )
  {
    if ( v1 == 166 )
      return 37;
    if ( v1 <= 166 )
    {
      if ( v1 == 98 )
        return 37;
      goto LABEL_25;
    }
    if ( v1 != 421 )
    {
      if ( v1 != 425 )
        goto LABEL_25;
      return 425;
    }
    return 421;
  }
  if ( v1 == 30 )
    return 30;
  if ( v1 > 30 )
  {
    if ( v1 != 37 )
    {
      if ( v1 == 61 )
        return 30;
      goto LABEL_25;
    }
    return 37;
  }
  if ( v1 == 5 )
    return 5;
LABEL_25:
  v4 = sub_EAA20(v1);
  if ( !sub_EB280() )
    v2 = 0;
  ASN1_OBJECT_free(v4, v5, v6, v7);
  return v2;
}
