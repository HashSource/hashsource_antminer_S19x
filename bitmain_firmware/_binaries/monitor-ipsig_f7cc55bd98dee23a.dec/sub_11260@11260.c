int sub_11260()
{
  size_t v0; // r0
  size_t v1; // r0
  char src[40]; // [sp+8h] [bp-BCh] BYREF
  char s[32]; // [sp+30h] [bp-94h] BYREF
  char dest[100]; // [sp+50h] [bp-74h] BYREF
  ssize_t v6; // [sp+B4h] [bp-10h]

  memset(s, 0, 0x1Eu);
  memset(src, 0, sizeof(src));
  memset(dest, 0, sizeof(dest));
  if ( !sub_10AF0("eth0", src) )
    puts("get IP error");
  sub_10D24(s, "eth0");
  v0 = strlen(s);
  strncpy(byte_220B4, s, v0);
  strcpy(dest, src);
  *(_WORD *)&dest[strlen(dest)] = 44;
  strcat(dest, s);
  v1 = strlen(dest);
  v6 = sendto(dword_220A8, dest, v1, 0, (const struct sockaddr *)&word_220E8, 0x10u);
  if ( v6 >= 0 )
    printf("send ipmac:\n%s\n", dest);
  else
    printf("send error....");
  return 1;
}
