int __fastcall sub_39420(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // r6
  char v8; // r0
  int v9; // r2
  int v10; // r0
  int v11; // r3
  int result; // r0
  char v13[48]; // [sp+8h] [bp-30h] BYREF

  v5 = *(_DWORD *)(a1 + 300);
  if ( *a3 <= 0xFu )
  {
    sub_1E938(v13, 0x30u);
    printf("%s ", v13);
    printf("%s : INPUT too short %u<%u\n", "edf_v4_region_2_encode", *a3, 16);
    snprintf(byte_62DB68, 0x100u, "INPUT too short %u<%u", *a3, 16);
    sub_3CC5C(byte_62DB68, v13);
    return -1;
  }
  else
  {
    v8 = sub_2883C((_BYTE *)(v5 + 98), 120);
    v9 = *(_DWORD *)(v5 + 106);
    *(_BYTE *)(v5 + 113) = v8;
    v10 = *(_DWORD *)(v5 + 98);
    v11 = *(_DWORD *)(v5 + 110);
    a2[1] = *(_DWORD *)(v5 + 102);
    *a2 = v10;
    a2[3] = v11;
    a2[2] = v9;
    if ( sub_3836C((int)a2, 0x10u, *(unsigned __int8 *)(v5 + 1) >> 4, *(_BYTE *)(v5 + 1) & 0xF) )
    {
      result = 0;
      *a3 = 16;
      *a4 = 98;
    }
    else
    {
      sub_1E938(v13, 0x30u);
      printf("%s ", v13);
      printf("%s : %s: data_enc error\n", "edf_v4_region_2_encode", "edf_v4_region_2_encode");
      snprintf(byte_62DC68, 0x100u, "%s: data_enc error", "edf_v4_region_2_encode");
      sub_3CC5C(byte_62DC68, v13);
      return -1;
    }
  }
  return result;
}
