int __fastcall sub_B14D4(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  int v5; // r5
  int (*v6)(void); // r5
  int v7; // r1
  _DWORD *v8; // r1

  v3 = (_DWORD *)result;
  if ( a2 )
  {
    v5 = *(_DWORD *)(a2 + 16);
    if ( a3 )
    {
      if ( v5 )
      {
        v6 = *(int (**)(void))(v5 + 16);
        if ( v6 )
          return v6();
      }
    }
    else if ( v5 )
    {
      v6 = *(int (**)(void))(v5 + 12);
      if ( v6 )
        return v6();
    }
    if ( *(_BYTE *)a2 == 5 )
    {
      result = *(_DWORD *)result;
      if ( *v3 )
      {
LABEL_17:
        result = sub_AE1D8(result, a3);
        *v3 = 0;
      }
    }
    else
    {
      v7 = *(_DWORD *)(a2 + 4);
      if ( v7 == 1 )
      {
        *(_DWORD *)result = *(_DWORD *)(a2 + 20);
      }
      else
      {
        result = *(_DWORD *)result;
        if ( !*v3 )
          return result;
        if ( v7 == 5 )
          goto LABEL_15;
        if ( v7 != 6 )
        {
          if ( v7 == -4 )
          {
LABEL_14:
            sub_B14D4(v3, 0);
            result = CRYPTO_free(*v3, "crypto/asn1/tasn_fre.c", 200);
LABEL_15:
            *v3 = 0;
            return result;
          }
          goto LABEL_17;
        }
LABEL_18:
        result = ASN1_OBJECT_free();
        *v3 = 0;
      }
    }
  }
  else
  {
    v8 = *(_DWORD **)result;
    result = *(_DWORD *)(*(_DWORD *)result + 4);
    v3 = v8 + 1;
    if ( result )
    {
      switch ( *v8 )
      {
        case 0xFFFFFFFC:
          goto LABEL_14;
        case 1:
          v8[1] = -1;
          break;
        case 5:
          goto LABEL_15;
        case 6:
          goto LABEL_18;
        default:
          goto LABEL_17;
      }
    }
  }
  return result;
}
