int __fastcall sub_89A78(int a1, char *s1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r5
  int v6; // r6
  int v7; // r4
  bool v8; // cc
  int v9; // r1

  result = sub_8661C(
             **(_DWORD **)(a1 + 1232),
             *(_DWORD *)(a1 + 196),
             (int *)(a1 + 188),
             (int *)(a1 + 192),
             s1,
             *(_DWORD *)(a1 + 1028));
  v5 = result;
  if ( result )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = v7 < sub_10C010(v5, v3, v4);
      v9 = v7++;
      if ( !v8 )
        break;
      if ( *(int *)(sub_10C01C(v5, v9) + 32) < 772 )
        ++v6;
    }
    result = 1;
    if ( !v6 )
    {
      sub_D0048(20, 271, 185, "ssl/ssl_lib.c", 2606);
      return 0;
    }
  }
  return result;
}
