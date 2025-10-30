int __fastcall sub_B15B0(int result, int a2, int a3)
{
  int v3; // r7
  int *v4; // r5
  int (__fastcall *v7)(int, int *, int, _DWORD); // r9
  int v8; // r1
  int (__fastcall *v9)(int, int); // r3
  int v10; // r3
  int v11; // r8
  int v12; // r10
  int v13; // r7
  int v14; // r0
  int v15; // r3
  int v16; // r7
  int v17; // r0

  v3 = *(_DWORD *)(a2 + 16);
  if ( !result )
    return result;
  v4 = (int *)result;
  if ( *(_BYTE *)a2 )
  {
    if ( !*(_DWORD *)result )
      return result;
    if ( v3 )
      goto LABEL_4;
    switch ( *(_BYTE *)a2 )
    {
      case 1:
      case 6:
LABEL_33:
        result = sub_B25B0(result, -1, a2);
        v7 = (int (__fastcall *)(int, int *, int, _DWORD))result;
        if ( !result )
        {
          result = sub_B268C(v4, a2);
          v15 = *(_DWORD *)(a2 + 12);
          if ( v15 > 0 )
          {
            v11 = *(_DWORD *)(a2 + 8) + 20 * v15;
LABEL_23:
            v12 = 0;
            do
            {
              v11 -= 20;
              result = sub_B27AC(v4, v11, 0);
              ++v12;
              v13 = result;
              if ( result )
              {
                v14 = sub_B27A4(v4, result);
                result = sub_B17E4(v14, v13);
              }
            }
            while ( *(_DWORD *)(a2 + 12) > v12 );
            if ( v7 )
LABEL_28:
              result = v7(3, v4, a2, 0);
          }
          if ( !a3 )
          {
            result = CRYPTO_free(*v4, "crypto/asn1/tasn_fre.c", 115);
            *v4 = 0;
          }
        }
        return result;
      case 2:
LABEL_36:
        result = sub_B2598(result, a2);
        if ( result < 0 || result >= *(_DWORD *)(a2 + 12) )
          goto LABEL_10;
        v7 = 0;
LABEL_39:
        v16 = *(_DWORD *)(a2 + 8) + 20 * result;
        v17 = sub_B27A4(v4, v16);
        result = sub_B17E4(v17, v16);
        if ( v7 )
        {
LABEL_9:
          result = v7(3, v4, a2, 0);
LABEL_10:
          if ( a3 )
            return result;
        }
        else if ( a3 )
        {
          return result;
        }
        result = CRYPTO_free(*v4, "crypto/asn1/tasn_fre.c", 75);
        *v4 = a3;
        return result;
      case 5:
        return sub_B14D4(result, a2, a3);
      default:
        return result;
    }
  }
  if ( v3 )
  {
LABEL_4:
    v7 = *(int (__fastcall **)(int, int *, int, _DWORD))(v3 + 16);
    if ( v7 )
    {
      switch ( *(_BYTE *)a2 )
      {
        case 0:
          goto LABEL_16;
        case 1:
        case 6:
          result = sub_B25B0(result, -1, a2);
          if ( result )
            return result;
          result = v7(2, v4, a2, 0);
          if ( result == 2 )
            return result;
          sub_B268C(v4, a2);
          v10 = *(_DWORD *)(a2 + 12);
          v11 = *(_DWORD *)(a2 + 8) + 20 * v10;
          if ( v10 > 0 )
            goto LABEL_23;
          goto LABEL_28;
        case 2:
          result = v7(2, (int *)result, a2, 0);
          if ( result == 2 )
            return result;
          result = sub_B2598(v4, a2);
          if ( result < 0 || *(_DWORD *)(a2 + 12) <= result )
            goto LABEL_9;
          goto LABEL_39;
        case 4:
          goto LABEL_18;
        case 5:
          return sub_B14D4(result, a2, a3);
        default:
          return result;
      }
    }
    switch ( *(_BYTE *)a2 )
    {
      case 0:
        goto LABEL_16;
      case 1:
      case 6:
        goto LABEL_33;
      case 2:
        goto LABEL_36;
      case 4:
LABEL_18:
        v9 = *(int (__fastcall **)(int, int))(v3 + 8);
        if ( v9 )
          result = v9(result, a2);
        break;
      case 5:
        return sub_B14D4(result, a2, a3);
      default:
        return result;
    }
    return result;
  }
LABEL_16:
  v8 = *(_DWORD *)(a2 + 8);
  if ( v8 )
    return sub_B17E4(result, v8);
  else
    return sub_B14D4(result, a2, a3);
}
