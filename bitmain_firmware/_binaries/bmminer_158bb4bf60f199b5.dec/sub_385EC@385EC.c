int __fastcall sub_385EC(int a1)
{
  int v1; // r6
  int i; // r4
  int v3; // r0
  int j; // r4
  int v5; // r0
  int v6; // r12
  int v8; // r0
  int v9; // r4
  int v10; // r0
  int v11; // r0
  char v12[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = a1;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(v12, 0x800u, "[DEBUG] Board init, is_power_off = %d.\n", a1);
    sub_47AB4(4, v12, 0);
  }
  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        goto LABEL_7;
    }
    v3 = (unsigned __int8)i;
    sub_748C0(v3);
  }
LABEL_7:
  if ( v1 )
  {
    v11 = sub_22AB8();
    v6 = v11;
    if ( v11 )
      return v6;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v12, "Sleep 30s for power release ...\n");
      sub_47AB4(3, v12, 0);
    }
    sleep(0x1Eu);
    v6 = sub_1A300();
    if ( v6 )
      return v6;
    sub_21E78(115200);
    sub_4A804(10);
    v6 = sub_239C4();
    if ( v6 )
      return v6;
    v6 = sub_1A420();
    if ( v6 )
      return v6;
  }
  else
  {
    for ( j = 0; j != 16; ++j )
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * j + 4) != 1 )
      {
        if ( ++j == 16 )
          goto LABEL_13;
      }
      v5 = j;
      sub_70974(v5);
    }
LABEL_13:
    sleep(3u);
    v6 = sub_1A240();
    if ( v6 )
      return v6;
    do
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * v1 + 4) == 1 )
      {
        v8 = v1++;
        sub_709B8(v8);
        if ( v1 == 16 )
          goto LABEL_18;
      }
      ++v1;
    }
    while ( v1 != 16 );
LABEL_18:
    sleep(3u);
    sub_4A804(10);
    sub_21E78(115200);
    sub_4A804(10);
  }
  v9 = 0;
  sub_24904();
  do
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * v9 + 4) != 1 )
    {
      if ( ++v9 == 16 )
        goto LABEL_23;
    }
    v10 = (unsigned __int8)v9++;
    sub_17598(v10);
  }
  while ( v9 != 16 );
LABEL_23:
  sub_4A804(10);
  sub_21F2C();
  sub_4A804(10);
  return 0;
}
