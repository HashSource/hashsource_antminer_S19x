int __fastcall sub_3E82C(int a1, int a2)
{
  int v4; // r6
  struct timeval *v6; // r5
  char s[2048]; // [sp+8h] [bp-800h] BYREF

  sub_33790((int *)(a1 + 36), a2);
  v4 = sub_23110((unsigned int *)(a2 + 192), (unsigned int *)(a2 + 160));
  if ( v4 )
  {
    v6 = (struct timeval *)sub_2FD8C();
    sub_2CA90((int)v6, a2, 0);
    sub_3E108(v6);
    return v4;
  }
  else
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 5 )
    {
      snprintf(
        s,
        0x800u,
        "%s %s %d: Share above target",
        "submit_tested_work",
        *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
        *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
      sub_20F58(6, s, 0);
    }
    return 0;
  }
}
