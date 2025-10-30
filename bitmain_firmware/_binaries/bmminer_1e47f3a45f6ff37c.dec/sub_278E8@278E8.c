int sub_278E8()
{
  int v1; // r3
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_B3E48 )
  {
    if ( !dword_5BF810 )
      sub_25F6C((int)dword_5BF7D8);
    memcpy(dword_5BF7D8, &dword_B3E10, 0x208u);
    if ( (unsigned int)dword_B308C > 4 )
    {
      snprintf(v2, 0x800u, "update conf to %s complete", (const char *)dword_B3E10);
      sub_3B6AC(4, v2, 0, v1);
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v2, "update_conf failed!!!");
      sub_3B6AC(3, v2, dword_B3E48, *(_DWORD *)"failed!!!");
    }
    return -1;
  }
}
