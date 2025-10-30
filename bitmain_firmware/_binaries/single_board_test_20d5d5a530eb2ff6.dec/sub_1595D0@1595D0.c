unsigned int __fastcall sub_1595D0(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r5
  int v7; // r4
  int *v8; // r6
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r6

  v5 = *(_DWORD *)(a1 + 20);
  if ( a2 == 4098 )
  {
    v7 = *(_DWORD *)v5;
    if ( *(_DWORD *)v5 )
    {
      sub_C6288(*(_DWORD *)v5, a3);
      return 1;
    }
    else
    {
      sub_D0048(16, 197, 139, (int)"crypto/ec/ec_pmeth.c", 240);
    }
    return v7;
  }
  if ( a2 <= 4098 )
  {
    if ( a2 != 7 )
    {
      if ( a2 <= 7 )
      {
        if ( a2 != 2 && a2 != 5 )
        {
          if ( a2 != 1 )
            return -2;
          if ( sub_D8C70((int)a4) == 64
            || sub_D8C70((int)a4) == 416
            || sub_D8C70((int)a4) == 675
            || sub_D8C70((int)a4) == 672
            || sub_D8C70((int)a4) == 673
            || sub_D8C70((int)a4) == 674
            || sub_D8C70((int)a4) == 1096
            || sub_D8C70((int)a4) == 1097
            || sub_D8C70((int)a4) == 1098
            || sub_D8C70((int)a4) == 1099 )
          {
            *(_DWORD *)(v5 + 4) = a4;
            return 1;
          }
          else
          {
            v7 = 0;
            sub_D0048(16, 197, 138, (int)"crypto/ec/ec_pmeth.c", 331);
          }
          return v7;
        }
      }
      else
      {
        if ( a2 == 13 )
        {
          v7 = 1;
          *a4 = *(_DWORD *)(v5 + 4);
          return v7;
        }
        if ( a2 == 4097 )
        {
          v11 = sub_C4BE8(a3);
          if ( v11 )
          {
            v7 = 1;
            sub_C64B8(*(_DWORD *)v5);
            *(_DWORD *)v5 = v11;
          }
          else
          {
            v7 = 0;
            sub_D0048(16, 197, 141, (int)"crypto/ec/ec_pmeth.c", 231);
          }
          return v7;
        }
        if ( a2 != 11 )
          return -2;
      }
    }
    return 1;
  }
  if ( a2 == 4102 )
  {
    v7 = 1;
    *a4 = *(_DWORD *)(v5 + 16);
    return v7;
  }
  if ( a2 <= 4102 )
  {
    if ( a2 == 4100 )
    {
      if ( a3 == -2 )
        return *(unsigned __int8 *)(v5 + 13);
      if ( (unsigned int)(a3 - 1) <= 1 )
      {
        *(_BYTE *)(v5 + 13) = a3;
        return 1;
      }
      return -2;
    }
    if ( a2 > 4100 )
    {
      *(_DWORD *)(v5 + 16) = a4;
      return 1;
    }
    if ( a3 == -2 )
    {
      v7 = *(char *)(v5 + 12);
      if ( v7 == -1 )
        return ((unsigned int)sub_C5BD4(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 24)) >> 12) & 1;
      return v7;
    }
    if ( (unsigned int)(a3 + 1) > 2 )
      return -2;
    *(_BYTE *)(v5 + 12) = a3;
    if ( a3 == -1 )
    {
      v7 = 1;
      sub_C5410(*(_DWORD *)(v5 + 8));
      *(_DWORD *)(v5 + 8) = 0;
      return v7;
    }
    v8 = *(int **)(*(_DWORD *)(a1 + 8) + 24);
    v9 = v8[3];
    if ( !v9 )
      return -2;
    v7 = sub_B86D8(*(_DWORD *)(v9 + 12));
    if ( !v7 )
    {
      v10 = *(_DWORD **)(v5 + 8);
      if ( v10 || (v10 = sub_C562C(v8), (*(_DWORD *)(v5 + 8) = v10) != 0) )
      {
        if ( a3 )
          sub_C5BD8((int)v10, 4096);
        else
          sub_C5BE0((int)v10, 4096);
        return 1;
      }
      return v7;
    }
    return 1;
  }
  if ( a2 == 4104 )
  {
    v7 = 1;
    *a4 = *(_DWORD *)(v5 + 28);
    return v7;
  }
  if ( a2 < 4104 )
  {
    if ( a3 > 0 )
    {
      *(_DWORD *)(v5 + 28) = a3;
      return 1;
    }
    return -2;
  }
  if ( a2 != 4105 )
  {
    if ( a2 == 4106 )
    {
      v7 = *(_DWORD *)(v5 + 24);
      *a4 = *(_DWORD *)(v5 + 20);
      return v7;
    }
    return -2;
  }
  CRYPTO_free(*(void **)(v5 + 20));
  *(_DWORD *)(v5 + 20) = a4;
  if ( a4 )
    *(_DWORD *)(v5 + 24) = a3;
  else
    *(_DWORD *)(v5 + 24) = 0;
  return 1;
}
