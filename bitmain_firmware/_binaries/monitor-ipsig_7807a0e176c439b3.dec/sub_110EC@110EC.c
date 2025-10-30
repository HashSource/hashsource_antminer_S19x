int sub_110EC()
{
  size_t v0; // r4
  _BYTE *v1; // r5
  char s[32]; // [sp+Ch] [bp-ACh] BYREF
  char v4[40]; // [sp+2Ch] [bp-8Ch] BYREF
  char v5[100]; // [sp+54h] [bp-64h] BYREF

  memset(s, 0, 0x1Eu);
  memset(v4, 0, sizeof(v4));
  memset(v5, 0, sizeof(v5));
  if ( !sub_10AFC("eth0", v4) )
    puts("get IP error");
  sub_10CC0(s, "eth0");
  v0 = strlen(s);
  strncpy(byte_220AC, s, v0);
  v1 = (_BYTE *)stpcpy(v5, v4);
  *v1 = 44;
  memcpy(v1 + 1, s, v0 + 1);
  if ( sendto(dword_220A4, v5, v0 + v1 - v5 + 1, 0, (const struct sockaddr *)&dword_220E4, 0x10u) < 0 )
    printf("send error....");
  else
    printf("send ipmac:\n%s\n", v5);
  return 1;
}
