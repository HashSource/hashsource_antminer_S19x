int __fastcall sub_B2CA4(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v7; // r5
  int v8; // r2
  int result; // r0
  bool v10; // cf
  int v11; // r0
  _DWORD v13[2]; // [sp+Ch] [bp-14h] BYREF
  int v14; // [sp+14h] [bp-Ch] BYREF
  unsigned __int64 v15; // [sp+18h] [bp-8h] BYREF

  v7 = (int *)*a1;
  v13[0] = a2;
  v15 = 0;
  v13[1] = 0;
  v14 = 0;
  if ( v7 )
  {
    if ( !a3 )
    {
LABEL_3:
      v8 = v15;
      goto LABEL_4;
    }
  }
  else
  {
    v11 = sub_E0740(8, "crypto/asn1/x_int64.c", 31);
    *a1 = v11;
    if ( !v11 )
    {
      sub_D0048(13, 141, 65, "crypto/asn1/x_int64.c", 32);
      return 0;
    }
    v7 = (int *)v11;
    if ( !a3 )
      goto LABEL_3;
  }
  result = sub_12745C(&v15, &v14, v13);
  if ( result )
  {
    if ( (*(_DWORD *)(a6 + 20) & 2) != 0 )
    {
      if ( v14 )
      {
        if ( v15 > 0x80000000 )
        {
          sub_D0048(13, 105, 224, "crypto/asn1/x_int64.c", 205);
          return 0;
        }
        v8 = -(int)v15;
        goto LABEL_4;
      }
      v8 = v15;
      if ( v15 < 0x80000000 )
      {
LABEL_4:
        result = 1;
        *v7 = v8;
        return result;
      }
    }
    else
    {
      if ( v14 )
      {
        sub_D0048(13, 105, 226, "crypto/asn1/x_int64.c", 200);
        return 0;
      }
      v8 = v15;
      v10 = HIDWORD(v15) != 0;
      if ( HIDWORD(v15) == 1 )
        v10 = 1;
      if ( !v10 )
        goto LABEL_4;
    }
    sub_D0048(13, 105, 223, "crypto/asn1/x_int64.c", 212);
    return 0;
  }
  return result;
}
