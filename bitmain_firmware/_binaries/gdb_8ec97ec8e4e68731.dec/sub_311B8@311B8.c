int sub_311B8()
{
  int v0; // r0
  int v1; // r4
  int v2; // r5
  int v3; // r0
  const char *v4; // r1

  v0 = sub_31060();
  v1 = *(_DWORD *)(v0 + 4);
  if ( v1 )
  {
    v2 = v0;
    v1 = sub_93094(1, 0x428u);
    v3 = sub_9836C(32);
    *(_DWORD *)(v1 + 4) = v3;
    v4 = *(const char **)(v2 + 12);
    *(_DWORD *)v3 = *(_DWORD *)(v2 + 8);
    *(_BYTE *)(v3 + 8) = 1;
    *(_DWORD *)(v3 + 4) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = 0;
    *(_DWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 28) = 0;
    strncpy((char *)(v1 + 520), v4, 0x1FFu);
    *(_BYTE *)(v1 + 1031) = 0;
    strcpy((char *)(v1 + 8), (const char *)(v1 + 520));
  }
  return v1;
}
