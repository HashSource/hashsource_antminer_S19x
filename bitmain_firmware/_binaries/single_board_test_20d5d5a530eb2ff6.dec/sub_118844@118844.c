int *__fastcall sub_118844(int *a1, __int16 a2, _DWORD *a3)
{
  size_t v4; // r8
  size_t v5; // r7
  int v6; // r4
  bool v7; // cc
  unsigned int v8; // r1
  int v9; // r0
  int *v10; // r5
  int v12; // r0
  int v13; // r0
  int v14; // r0
  char s[8]; // [sp+4h] [bp-8h] BYREF

  s[0] = HIBYTE(a2);
  s[1] = a2;
  if ( a3 )
  {
    v4 = 3;
    v5 = 3;
    s[2] = *a3;
  }
  else
  {
    v4 = 2;
    v5 = 2;
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = v6 < sub_10C010((int)a1);
    v8 = v6++;
    if ( !v7 )
      break;
    v9 = sub_10C01C(a1, v8);
    v10 = (int *)v9;
    if ( v5 == **(_DWORD **)v9 && !memcmp(*(const void **)(*(_DWORD *)v9 + 8), s, v4) )
      return v10;
  }
  v12 = sub_118830();
  v10 = (int *)v12;
  if ( v12 )
  {
    if ( *(_DWORD *)(v12 + 4) || (v14 = sub_1187D8(), (v10[1] = v14) != 0) )
    {
      v13 = *v10;
      if ( *v10 || (v13 = sub_B2068(), (*v10 = v13) != 0) )
      {
        if ( sub_1280A4(v13, s, v5) && sub_10BD3C(a1, (int)v10) )
          return v10;
      }
    }
  }
  IPAddressFamily_free((int)v10);
  return 0;
}
