int __fastcall sub_3AE40(int a1, void *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned __int8 *v5; // r4
  int result; // r0
  char v9[52]; // [sp+8h] [bp-34h] BYREF

  v5 = *(unsigned __int8 **)(a1 + 300);
  if ( *a3 <= 0x87u )
  {
    sub_1E938(v9, 0x30u);
    printf("%s ", v9);
    printf("%s : INPUT too short %u<%u\n", "edf_v5_region_3_encode", *a3, 136);
    snprintf(&byte_62DC68[14336], 0x100u, "INPUT too short %u<%u", *a3, 136);
    sub_3CC5C(&byte_62DC68[14336], v9);
    return -1;
  }
  else
  {
    v5[249] = sub_2883C(v5 + 114, 1080);
    memcpy(a2, v5 + 114, 0x88u);
    if ( sub_3836C((int)a2, 0x88u, v5[1] >> 4, v5[1] & 0xF) )
    {
      result = 0;
      *a3 = 136;
      *a4 = 114;
    }
    else
    {
      sub_1E938(v9, 0x30u);
      printf("%s ", v9);
      printf("%s : %s: data_enc error\n", "edf_v5_region_3_encode", "edf_v5_region_3_encode");
      snprintf(&byte_62DC68[14592], 0x100u, "%s: data_enc error", "edf_v5_region_3_encode");
      sub_3CC5C(&byte_62DC68[14592], v9);
      return -1;
    }
  }
  return result;
}
