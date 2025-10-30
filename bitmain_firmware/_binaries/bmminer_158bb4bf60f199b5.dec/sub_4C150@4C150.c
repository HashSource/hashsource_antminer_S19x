void __fastcall sub_4C150(void *a1, const void *a2, size_t a3, int a4, int a5, int a6)
{
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( (int)(a3 - 1) < 0 )
  {
    if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
      return;
    snprintf(s, 0x800u, "ERR: Asked to memcpy %u bytes from %s %s():%d", a3, a4, a5, a6);
LABEL_9:
    sub_47AB4(3, s, 0);
    return;
  }
  if ( !a1 )
  {
    if ( !byte_244080 && !byte_1AECC4 && dword_9E320 <= 2 )
      return;
    snprintf(s, 0x800u, "ERR: Asked to memcpy %u bytes to NULL from %s %s():%d", a3, a4, a5, a6);
    goto LABEL_9;
  }
  if ( a2 )
  {
    memcpy(a1, a2, a3);
    return;
  }
  if ( byte_244080 || byte_1AECC4 || dword_9E320 > 2 )
  {
    snprintf(s, 0x800u, "ERR: Asked to memcpy %u bytes from NULL from %s %s():%d", a3, a4, a5, a6);
    goto LABEL_9;
  }
}
