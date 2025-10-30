int __fastcall sub_24EC0(int a1)
{
  _DWORD *v1; // r0
  _DWORD *v2; // r5
  void *v3; // r3
  _DWORD *v4; // r0
  void *v5; // r3
  const char *v7; // r0
  int v8; // r3
  char v9[2052]; // [sp+0h] [bp-804h] BYREF

  v1 = (_DWORD *)sub_72B10(a1, "processor");
  v2 = v1;
  if ( !v1 )
  {
    v3 = off_AFC24;
    goto LABEL_12;
  }
  v3 = off_AFC24;
  if ( *v1 )
  {
LABEL_12:
    if ( (unsigned int)v3 <= 3 )
      return -1;
    strcpy(v9, "get processor failed\n");
    sub_3AF5C(3, v9, 0, *(_DWORD *)"r failed\n");
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v9, "processor:\n");
    sub_3AF5C(4, v9, 0, "processor:\n");
  }
  v4 = (_DWORD *)sub_72B10(v2, "type");
  if ( !v4 )
  {
    v5 = off_AFC24;
    goto LABEL_8;
  }
  v5 = off_AFC24;
  if ( *v4 != 2 )
  {
LABEL_8:
    if ( (unsigned int)v5 > 3 )
    {
      strcpy(v9, "get type failed\n");
      sub_3AF5C(3, v9, 0, *(_DWORD *)"led\n");
    }
    return -1;
  }
  if ( (unsigned int)off_AFC24 > 4 )
  {
    v7 = (const char *)sub_74300(v4);
    snprintf(v9, 0x800u, "type: %s\n", v7);
    sub_3AF5C(4, v9, 0, v8);
  }
  return 0;
}
