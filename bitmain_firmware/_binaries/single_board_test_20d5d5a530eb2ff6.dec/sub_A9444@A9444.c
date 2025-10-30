int __fastcall sub_A9444(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v8; // r4
  int v9; // r8
  int v10; // r6
  size_t v11; // r0
  int result; // r0
  int v14; // [sp+14h] [bp-48h] BYREF
  _BYTE v15[68]; // [sp+18h] [bp-44h] BYREF

  v8 = sub_D14F4(a1);
  if ( v8 )
  {
    v9 = 0;
    v10 = 0;
    while ( sub_D1520(v8, *(_DWORD *)(a1[308] + 148), 0) > 0 )
    {
      v11 = strlen((const char *)*(&off_202DF4 + v10));
      if ( sub_D16D8(v8, *(&off_202DF4 + v10), v11) <= 0
        || sub_D16D8(v8, a3, a4) <= 0
        || sub_D16D8(v8, a1[31] + 172, 32) <= 0
        || sub_D16D8(v8, a1[31] + 140, 32) <= 0
        || sub_D16E4(v8, v15, &v14) <= 0
        || sub_D1520(v8, *(_DWORD *)(a1[308] + 144), 0) <= 0
        || sub_D16D8(v8, a3, a4) <= 0
        || sub_D16D8(v8, v15, v14) <= 0
        || sub_D16E4(v8, a2, &v14) <= 0 )
      {
        break;
      }
      ++v10;
      a2 += v14;
      v9 += v14;
      if ( v10 == 3 )
      {
        sub_D1504(v8);
        sub_E07F8((int)v15, 0x40u);
        result = 1;
        *a5 = v9;
        return result;
      }
    }
    sub_95494(a1, 80, 388, 68, (int)"ssl/s3_enc.c", 508);
    sub_D1504(v8);
    sub_E07F8((int)v15, 0x40u);
    return 0;
  }
  else
  {
    sub_95494(a1, 80, 388, 65, (int)"ssl/s3_enc.c", 489);
    return 0;
  }
}
