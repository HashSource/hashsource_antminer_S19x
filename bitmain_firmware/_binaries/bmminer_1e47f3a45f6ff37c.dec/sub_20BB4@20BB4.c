int __fastcall sub_20BB4(int a1, void *a2, int *a3, _DWORD *a4)
{
  int v4; // r4
  unsigned __int8 *v6; // r6
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v4 = *a3;
  v6 = *(unsigned __int8 **)(a1 + 300);
  if ( (unsigned int)*a3 <= 0x87 )
  {
    if ( (unsigned int)dword_B308C > 2 )
    {
      memset(s, 0, 0x800u);
      snprintf(s, 0x800u, "INPUT too short %u<%u\n", v4, 136);
      sub_3C5B8(2, s, 0);
    }
    return -1;
  }
  v6[249] = sub_3F1DC(v6 + 114, 1080);
  memcpy(a2, v6 + 114, 0x88u);
  if ( sub_219F4(a2, 136, v6[1] >> 4, v6[1] & 0xF) )
  {
    *a3 = 136;
    *a4 = 114;
    return 0;
  }
  else
  {
    if ( (unsigned int)dword_B308C <= 2 )
      return -1;
    memset(s, 0, 0x800u);
    snprintf(s, 0x800u, "%s: data_enc error\n", "edf_v5_region_3_encode");
    sub_3C5B8(2, s, 0);
    return -1;
  }
}
