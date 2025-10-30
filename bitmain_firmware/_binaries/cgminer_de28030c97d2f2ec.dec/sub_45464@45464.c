int __fastcall sub_45464(int a1, int a2)
{
  char v6[8]; // [sp+14h] [bp-808h] BYREF
  __time_t *v7; // [sp+814h] [bp-8h]

  sub_450E0(a1, a2);
  if ( (unsigned __int8)sub_21358((unsigned int *)(a2 + 192), (unsigned int *)(a2 + 160)) != 1 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
    {
      snprintf(
        v6,
        0x800u,
        "%s %s %d: Share above target",
        "submit_tested_work",
        *(const char **)(*(_DWORD *)(*(_DWORD *)(a1 + 36) + 4) + 8),
        *(_DWORD *)(*(_DWORD *)(a1 + 36) + 8));
      sub_1E4EC(6, v6, 0);
    }
    return 0;
  }
  else
  {
    v7 = sub_358F8(a2, 0);
    sub_444C0(v7);
    return 1;
  }
}
