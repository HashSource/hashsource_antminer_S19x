int __fastcall sub_1EEB8(int a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  int v4; // r5
  int v6; // r7
  char v10; // r0
  int v11; // r2
  int v12; // r12
  int v13; // r0
  int v14; // r3
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  v4 = *a3;
  v6 = *(_DWORD *)(a1 + 300);
  if ( (unsigned int)*a3 <= 0xF )
  {
    if ( (unsigned int)dword_B308C > 2 )
    {
      memset(s, 0, sizeof(s));
      snprintf(s, 0x800u, "INPUT too short %u<%u\n", v4, 16);
      sub_3C5B8(2, s, 0);
    }
    return -1;
  }
  v10 = sub_3F1DC(v6 + 98, 120);
  v11 = *(_DWORD *)(v6 + 106);
  v12 = *(_DWORD *)(v6 + 102);
  *(_BYTE *)(v6 + 113) = v10;
  v13 = *(_DWORD *)(v6 + 98);
  v14 = *(_DWORD *)(v6 + 110);
  a2[1] = v12;
  *a2 = v13;
  a2[3] = v14;
  a2[2] = v11;
  if ( sub_219F4(a2, 16, *(unsigned __int8 *)(v6 + 1) >> 4, *(_BYTE *)(v6 + 1) & 0xF) )
  {
    *a3 = 16;
    *a4 = 98;
    return 0;
  }
  else
  {
    if ( (unsigned int)dword_B308C <= 2 )
      return -1;
    memset(s, 0, sizeof(s));
    snprintf(s, 0x800u, "%s: data_enc error\n", "edf_v4_region_2_encode");
    sub_3C5B8(2, s, 0);
    return -1;
  }
}
