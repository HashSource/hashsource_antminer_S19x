int __fastcall sub_2D234(const char *a1)
{
  char *v1; // r0
  char *v2; // r6
  char *v3; // r0
  char *v4; // r4
  char *v5; // r5
  unsigned int v6; // r5
  struct timeval tv; // [sp+4h] [bp-9Ch] BYREF
  char v9[48]; // [sp+Ch] [bp-94h] BYREF
  _BYTE s[100]; // [sp+3Ch] [bp-64h] BYREF

  v1 = sub_2CF24(a1, 0);
  if ( !v1 )
    return -1;
  v2 = v1;
  v3 = strstr(v1, "Date:");
  v4 = v3;
  if ( v3 )
  {
    v5 = strstr(v3, "\r\n");
    memset(s, 0, sizeof(s));
    if ( v5 )
      memcpy(s, v4, v5 - v4);
  }
  else
  {
    memset(s, 0, sizeof(s));
  }
  v6 = sub_3C91C(&s[11]);
  tv.tv_usec = 0;
  tv.tv_sec = 0;
  gettimeofday(&tv, 0);
  if ( v6 > tv.tv_sec )
  {
    tv.tv_sec = v6;
    settimeofday(&tv, 0);
    sub_1E938(v9, 0x30u);
    printf("%s ", v9);
    printf("%s : set time successfuly, time_seconds:%d\n", "get_time_from_web", v6);
    snprintf(&byte_614B08[1536], 0x100u, "set time successfuly, time_seconds:%d", v6);
    sub_3CC5C(&byte_614B08[1536], v9);
  }
  free(v2);
  return 0;
}
