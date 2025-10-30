int __fastcall sub_90DF4(int a1, int a2)
{
  _DWORD *v5; // r3
  size_t v6; // r0
  size_t v7; // r1
  int v8; // r3
  int v9; // r3
  int v10; // r0
  int v11; // r4
  int v12; // r0
  void *s; // [sp+8h] [bp-18h] BYREF
  size_t n; // [sp+Ch] [bp-14h] BYREF

  if ( (*(_DWORD *)(a1 + 1260) & 0x10) == 0 )
    return 2;
  if ( sub_A820C(a2, &n) )
  {
    v5 = *(_DWORD **)(a1 + 1140);
    if ( *v5 == 772 && v5[117] && (v9 = v5[110]) != 0 && (v10 = sub_864EC(*(_DWORD *)(v9 + 52))) != 0 )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 1140) + 468);
      v12 = sub_D8C78(v10);
      v6 = v12 + n + v11 + 15;
    }
    else
    {
      v6 = n;
    }
    if ( v6 - 256 > 0xFF )
      return 1;
    if ( 512 - v6 <= 4 )
      v7 = 1;
    else
      v7 = 508 - v6;
    n = v7;
    if ( sub_A8450(a2, v7, 21, 0, 2) && sub_A8420(a2, n, &s, 2) )
    {
      memset(s, 0, n);
      return 1;
    }
    v8 = 989;
  }
  else
  {
    v8 = 948;
  }
  sub_95494(a1, 80, 472, 68, "ssl/statem/extensions_clnt.c", v8);
  return 0;
}
