int __fastcall sub_40D3C(int a1)
{
  unsigned __int8 *v2; // r1
  int v3; // r4
  int v4; // r4
  int v5; // lr
  int v6; // r8
  int result; // r0
  char v8[48]; // [sp+8h] [bp-30h] BYREF

  sub_1E938(v8, 0x30u);
  printf("%s ", v8);
  printf("%s : address_interval = %d, Voltage_Domain = %d\n", "_set_uart_relay", a1, *(_DWORD *)(dword_705300 + 8));
  snprintf(byte_63BCD0, 0x100u, "address_interval = %d, Voltage_Domain = %d", a1, *(_DWORD *)(dword_705300 + 8));
  sub_3CC5C((int)byte_63BCD0, v8);
  v2 = (unsigned __int8 *)dword_705300;
  v3 = *(_DWORD *)(dword_705300 + 8);
  if ( v3 <= 9 )
  {
    sub_1E938(v8, 0x30u);
    printf("%s ", v8);
    printf("%s : Voltage_Domain = %d, less than 9, so no need set uart relay\n", "_set_uart_relay", a1);
    snprintf(byte_63BDD0, 0x100u, "Voltage_Domain = %d, less than 9, so no need set uart relay", a1);
    return sub_3CC5C((int)byte_63BDD0, v8);
  }
  else
  {
    v4 = v3 - 1;
    while ( 1 )
    {
      sub_78448(
        *v2,
        a1 * v4 * *((_DWORD *)v2 + 3),
        *((_DWORD *)v2 + 1) + *((_DWORD *)v2 + 3) + 13 - v4 * *((_DWORD *)v2 + 3),
        1,
        1);
      v5 = *(_DWORD *)(dword_705300 + 12);
      v6 = a1 * (v5 + v4 * v5 - 1);
      sub_78448(*(unsigned __int8 *)dword_705300, v6, *(_DWORD *)(dword_705300 + 4) + 13 - (v4 * v5 - 1), 1, 1);
      result = sub_78704(*(unsigned __int8 *)dword_705300, v6, 15);
      if ( --v4 < 0 )
        break;
      v2 = (unsigned __int8 *)dword_705300;
    }
  }
  return result;
}
