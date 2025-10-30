int __fastcall sub_140D34(int a1, int a2, int a3, _DWORD *a4)
{
  int *v4; // r5
  int v6; // r2

  v4 = *(int **)(a1 + 20);
  if ( a2 == 11 )
    return 1;
  if ( a2 > 11 )
  {
    if ( a2 == 4097 )
    {
      if ( a3 > 255 )
      {
        *v4 = a3;
        return 1;
      }
    }
    else if ( a2 <= 4097 )
    {
      if ( a2 == 13 )
      {
        *a4 = v4[5];
        return 1;
      }
    }
    else if ( a2 == 4098 )
    {
      if ( (a3 & 0xFFFFFFBF) == 0xA0 || (a3 & 0xFFFFFEFF) == 0 )
      {
        v4[1] = a3;
        return 1;
      }
    }
    else if ( a2 == 4099 )
    {
      if ( sub_D8C70((int)a4) != 64 && sub_D8C70((int)a4) != 675 && sub_D8C70((int)a4) != 672 )
      {
        v6 = 128;
LABEL_11:
        sub_D0048(10, 120, 106, (int)"crypto/dsa/dsa_pmeth.c", v6);
        return 0;
      }
      v4[2] = (int)a4;
      return 1;
    }
    return -2;
  }
  if ( a2 == 2 )
  {
    sub_D0048(10, 120, 150, (int)"crypto/dsa/dsa_pmeth.c", 163);
    return -2;
  }
  if ( a2 > 2 )
  {
    if ( a2 != 5 && a2 != 7 )
      return -2;
    return 1;
  }
  if ( a2 != 1 )
    return -2;
  if ( sub_D8C70((int)a4) != 64
    && sub_D8C70((int)a4) != 116
    && sub_D8C70((int)a4) != 66
    && sub_D8C70((int)a4) != 675
    && sub_D8C70((int)a4) != 672
    && sub_D8C70((int)a4) != 673
    && sub_D8C70((int)a4) != 674
    && sub_D8C70((int)a4) != 1096
    && sub_D8C70((int)a4) != 1097
    && sub_D8C70((int)a4) != 1098
    && sub_D8C70((int)a4) != 1099 )
  {
    v6 = 146;
    goto LABEL_11;
  }
  v4[5] = (int)a4;
  return 1;
}
