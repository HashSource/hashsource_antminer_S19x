int sub_239C4()
{
  int v0; // r3
  int v1; // r4
  int v2; // r7
  unsigned int v3; // r1
  int v4; // r2
  int v5; // r3
  int v7; // [sp+8h] [bp-80Ch]
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  v0 = dword_A0D68;
  v1 = 0;
  v7 = 0;
  *(_BYTE *)(dword_A0D68 + 12955) = 0;
  while ( *(_DWORD *)(v0 + 4 * v1 + 4) != 1 )
  {
LABEL_2:
    if ( ++v1 == 16 )
      return v7;
LABEL_3:
    v0 = dword_A0D68;
  }
  v2 = 0;
  do
  {
    sub_70974(v1);
    sleep(3u);
    sub_19798((unsigned __int8)v1);
    sub_4A804(1000);
    sub_709B8(v1);
    sub_4A804(200);
    sub_2EA28(v1, 0);
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(s, 0x800u, "Chain[%d]: find %d asic, times %d\n", v1, *(unsigned __int8 *)(dword_A0D68 + v1 + 12918), v2);
      sub_47AB4(3, s, 0);
    }
    ++v2;
    if ( *(_BYTE *)(dword_A0D68 + v1 + 12918) == 78 )
    {
      if ( *(unsigned __int8 *)(dword_A0D68 + 12955) <= 0x4Du )
        *(_BYTE *)(dword_A0D68 + 12955) = 78;
      goto LABEL_2;
    }
    sub_22A88(v1);
  }
  while ( v2 != 3 );
  v3 = *(unsigned __int8 *)(dword_A0D68 + v1 + 12918);
  if ( *(unsigned __int8 *)(dword_A0D68 + 12955) < v3 )
    *(_BYTE *)(dword_A0D68 + 12955) = v3;
  if ( v3 == 78 )
    goto LABEL_2;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "Chain %d only find %d asic, will power off hash board %d\n", v1, v3, v1);
    sub_47AB4(3, s, 0);
  }
  sub_1979C((unsigned __int8)v1);
  v4 = dword_9C294;
  v5 = dword_A0D68 + 12288;
  *(_DWORD *)(dword_A0D68 + 4 * v1 + 4) = 0;
  --*(_BYTE *)(v5 + 647);
  if ( v4 != 1 )
  {
    sub_31794(1, 255);
    sub_226C0(9u, "Cannot find all asic!");
    return -1;
  }
  ++v1;
  v7 = -1;
  if ( v1 != 16 )
    goto LABEL_3;
  return v7;
}
