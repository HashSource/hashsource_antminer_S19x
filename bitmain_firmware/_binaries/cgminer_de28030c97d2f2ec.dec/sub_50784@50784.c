void sub_50784()
{
  char v0[12]; // [sp+0h] [bp-80Ch] BYREF
  int v1; // [sp+800h] [bp-Ch]
  int v2; // [sp+804h] [bp-8h]

  v1 = 0;
  v2 = 0;
  if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf(v0, 0x800u, "START %s", "load_default_config_without_restart");
    sub_1E4EC(7, v0, 0);
  }
  if ( dword_87E9C )
    free((void *)dword_87E9C);
  dword_87E9C = (int)sub_20210(0x1000u, "cgminer.c", "load_default_config_without_restart", 11955);
  sub_3C7DC((char *)dword_87E9C);
  if ( access((const char *)dword_87E9C, 4) )
  {
    free((void *)dword_87E9C);
    dword_87E9C = 0;
  }
  else
  {
    v2 = sub_4F274((const char *)dword_87E9C);
  }
  switch ( v2 )
  {
    case 2:
      sub_585B0(&dword_86C64, 4);
      break;
    case 3:
      sub_585B0(&dword_86C64, 4);
      sub_50628();
      break;
    case 1:
      sub_50628();
      break;
  }
}
