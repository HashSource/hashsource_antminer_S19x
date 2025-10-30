int __fastcall sub_13F740(int a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r5
  int result; // r0

  v4 = *(_DWORD *)(a1 + 20);
  if ( a2 == 4104 )
  {
    *a4 = *(_DWORD *)(v4 + 48);
    return 1;
  }
  if ( a2 <= 4104 )
  {
    if ( a2 == 4099 )
    {
      if ( (unsigned int)(a3 - 1) <= 2 && !*(_DWORD *)(v4 + 28) )
      {
        *(_DWORD *)(v4 + 24) = a3;
        return 1;
      }
      return -2;
    }
    if ( a2 <= 4099 )
    {
      if ( a2 == 4097 )
      {
        if ( a3 <= 255 )
          return -2;
        *(_DWORD *)v4 = a3;
        return 1;
      }
      else
      {
        if ( a2 <= 4097 )
        {
          if ( a2 == 2 )
            return 1;
          return -2;
        }
        if ( *(_DWORD *)(v4 + 8) )
          return -2;
        *(_DWORD *)(v4 + 4) = a3;
        return 1;
      }
    }
    else
    {
      if ( a2 == 4101 )
      {
        if ( (unsigned int)a3 <= 2 )
        {
          *(_DWORD *)(v4 + 8) = a3;
          return 1;
        }
        return -2;
      }
      if ( a2 < 4101 )
      {
        if ( *(_DWORD *)(v4 + 8) )
        {
          *(_DWORD *)(v4 + 12) = a3;
          return 1;
        }
        return -2;
      }
      if ( a2 != 4102 )
      {
        *(_DWORD *)(v4 + 48) = a4;
        return 1;
      }
      if ( a3 != -2 )
      {
        if ( (unsigned int)(a3 - 1) <= 1 )
        {
          *(_BYTE *)(v4 + 40) = a3;
          return 1;
        }
        return -2;
      }
      return *(unsigned __int8 *)(v4 + 40);
    }
  }
  else
  {
    if ( a2 == 4108 )
    {
      result = *(_DWORD *)(v4 + 56);
      *a4 = *(_DWORD *)(v4 + 52);
      return result;
    }
    if ( a2 <= 4108 )
    {
      if ( a2 == 4106 )
      {
        *a4 = *(_DWORD *)(v4 + 60);
        return 1;
      }
      else
      {
        if ( a2 <= 4106 )
        {
          if ( a3 > 0 )
          {
            *(_DWORD *)(v4 + 60) = a3;
            return 1;
          }
          return -2;
        }
        CRYPTO_free(*(void **)(v4 + 52));
        *(_DWORD *)(v4 + 52) = a4;
        if ( a4 )
          *(_DWORD *)(v4 + 56) = a3;
        else
          *(_DWORD *)(v4 + 56) = 0;
        return 1;
      }
    }
    else
    {
      if ( a2 == 4110 )
      {
        *a4 = *(_DWORD *)(v4 + 44);
        return 1;
      }
      if ( a2 >= 4110 )
      {
        if ( a2 != 4111 )
        {
          if ( a2 == 4112 )
          {
            *(_DWORD *)(v4 + 16) = a3;
            return 1;
          }
          return -2;
        }
        if ( a3 > 0 && !*(_DWORD *)(v4 + 24) )
        {
          *(_DWORD *)(v4 + 28) = a3;
          return 1;
        }
        return -2;
      }
      ASN1_OBJECT_free(*(_DWORD *)(v4 + 44));
      *(_DWORD *)(v4 + 44) = a4;
      return 1;
    }
  }
}
