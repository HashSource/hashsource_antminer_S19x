int __fastcall sub_89A60(int result)
{
  int v1; // r3
  int v2; // r5
  int v3; // r4
  int v4; // r8
  int v5; // r2
  int v6; // t1
  int v7; // r9
  int v8; // r2
  int v9; // r6
  char *v10; // r2
  const char *v11; // r10
  size_t v12; // r7
  size_t v13; // r2
  int v14; // r0
  bool v15; // zf
  char *v16; // r0
  char v17[16]; // [sp+8h] [bp-1074h] BYREF
  __int16 v18; // [sp+18h] [bp-1064h]
  char v19[8]; // [sp+70h] [bp-100Ch] BYREF

  v1 = *(_DWORD *)(result + 52);
  v2 = result;
  if ( v1 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    v4 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v4 & 0xFFFFFFFB;
    if ( v3 )
    {
      v5 = v1 + 4;
      v3 = 0;
      do
      {
        v6 = *(_DWORD *)(v5 + 4);
        v5 += 4;
        ++v3;
      }
      while ( v6 );
    }
    v7 = -1;
    while ( 1 )
    {
      if ( v3 == -1 )
        v8 = 0;
      else
        v8 = 4 * v3;
      if ( v3 == -1 )
        v9 = v8;
      else
        v9 = v3;
      v10 = *(char **)(v1 + v8);
      if ( v3 == -1 )
        v7 = 1;
      if ( !v10 )
      {
        *(_DWORD *)(v2 + 12) = v4;
        return result;
      }
      v3 = v9 + v7;
      result = sub_854CC(v19, 0x1001u, v10, *(const char **)(v2 + 24));
      if ( result )
      {
        result = _xstat64(3, v19, v17);
        if ( !result )
        {
          if ( (v18 & 0xF000) == 0x4000 )
          {
            v11 = *(const char **)(v2 + 36);
            v12 = strlen(v19);
            result = strlen(v11);
            v13 = result + 1;
            if ( v12 + 1 + result + 1 > 0x1000 )
              goto LABEL_6;
            v14 = (unsigned __int8)v19[v12 - 1];
            v15 = v14 == 47;
            if ( v14 == 47 )
              v16 = &v19[v12];
            else
              v16 = &v19[v12 + 1];
            if ( !v15 )
              v19[v12] = 47;
            memcpy(v16, v11, v13);
          }
          result = (int)sub_88EFC(v2, (int)v19, v7);
          if ( ((v7 == -1) & (*(_DWORD *)(*(_DWORD *)(v2 + 68) + (*(unsigned __int16 *)(v2 + 94) << 6) + 80) >> 5)) != 0 )
          {
            v3 = v9;
            v7 = 1;
          }
        }
      }
LABEL_6:
      v1 = *(_DWORD *)(v2 + 52);
    }
  }
  return result;
}
