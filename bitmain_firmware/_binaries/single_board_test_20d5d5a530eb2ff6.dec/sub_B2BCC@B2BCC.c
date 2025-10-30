int __fastcall sub_B2BCC(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v7; // r6
  int v8; // r3
  int v9; // r4
  int v10; // r1
  int v12; // r3
  int v13; // r0
  int v15; // [sp+Ch] [bp-14h] BYREF
  int v16; // [sp+14h] [bp-Ch] BYREF
  int v17; // [sp+18h] [bp-8h] BYREF
  int v18; // [sp+1Ch] [bp-4h]

  v7 = (int *)*a1;
  v15 = a2;
  v8 = a3;
  v17 = 0;
  v18 = 0;
  v16 = 0;
  if ( !v7 )
  {
    v13 = sub_E0740(8, "crypto/asn1/x_int64.c", 31);
    v8 = a3;
    v9 = v13;
    *a1 = v13;
    if ( !v13 )
    {
      sub_D0048(13, 141, 65, "crypto/asn1/x_int64.c", 32);
      return v9;
    }
    v7 = (int *)v13;
  }
  if ( v8 )
  {
    v9 = sub_12745C(&v17, &v16, &v15);
    if ( !v9 )
      return v9;
    v9 = *(_DWORD *)(a6 + 20) & 2;
    if ( v9 )
    {
      v9 = v16;
      if ( v16 )
      {
        v12 = v18 - (2 * v18 + (v17 != 0));
        v17 = -v17;
        v18 = v12;
      }
      else if ( v18 < 0 )
      {
        sub_D0048(13, 112, 223, "crypto/asn1/x_int64.c", 102);
        return v9;
      }
    }
    else if ( v16 )
    {
      sub_D0048(13, 112, 226, "crypto/asn1/x_int64.c", 97);
      return v9;
    }
  }
  v9 = 1;
  v10 = v18;
  *v7 = v17;
  v7[1] = v10;
  return v9;
}
