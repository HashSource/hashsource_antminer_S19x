int __fastcall sub_38498(int a1, unsigned int a2, int a3, unsigned int a4)
{
  int v6; // r6
  char v8[48]; // [sp+0h] [bp-30h] BYREF

  if ( a4 > 3 )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : key_version %u not support\n", "data_dec", a4);
    snprintf(byte_62B768, 0x100u, "key_version %u not support", a4);
    sub_3CC5C(byte_62B768, v8);
    return 0;
  }
  else if ( a3 == 1 )
  {
    v6 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s :  xxtea input data length %% 8 must be 0, but now is %d\n", "data_dec", v6);
      snprintf(byte_62B868, 0x100u, " xxtea input data length %% 8 must be 0, but now is %d", v6);
      sub_3CC5C(byte_62B868, v8);
      return 0;
    }
    else
    {
      sub_3BA34(a1, a2 >> 2, (char *)&unk_21C0B4 + 16 * a4);
      return 1;
    }
  }
  else
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : algorithm_type is %d, but not support it\n", "data_dec", a3);
    snprintf(byte_62B968, 0x100u, "algorithm_type is %d, but not support it", a3);
    sub_3CC5C(byte_62B968, v8);
    return 0;
  }
}
