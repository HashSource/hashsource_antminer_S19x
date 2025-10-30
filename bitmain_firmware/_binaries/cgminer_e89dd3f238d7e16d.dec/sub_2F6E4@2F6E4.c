const char *__fastcall sub_2F6E4(const char *a1)
{
  char *v4; // [sp+8h] [bp-Ch]
  int v5; // [sp+Ch] [bp-8h]

  if ( dword_86F00 || dword_86F04 )
    return "Use only user + pass or userpass, but not both";
  if ( ++dword_86F08 > dword_90E90 )
    sub_2E5D4();
  v5 = *(_DWORD *)(dword_90F34 + 4 * (dword_86F08 + 0x3FFFFFFF));
  v4 = strdup(a1);
  sub_5452C(a1, v5 + 168);
  *(_DWORD *)(v5 + 172) = strtok(v4, ":");
  if ( !*(_DWORD *)(v5 + 172) )
    return "Failed to find : delimited user info";
  *(_DWORD *)(v5 + 176) = strtok(0, ":");
  if ( !*(_DWORD *)(v5 + 176) )
    *(_DWORD *)(v5 + 176) = strdup(byte_6E658);
  return 0;
}
