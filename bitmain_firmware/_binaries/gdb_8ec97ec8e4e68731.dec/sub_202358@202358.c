void *sub_202358()
{
  void *v0; // r8
  _DWORD *v1; // r5
  unsigned int v2; // r7
  unsigned int *v3; // r11
  _DWORD *v4; // r10
  char *v5; // r9
  int v6; // t1
  char *v7; // r4
  const char *v8; // r3
  void *v10; // [sp+8h] [bp-Ch] BYREF
  void *ptr; // [sp+Ch] [bp-8h] BYREF

  sub_230590(&v10, &dword_4899A0, 12, 0);
  v0 = v10;
  if ( v10 )
  {
    ptr = 0;
    v1 = sub_9253C((int)sub_2029F4, (int)&ptr);
    v2 = sub_274C9C("target library list", "library-list.dtd", &off_3DD37C, v0, &ptr);
    if ( v2 )
    {
      sub_92620(v1);
      v0 = 0;
    }
    else
    {
      sub_92640(v1);
      v3 = (unsigned int *)ptr;
      if ( ptr )
      {
        v0 = *(void **)ptr;
        if ( *(_DWORD *)ptr )
        {
          v4 = 0;
          v5 = (char *)ptr + 4;
          v0 = 0;
          do
          {
            v6 = *((_DWORD *)v5 + 1);
            v5 += 4;
            v7 = (char *)sub_93094(1u, 0x428u);
            strncpy(v7 + 520, *(const char **)v6, 0x1FFu);
            v7[1031] = 0;
            strncpy(v7 + 8, *(const char **)v6, 0x1FFu);
            v7[519] = 0;
            *((_DWORD *)v7 + 1) = v6;
            v8 = *(const char **)v6;
            *(_DWORD *)(v6 + 4) = 0;
            *v8 = 0;
            if ( v0 )
              *v4 = v7;
            else
              v0 = v7;
            ++v2;
            v4 = v7;
          }
          while ( v2 < *v3 );
        }
        free(v3);
      }
      else
      {
        v0 = 0;
      }
    }
    if ( v10 )
      free(v10);
  }
  return v0;
}
