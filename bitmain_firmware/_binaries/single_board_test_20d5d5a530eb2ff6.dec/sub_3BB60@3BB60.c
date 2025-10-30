int __fastcall sub_3BB60(int a1, int a2, int a3, unsigned __int8 *a4, int a5)
{
  unsigned __int8 *v8; // r4
  unsigned __int8 *v10; // r5
  int v11; // t1
  char v12[48]; // [sp+8h] [bp-30h] BYREF

  if ( a2 == 1 )
  {
    v8 = a4;
    if ( a5 == sub_73868(a1, 72, a3, a4, a5) )
    {
      sub_1E938(v12, 0x30u);
      printf("%s ", v12);
      printf("%s : dac: %d, register 0x%02x data is:\n", "read_dac", 1, a3);
      snprintf(byte_633168, 0x100u, "dac: %d, register 0x%02x data is:", 1, a3);
      sub_3CC5C(byte_633168, v12);
      if ( a5 > 0 )
      {
        v10 = &v8[a5];
        do
        {
          v11 = *v8++;
          printf("0x%02x", v11);
        }
        while ( v8 != v10 );
      }
      putchar(10);
      return 1;
    }
    else
    {
      sub_1E938(v12, 0x30u);
      printf("%s ", v12);
      printf("%s : chain: %d, dac_addr: 0x%02x, data_length = %d, fail.\n", "read_dac", a1, 72, a5);
      snprintf(byte_632F68, 0x100u, "chain: %d, dac_addr: 0x%02x, data_length = %d, fail.", a1, 72, a5);
      sub_3CC5C(byte_632F68, v12);
      sub_1E938(v12, 0x30u);
      printf("%s ", v12);
      printf("%s : read dac: %d, register: 0x%02x, fail.\n", "read_dac", 1, a3);
      snprintf(byte_633068, 0x100u, "read dac: %d, register: 0x%02x, fail.", 1, a3);
      sub_3CC5C(byte_633068, v12);
      return 0;
    }
  }
  else
  {
    sub_1E938(v12, 0x30u);
    printf("%s ", v12);
    printf("%s : Don't support DAC: %d\n", "read_dac", a2);
    snprintf(byte_633268, 0x100u, "Don't support DAC: %d", a2);
    sub_3CC5C(byte_633268, v12);
    return 0;
  }
}
