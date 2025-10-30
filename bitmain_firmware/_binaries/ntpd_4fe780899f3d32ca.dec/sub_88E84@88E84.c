unsigned int __fastcall sub_88E84(unsigned int result, int a2)
{
  int v3; // r5
  char *v4; // r0
  int *v5; // r0
  int *v6; // r4
  int v7; // r7
  __int64 v8; // r10
  int v9; // r3
  int v10; // r7
  const char *v11; // r3
  int v12; // r4
  bool v13; // cc
  unsigned int v14; // r7
  void **v15; // r11
  int v16; // r3
  int v17; // r3
  const char *v18; // r4
  char *dest; // [sp+4h] [bp-A0h]
  void **v20[4]; // [sp+Ch] [bp-98h] BYREF
  char v21[128]; // [sp+1Ch] [bp-88h] BYREF

  if ( (*(_DWORD *)(result + 12) & 0x100) != 0 )
  {
    v3 = result;
    v4 = getenv(*(const char **)(result + 32));
    if ( v4 )
    {
      v5 = sub_88A20(v4);
      v6 = v5;
      if ( v5 )
      {
        v7 = *(_DWORD *)(v3 + 12);
        v8 = *(_QWORD *)(v3 + 4);
        v9 = *v5 + 1;
        *(_DWORD *)(v3 + 16) = 1;
        *(_DWORD *)(v3 + 20) = 0;
        *(_DWORD *)(v3 + 12) = v7 & 0xFFFFFFFB;
        *(_DWORD *)(v3 + 4) = v9;
        *(_DWORD *)(v3 + 8) = v5;
        if ( a2 == 1 )
        {
          sub_86AD8(v3);
        }
        else
        {
          if ( a2 != 2 )
          {
            sub_86AD8(v3);
            *(_DWORD *)(v3 + 20) = 0;
            *(_DWORD *)(v3 + 16) = 1;
          }
          sub_869AC(v3);
        }
        free(v6);
        *(_QWORD *)(v3 + 4) = v8;
        *(_DWORD *)(v3 + 12) = v7;
      }
    }
    v10 = *(_DWORD *)(v3 + 104);
    v11 = *(const char **)(v3 + 32);
    v12 = v10 - 1;
    v20[0] = *(void ***)(v3 + 68);
    result = sub_6C054((int)v21, 0x80u, "%s_", v11);
    v13 = v10 <= 0;
    dest = &v21[result];
    v14 = 127 - result;
    if ( !v13 )
    {
      v15 = v20[0];
      do
      {
        if ( ((unsigned int)v15[4] & 0x100) == 0 && *((unsigned __int16 *)v15 + 4) == 0x8000 )
        {
          result = strlen((const char *)v15[12]);
          if ( v14 >= result + 1 )
          {
            memcpy(dest, v15[12], result + 1);
            result = (unsigned int)sub_87194(v20, v21, v3, a2);
            v15 = v20[0];
          }
        }
        --v12;
        v15 += 16;
        v20[0] = v15;
      }
      while ( v12 != -1 );
    }
    v16 = *(unsigned __int16 *)(v3 + 94);
    if ( (v16 & 0x7FFF) != 0 )
    {
      v17 = *(_DWORD *)(v3 + 68) + ((v16 + 1) << 6);
      v18 = *(const char **)(v17 + 48);
      v20[0] = (void **)v17;
      if ( v18 )
      {
        result = strlen(v18);
        if ( v14 >= result + 1 )
        {
          memcpy(dest, v18, result + 1);
          return (unsigned int)sub_87194(v20, v21, v3, a2);
        }
      }
    }
  }
  return result;
}
