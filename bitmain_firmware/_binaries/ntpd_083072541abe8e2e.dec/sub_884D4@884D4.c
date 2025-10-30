int __fastcall sub_884D4(int result)
{
  int v1; // r3
  int v2; // r4
  int v3; // r5
  int v4; // r10
  int v5; // r2
  int v6; // t1
  int v7; // r6
  const char *v8; // r8
  size_t v9; // r12
  char *v10; // r0
  size_t v11; // [sp+4h] [bp-1078h]
  _BYTE v12[16]; // [sp+8h] [bp-1074h] BYREF
  __int16 v13; // [sp+18h] [bp-1064h]
  char v14[8]; // [sp+70h] [bp-100Ch] BYREF

  v1 = *(_DWORD *)(result + 52);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = result;
    v4 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v4 & 0xFFFFFFFB;
    if ( v2 )
    {
      v5 = v1 + 4;
      v2 = 0;
      do
      {
        v6 = *(_DWORD *)(v5 + 4);
        v5 += 4;
        ++v2;
      }
      while ( v6 );
    }
    v7 = -1;
    while ( 1 )
    {
      if ( v2 == -1 )
      {
        v7 = 1;
        v2 = 0;
      }
      else
      {
        v1 += 4 * v2;
      }
      if ( !*(_DWORD *)v1 )
      {
        *(_DWORD *)(v3 + 12) = v4;
        return result;
      }
      result = sub_83F7C(v14, 0x1001u, *(char **)v1, *(const char **)(v3 + 24));
      if ( !result )
        break;
      result = _xstat64(3, v14, v12);
      if ( result )
        break;
      if ( (v13 & 0xF000) == 0x4000 )
      {
        v8 = *(const char **)(v3 + 36);
        v11 = strlen(v14);
        result = strlen(v8);
        v9 = result + 1;
        if ( v11 + 1 + result + 1 > 0x1000 )
          break;
        v10 = &v14[v11];
        if ( v14[v11 - 1] != 47 )
        {
          ++v10;
          v14[v11] = 47;
        }
        memcpy(v10, v8, v9);
      }
      result = sub_879A8(v3, (int)v14, v7);
      if ( ((v7 == -1) & (*(_DWORD *)(*(_DWORD *)(v3 + 68) + (*(unsigned __int16 *)(v3 + 94) << 6) + 80) >> 5)) != 0 )
        v7 = 1;
      else
        v2 += v7;
LABEL_21:
      v1 = *(_DWORD *)(v3 + 52);
    }
    v2 += v7;
    goto LABEL_21;
  }
  return result;
}
