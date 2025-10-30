int sub_27370()
{
  int v1; // r3
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( dword_B10D8 )
  {
    if ( !dword_5BA958 )
      sub_25AA0((int)&dword_5BA920);
    memcpy(&dword_5BA920, &dword_B10A0, 0x208u);
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v2, 0x800u, "update conf to %s complete", (const char *)dword_B10A0);
      sub_3AF5C(4, v2, 0, v1);
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v2, "update_conf failed!!!");
      sub_3AF5C(3, v2, dword_B10D8, *(_DWORD *)"failed!!!");
    }
    return -1;
  }
}
