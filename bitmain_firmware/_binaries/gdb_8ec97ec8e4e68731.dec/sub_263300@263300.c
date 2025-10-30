int __fastcall sub_263300(_BYTE *a1, _DWORD *a2)
{
  const char *v4; // r6
  char *v5; // r0
  size_t v6; // r5
  const char *v7; // r4

  if ( *a1 != 126 )
    return 0;
  v4 = (const char *)sub_172254(a2);
  v5 = strchr(v4, 60);
  if ( v5 )
    v6 = v5 - v4;
  else
    v6 = strlen(v4);
  v7 = a1 + 1;
  if ( strlen(v7) != v6 || strncmp(v4, v7, v6) )
    sub_946E0("name of destructor must equal name of class");
  return 1;
}
