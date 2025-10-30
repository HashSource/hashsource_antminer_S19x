char *__fastcall sub_3D10C(const char *a1, char *a2)
{
  char *i; // r0
  char *v5; // r0
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  char v10[128]; // [sp+0h] [bp-80h] BYREF

  memset(v10, 0, sizeof(v10));
  strncpy(v10, a1, 0x7Fu);
  strncpy(a2, a1, 0x7Fu);
  for ( i = strtok(v10, (const char *)&word_193A78); i; i = strtok(0, (const char *)&word_193A78) )
  {
    if ( strstr(i, (const char *)off_21C0F8) )
      break;
  }
  v5 = strtok(0, (const char *)&word_193A78);
  if ( v5 )
    strncpy(a2 + 128, v5, 0x7Fu);
  v6 = strtok(0, (const char *)&word_193A78);
  if ( v6 )
    strncpy(a2 + 384, v6, 0x7Fu);
  v7 = strtok(0, (const char *)&word_193A78);
  if ( v7 )
    strncpy(a2 + 640, v7, 0x7Fu);
  v8 = strtok(0, (const char *)&word_193A78);
  if ( v8 )
    strncpy(a2 + 256, v8, 0x7Fu);
  return j_strncpy(a2 + 512, a2 + 256, 4u);
}
