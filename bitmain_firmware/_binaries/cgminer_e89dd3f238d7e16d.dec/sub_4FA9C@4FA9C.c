void sub_4FA9C()
{
  char v0[12]; // [sp+0h] [bp-80Ch] BYREF
  int v1; // [sp+800h] [bp-Ch]
  int v2; // [sp+804h] [bp-8h]

  v1 = 0;
  v2 = 0;
  if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf(v0, 0x800u, "START %s", "load_default_config_without_restart");
    sub_1DB6C(7, v0, 0);
  }
  if ( dword_86D04 )
    free((void *)dword_86D04);
  dword_86D04 = (int)sub_1F934(0x1000u, "cgminer.c", "load_default_config_without_restart", 11955);
  sub_3B8EC((char *)dword_86D04);
  if ( access((const char *)dword_86D04, 4) )
  {
    free((void *)dword_86D04);
    dword_86D04 = 0;
  }
  else
  {
    v2 = sub_4E5A8((const char *)dword_86D04);
  }
  switch ( v2 )
  {
    case 2:
      sub_57A3C(&dword_85ACC, 4);
      break;
    case 3:
      sub_57A3C(&dword_85ACC, 4);
      sub_4F93C();
      break;
    case 1:
      sub_4F93C();
      break;
  }
}
