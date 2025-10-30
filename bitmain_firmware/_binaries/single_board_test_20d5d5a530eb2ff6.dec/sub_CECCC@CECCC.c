int __fastcall sub_CECCC(int result, int a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r9
  bool v8; // cc
  int v9; // r1
  int v10; // r7
  int v11; // r5
  size_t v12; // r0
  int v13; // [sp+4h] [bp-8h] BYREF

  v4 = *(_DWORD *)(a4 + 4);
  if ( !v4 )
  {
    v6 = result;
    while ( 1 )
    {
      v8 = v4 < sub_10C010(a2, a2, a3);
      v9 = v4;
      result = a2;
      ++v4;
      if ( !v8 )
        break;
      v10 = sub_10C01C(a2, v9);
      (*(void (__fastcall **)(int, int *, _DWORD, int))(v10 + 40))(v10, &v13, 0, v6);
      v11 = v13;
      if ( v13 )
      {
        v12 = strlen(*(const char **)(v13 + 12));
        if ( v12 == *(_DWORD *)(a4 + 12) )
        {
          result = strncasecmp(*(const char **)(v13 + 12), *(const char **)(a4 + 8), v12);
          if ( !result )
          {
            *(_DWORD *)a4 = v10;
            *(_DWORD *)(a4 + 4) = v11;
            return result;
          }
        }
      }
    }
  }
  return result;
}
