int sub_1111C()
{
  size_t v0; // r0
  size_t v1; // r6
  _BYTE *v2; // r0
  int v3; // r4
  char src[4]; // [sp+Ch] [bp-ACh] BYREF
  int v6; // [sp+10h] [bp-A8h]
  int v7; // [sp+14h] [bp-A4h]
  int v8; // [sp+18h] [bp-A0h]
  int v9; // [sp+1Ch] [bp-9Ch]
  int v10; // [sp+20h] [bp-98h]
  int v11; // [sp+24h] [bp-94h]
  __int16 v12; // [sp+28h] [bp-90h]
  _DWORD v13[10]; // [sp+2Ch] [bp-8Ch] BYREF
  char s[100]; // [sp+54h] [bp-64h] BYREF

  *(_DWORD *)src = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  memset(v13, 0, sizeof(v13));
  memset(s, 0, sizeof(s));
  if ( !sub_10B18("eth0", (char *)v13) )
    puts("get IP error");
  sub_10CD8(src, "eth0");
  v0 = strlen(src);
  v1 = v0 + 1;
  strncpy(byte_219E8, src, v0);
  v2 = (_BYTE *)stpcpy(s, v13);
  *v2 = 44;
  v3 = v2 - s;
  memcpy(v2 + 1, src, v1);
  if ( sendto(dword_219E0, s, v3 + v1, 0, (const struct sockaddr *)&word_21A20, 0x10u) < 0 )
    printf("send error....");
  else
    printf("send ipmac:\n%s\n", s);
  return 1;
}
