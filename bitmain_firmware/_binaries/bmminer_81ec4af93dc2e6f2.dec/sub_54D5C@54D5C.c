int __fastcall sub_54D5C(int a1, int a2, unsigned int a3)
{
  char v8[16]; // [sp+1Ch] [bp-820h] BYREF
  int v9; // [sp+81Ch] [bp-20h] BYREF
  int v10; // [sp+820h] [bp-1Ch] BYREF
  int v11; // [sp+824h] [bp-18h] BYREF
  unsigned int v12; // [sp+828h] [bp-14h]
  unsigned int v13; // [sp+82Ch] [bp-10h]
  int v14; // [sp+830h] [bp-Ch]
  unsigned int i; // [sp+834h] [bp-8h]

  v11 = 0;
  v10 = 0;
  v13 = 0;
  v12 = 0;
  i = 0;
  v9 = 0;
  v14 = 0;
  if ( sub_548A4(a1, &v11, &v10) )
  {
    snprintf(v8, 0x800u, "get_read_address_info error, chain_id = %d\n", a1);
    sub_3AF5C(0, v8, 0, (int)v8);
    return 0;
  }
  else
  {
    v13 = a3 & 0x3FF | 0x80000000;
    sub_52EA0(v11, v13);
    v12 = a3 >> 2;
    for ( i = 0; i < v12; ++i )
    {
      sub_52E24(v10, &v9);
      *(_BYTE *)(a2 + 4 * i) = HIBYTE(v9);
      *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v9);
      *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(v9);
      *(_BYTE *)(a2 + 4 * i + 3) = v9;
    }
    v14 = 4 * v12;
    v12 = a3 & 3;
    if ( (a3 & 3) != 0 )
    {
      sub_52E24(v10, &v9);
      switch ( v12 )
      {
        case 2u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v9);
          *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v9);
          v14 += 2;
          break;
        case 3u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v9);
          *(_BYTE *)(a2 + 4 * i + 1) = BYTE2(v9);
          *(_BYTE *)(a2 + 4 * i + 2) = BYTE1(v9);
          v14 += 3;
          break;
        case 1u:
          *(_BYTE *)(a2 + 4 * i) = HIBYTE(v9);
          ++v14;
          break;
        default:
          snprintf(v8, 0x800u, "%s: the uart%d left data is 4*N length, error!!!\n", "read_uart_data_in_fpga", a1);
          sub_3AF5C(0, v8, 0, (int)v8);
          break;
      }
    }
    return v14;
  }
}
