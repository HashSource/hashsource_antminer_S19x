int sub_5BC40()
{
  int v1; // r0
  char v3[12]; // [sp+8h] [bp-80Ch] BYREF
  int i; // [sp+808h] [bp-Ch]
  int v5; // [sp+80Ch] [bp-8h]

  i = 0;
  sub_58354(&stru_954C8, "socketa_api.c", "cgminer_socket_init", 506);
  sub_58354(&stru_96EF0, "socketa_api.c", "cgminer_socket_init", 507);
  v5 = sub_5EA74(&off_749B0, 2);
  if ( v5 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      snprintf(v3, 0x800u, "%s trans init failed: %d", "cgminer_socket_init", v5);
      sub_1E4EC(3, v3, 0);
    }
    return v5;
  }
  else
  {
    while ( 1 )
    {
      for ( i = 0; i <= 3; ++i )
      {
        v1 = sub_5EE48(&aBitmainApiDete[132 * i]);
        v5 |= v1;
        if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
        {
          snprintf(v3, 0x800u, "%s reg %s return: %d", "cgminer_socket_init", &aBitmainApiDete[132 * i], v5);
          sub_1E4EC(5, v3, 0);
        }
      }
      if ( !v5 )
        break;
      v5 = 0;
      sleep(5u);
      if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
      {
        snprintf(v3, 0x800u, "%s reg failed wait 5s", "cgminer_socket_init");
        sub_1E4EC(3, v3, 0);
      }
    }
    return 0;
  }
}
