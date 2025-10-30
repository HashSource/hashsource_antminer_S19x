int __fastcall sub_3BD08(int a1, int a2, int a3, int a4, int a5)
{
  char v8[48]; // [sp+8h] [bp-30h] BYREF

  if ( a2 == 1 )
  {
    if ( a5 == sub_73A9C(a1, 72) )
    {
      return 1;
    }
    else
    {
      sub_1E938(v8, 0x30u);
      printf("%s ", v8);
      printf("%s : write dac: %d, register:%d, fail.\n", "write_dac", 1, a3);
      snprintf(byte_633468, 0x100u, "write dac: %d, register:%d, fail.", 1, a3);
      sub_3CC5C(byte_633468, v8);
      return 0;
    }
  }
  else
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : Don't support DAC: %d\n", "write_dac", a2);
    snprintf(byte_633368, 0x100u, "Don't support DAC: %d", a2);
    sub_3CC5C(byte_633368, v8);
    return 0;
  }
}
