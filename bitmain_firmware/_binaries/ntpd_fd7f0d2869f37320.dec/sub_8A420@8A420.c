unsigned int __fastcall sub_8A420(unsigned int result, int a2)
{
  void ***v2; // r9
  void **v3; // r11
  int v5; // r5
  unsigned __int8 *v6; // r0
  _DWORD *v7; // r0
  void *v8; // r4
  int v9; // r8
  int v10; // r3
  int v11; // r10
  const char *v12; // r3
  int v13; // r4
  bool v14; // cc
  int v15; // r4
  unsigned int v16; // r10
  int v17; // r3
  int v18; // r3
  const void *v19; // r4
  char *dest; // [sp+4h] [bp-A0h]
  void **v21[4]; // [sp+Ch] [bp-98h] BYREF
  char v22[128]; // [sp+1Ch] [bp-88h] BYREF

  v5 = result;
  if ( (*(_DWORD *)(result + 12) & 0x100) == 0 )
    return result;
  v6 = (unsigned __int8 *)getenv(*(const char **)(result + 32));
  if ( v6 )
  {
    v7 = sub_89FB0(v6);
    v8 = v7;
    if ( v7 )
    {
      v9 = *(_DWORD *)(v5 + 12);
      v2 = *(void ****)(v5 + 4);
      v10 = *v7 + 1;
      v11 = *(_DWORD *)(v5 + 8);
      v3 = 0;
      *(_DWORD *)(v5 + 12) = v9 & 0xFFFFFFFB;
      *(_DWORD *)(v5 + 4) = v10;
      *(_DWORD *)(v5 + 8) = v7;
      *(_DWORD *)(v5 + 16) = 1;
      *(_DWORD *)(v5 + 20) = 0;
      if ( a2 == 1 )
      {
        sub_876B4(v5);
        goto LABEL_10;
      }
      if ( a2 )
      {
        if ( a2 != 2 )
        {
LABEL_10:
          free(v8);
          *(_DWORD *)(v5 + 4) = v2;
          *(_DWORD *)(v5 + 8) = v11;
          *(_DWORD *)(v5 + 12) = v9;
          goto LABEL_11;
        }
      }
      else
      {
        sub_876B4(v5);
        *(_DWORD *)(v5 + 20) = 0;
        *(_DWORD *)(v5 + 16) = 1;
      }
      sub_877F0(v5);
      goto LABEL_10;
    }
  }
LABEL_11:
  v12 = *(const char **)(v5 + 32);
  v13 = *(_DWORD *)(v5 + 104);
  v21[0] = *(void ***)(v5 + 68);
  result = sub_6D00C((int)v22, 0x80u, "%s_", v12);
  v14 = v13 <= 0;
  v15 = v13 - 1;
  if ( !v14 )
  {
    v2 = v21;
    v3 = v21[0];
  }
  v16 = 127 - result;
  dest = &v22[result];
  if ( !v14 )
  {
    do
    {
      if ( ((unsigned int)v3[4] & 0x100) == 0 && *((unsigned __int16 *)v3 + 4) == 0x8000 )
      {
        result = strlen((const char *)v3[12]);
        if ( v16 >= result + 1 )
        {
          memcpy(dest, v3[12], result + 1);
          result = (unsigned int)sub_88708(v2, v22, v5, a2);
          v3 = v21[0];
        }
      }
      --v15;
      v3 += 16;
      v21[0] = v3;
    }
    while ( v15 != -1 );
  }
  v17 = *(unsigned __int16 *)(v5 + 94);
  if ( (v17 & 0x7FFF) != 0 )
  {
    v18 = *(_DWORD *)(v5 + 68) + ((v17 + 1) << 6);
    v21[0] = (void **)v18;
    v19 = *(const void **)(v18 + 48);
    if ( v19 )
    {
      result = strlen(*(const char **)(v18 + 48));
      if ( v16 >= result + 1 )
      {
        memcpy(dest, v19, result + 1);
        return (unsigned int)sub_88708(v21, v22, v5, a2);
      }
    }
  }
  return result;
}
