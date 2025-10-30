int __fastcall sub_C2908(int a1, int a2)
{
  int result; // r0
  int v4; // r3
  int v5; // [sp+8h] [bp-18h] BYREF
  int *v6; // [sp+Ch] [bp-14h] BYREF
  int v7; // [sp+10h] [bp-10h] BYREF
  int v8; // [sp+14h] [bp-Ch] BYREF
  int v9; // [sp+18h] [bp-8h] BYREF
  _DWORD *v10; // [sp+1Ch] [bp-4h] BYREF

  v5 = 0;
  v9 = 0;
  result = sub_AE64C(0, &v5, &v8, &v10, a2);
  if ( result )
  {
    sub_B294C(0, &v7, &v6, v10);
    v9 = sub_C1EC8(v7, v6);
    if ( v9 )
    {
      if ( d2i_ECPrivateKey(&v9, &v5, v8) )
      {
        sub_D9F44(a1, 408, v9, v4);
        return 1;
      }
      sub_D0048(16, 213, 142, "crypto/ec/ec_ameth.c", 221);
    }
    else
    {
      sub_D0048(16, 213, 16, "crypto/ec/ec_ameth.c", 229);
    }
    sub_C5410(v9);
    return 0;
  }
  return result;
}
