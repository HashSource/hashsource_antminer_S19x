const char *__fastcall sub_30830(const char *a1)
{
  char *v4; // [sp+8h] [bp-Ch]
  int v5; // [sp+Ch] [bp-8h]

  if ( dword_88098 || dword_8809C )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_880A0 > dword_92028 )
    sub_2F5CC();
  v5 = *(_DWORD *)(dword_920CC + 4 * (dword_880A0 + 0x3FFFFFFF));
  v4 = strdup(a1);
  sub_551C4(a1, v5 + 168);
  *(_DWORD *)(v5 + 172) = strtok(v4, ":");
  if ( !*(_DWORD *)(v5 + 172) )
    return "Failed to find : delimited user info";
  *(_DWORD *)(v5 + 176) = strtok(0, ":");
  if ( !*(_DWORD *)(v5 + 176) )
    *(_DWORD *)(v5 + 176) = strdup(byte_6F818);
  return 0;
}
