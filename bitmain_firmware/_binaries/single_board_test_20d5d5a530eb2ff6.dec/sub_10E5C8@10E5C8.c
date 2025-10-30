int __fastcall sub_10E5C8(int *a1)
{
  int *v2; // r5
  char *v3; // r6
  _DWORD *v4; // r0
  int v5; // r0
  int v6; // r4
  size_t v8; // r0
  int v9[4]; // [sp+0h] [bp-10h] BYREF

  v2 = (int *)sub_D14F4();
  if ( v2 && (v3 = (char *)sub_10F99C(a1[7], 0)) != 0 )
  {
    v4 = sub_D902C();
    v5 = sub_D1520(v2, v4, 0);
    if ( v5
      && (v8 = strlen(v3), (v5 = sub_D16D8((int)v2, (int)v3, v8)) != 0)
      && (v5 = sub_D16D8((int)v2, a1[3], a1[1])) != 0
      && (v5 = sub_D16E4(v2, (int)v9, 0)) != 0 )
    {
      v6 = v9[0];
    }
    else
    {
      v6 = v5;
    }
  }
  else
  {
    v3 = 0;
    v6 = 0;
  }
  CRYPTO_free(v3);
  sub_D1504(v2);
  return v6;
}
