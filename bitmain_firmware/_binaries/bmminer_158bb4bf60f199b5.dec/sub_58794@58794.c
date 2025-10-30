const char *__fastcall sub_58794(char *s)
{
  int v2; // r3
  int v3; // r6
  char *v4; // r4
  char *v5; // r0
  char *v6; // r4

  if ( dword_1AF134 || dword_1AF138 )
    return "Use only user + pass or userpass, but not both";
  v2 = dword_1AF13C + 1;
  dword_1AF13C = v2;
  if ( v2 > dword_242F4C )
  {
    sub_58548();
    v2 = dword_1AF13C;
  }
  v3 = *(_DWORD *)(dword_244048 + 4 * (v2 + 0x3FFFFFFF));
  v4 = _strdup(s);
  sub_64370(s, v3 + 168);
  v5 = strtok(v4, ":");
  *(_DWORD *)(v3 + 172) = v5;
  if ( !v5 )
    return "Failed to find : delimited user info";
  v6 = strtok(0, ":");
  *(_DWORD *)(v3 + 176) = v6;
  if ( v6 )
    return 0;
  *(_DWORD *)(v3 + 176) = calloc(1u, 1u);
  return v6;
}
