int sub_249B0()
{
  int v0; // r0
  int v1; // r3
  int v2; // r12
  int v4; // r4
  int v5; // r0
  int v6; // r3
  char v7[2052]; // [sp+0h] [bp-804h] BYREF

  sub_24418();
  sub_13EE8(100);
  sub_6FBE0(0x40000000);
  v0 = sub_23BF0();
  sub_70B9C(v0);
  sub_23150();
  v1 = dword_A0D68;
  v2 = *(unsigned __int8 *)(dword_A0D68 + 12935);
  if ( !*(_BYTE *)(dword_A0D68 + 12935) )
  {
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v7, "No chain exist, exit.\n");
      sub_47AB4(3, v7, v2);
    }
    return -1;
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 4 )
  {
    snprintf(v7, 0x800u, "chain num = %d", *(unsigned __int8 *)(dword_A0D68 + 12935));
    sub_47AB4(5, v7, 0);
    v1 = dword_A0D68;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = (unsigned __int8)v4;
    v6 = *(_DWORD *)(v1 + 4 * v4++ + 4);
    if ( v6 == 1 )
      break;
    if ( v4 == 16 )
      goto LABEL_13;
LABEL_10:
    v1 = dword_A0D68;
  }
  sub_748C0(v5);
  if ( v4 != 16 )
    goto LABEL_10;
LABEL_13:
  sub_185FC(1);
  if ( sub_188CC() )
    return 0;
  if ( dword_9C294 != 1 )
    sub_31794(3, 255);
  if ( (unsigned int)dword_9E31C <= 3 )
    return -1;
  strcpy(v7, "Fixture data load failed, exit.\n");
  sub_47AB4(3, v7, 0);
  return -1;
}
