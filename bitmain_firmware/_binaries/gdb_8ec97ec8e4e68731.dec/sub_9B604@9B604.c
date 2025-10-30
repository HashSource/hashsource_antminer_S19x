bool __fastcall sub_9B604(int a1)
{
  const char *v2; // r0
  int v3; // r2
  bool v4; // zf
  unsigned int v5; // r2
  char v6; // r3
  int v7; // r3

  v2 = (const char *)sub_170CC4(*(_DWORD *)(a1 + 24));
  v3 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(a1 + 32) >> 3));
  v4 = v3 == 12;
  if ( v3 != 12 )
    v4 = v3 == 1;
  v5 = v3 & 0xFFFFFFFD;
  v6 = !v4;
  if ( v5 == 8 )
    v7 = 0;
  else
    v7 = v6 & 1;
  if ( !v2 )
    v7 = 0;
  return v7 && strcmp(v2, "exception") == 0;
}
