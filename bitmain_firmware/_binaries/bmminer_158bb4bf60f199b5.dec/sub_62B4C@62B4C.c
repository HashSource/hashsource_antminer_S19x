int __fastcall sub_62B4C(int a1, int a2)
{
  int v4; // r6
  struct timeval *v6; // r5
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  sub_59820((int *)(a1 + 36), a2);
  v4 = sub_49D78((unsigned int *)(a2 + 192), (unsigned int *)(a2 + 160));
  if ( v4 )
  {
    v6 = (struct timeval *)sub_55E38();
    sub_52F6C((int)v6, a2, 0);
    sub_62428(v6);
    return v4;
  }
  else
  {
    if ( byte_244080 || byte_1AECC4 || dword_9E320 > 5 )
    {
      snprintf(
        s,
        0x800u,
        "%s %s %d: Share above target",
        "submit_tested_work",
        *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
        *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
      sub_47AB4(6, s, 0);
    }
    return 0;
  }
}
