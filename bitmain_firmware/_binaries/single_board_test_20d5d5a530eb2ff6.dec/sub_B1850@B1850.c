int __fastcall sub_B1850(int *a1, int a2, int a3)
{
  int v3; // r3
  void (*v6)(void); // r3
  int v7; // r3
  int (*v9)(void); // r3
  int v10; // r3
  int v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  int v14; // r2
  int v15; // r1

  if ( a2 )
  {
    v3 = *(_DWORD *)(a2 + 16);
    if ( v3 )
    {
      if ( a3 )
      {
        v6 = *(void (**)(void))(v3 + 16);
        if ( v6 )
        {
          v6();
          return 1;
        }
        if ( *(_BYTE *)a2 != 5 )
        {
          v10 = *(_DWORD *)(a2 + 4);
          switch ( v10 )
          {
            case -4:
              goto LABEL_14;
            case 1:
              goto LABEL_13;
            case 5:
              goto LABEL_12;
            case 6:
              goto LABEL_11;
            default:
              goto LABEL_31;
          }
        }
        v10 = -1;
        goto LABEL_31;
      }
      v9 = *(int (**)(void))(v3 + 8);
      if ( v9 )
        return v9();
      if ( *(_BYTE *)a2 != 5 )
      {
        v10 = *(_DWORD *)(a2 + 4);
        switch ( v10 )
        {
          case -4:
            goto LABEL_14;
          case 1:
            goto LABEL_13;
          case 5:
            goto LABEL_12;
          case 6:
            goto LABEL_11;
          default:
            goto LABEL_22;
        }
      }
      v10 = -1;
    }
    else
    {
      if ( *(_BYTE *)a2 != 5 )
      {
        v10 = *(_DWORD *)(a2 + 4);
        switch ( v10 )
        {
          case -4:
LABEL_14:
            v12 = (_DWORD *)CRYPTO_malloc(8, "crypto/asn1/tasn_new.c", 302);
            if ( v12 )
            {
              v12[1] = 0;
              v7 = 1;
              *v12 = -1;
              *a1 = (int)v12;
            }
            else
            {
              sub_D0048(13, 119, 65, "crypto/asn1/tasn_new.c", 303);
              v7 = 0;
            }
            break;
          case 1:
LABEL_13:
            v7 = 1;
            *a1 = *(_DWORD *)(a2 + 20);
            break;
          case 5:
LABEL_12:
            v7 = 1;
            *a1 = 1;
            break;
          case 6:
LABEL_11:
            v11 = sub_EAA20(0);
            v7 = 1;
            *a1 = v11;
            break;
          default:
            goto LABEL_34;
        }
        return v7;
      }
      v10 = -1;
LABEL_34:
      if ( a3 )
      {
LABEL_31:
        v13 = (_DWORD *)*a1;
        v13[1] = v10;
        v13[3] = 128;
        *v13 = 0;
        v13[2] = 0;
        if ( *(_BYTE *)a2 != 5 )
          return *a1 != 0;
        v14 = *a1;
        v15 = 192;
        if ( *a1 )
          v14 = 1;
        goto LABEL_29;
      }
    }
LABEL_22:
    v13 = (_DWORD *)sub_AE194(v10);
    *a1 = (int)v13;
    v7 = (int)v13;
    if ( v13 )
      v7 = 1;
    if ( *(_BYTE *)a2 == 5 )
      v14 = v7 & 1;
    else
      v14 = 0;
    if ( !v14 )
      return v7;
    v15 = v13[3] | 0x40;
LABEL_29:
    v7 = v14;
    v13[3] = v15;
    return v7;
  }
  return 0;
}
