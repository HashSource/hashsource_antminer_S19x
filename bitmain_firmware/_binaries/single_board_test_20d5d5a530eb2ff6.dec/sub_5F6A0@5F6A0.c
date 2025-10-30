int __fastcall sub_5F6A0(int a1)
{
  int result; // r0
  int v3; // r1
  unsigned int v4; // r4
  int v5; // r4
  int v6; // lr
  int v7; // r2
  int v8; // r9
  char v9[52]; // [sp+8h] [bp-34h] BYREF

  sub_1E938(v9, 0x30u);
  printf("%s ", v9);
  printf("%s : address_interval = %d, Voltage_Domain = %d\n", "set_uart_relay", a1, *(_DWORD *)(dword_223680 + 80));
  snprintf(byte_64C23C, 0x100u, "address_interval = %d, Voltage_Domain = %d", a1, *(_DWORD *)(dword_223680 + 80));
  result = sub_3CC5C((int)byte_64C23C, v9);
  v3 = dword_223680;
  v4 = *(_DWORD *)(dword_223680 + 80);
  if ( v4 <= 9 )
  {
    sub_1E938(v9, 0x30u);
    printf("%s ", v9);
    printf("%s : Voltage_Domain = %d, less than 9, so no need set uart relay\n", "set_uart_relay", a1);
    snprintf(byte_64C33C, 0x100u, "Voltage_Domain = %d, less than 9, so no need set uart relay", a1);
    return sub_3CC5C((int)byte_64C33C, v9);
  }
  else
  {
    v5 = v4 - 1;
    if ( v5 >= 0 )
    {
      while ( 1 )
      {
        sub_78448(
          (unsigned __int8)dword_21B3A4,
          a1 * v5 * *(_DWORD *)(v3 + 84),
          *(_DWORD *)(v3 + 64) + *(_DWORD *)(v3 + 84) + 13 - v5 * *(_DWORD *)(v3 + 84),
          1,
          1);
        v6 = *(_DWORD *)(dword_223680 + 84);
        v7 = v6 + v5 * v6;
        --v5;
        --v7;
        v8 = a1 * v7;
        sub_78448((unsigned __int8)dword_21B3A4, a1 * v7, *(_DWORD *)(dword_223680 + 64) + v6 + 13 - v7, 1, 1);
        result = sub_78704((unsigned __int8)dword_21B3A4, v8, 15);
        if ( v5 == -1 )
          break;
        v3 = dword_223680;
      }
    }
  }
  return result;
}
