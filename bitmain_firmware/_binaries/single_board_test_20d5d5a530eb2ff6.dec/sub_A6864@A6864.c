int __fastcall sub_A6864(_DWORD *a1, int a2, int a3, char *s2)
{
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // lr

  v7 = sub_10ACE4(s2);
  if ( !v7 )
    return -1;
  v8 = v7;
  a1[392] = sub_B8A2C(*(_DWORD *)(v7 + 8));
  a1[393] = sub_B8A2C(*(_DWORD *)(v8 + 4));
  sub_B87C8(a1[399]);
  v9 = a1[394];
  a1[399] = 0;
  sub_B87C8(v9);
  v10 = *(_DWORD *)(v8 + 4);
  a1[394] = 0;
  if ( sub_10B680(a2, a3, a1 + 394, a1 + 399, *(_DWORD *)(v8 + 8), v10) )
    return 1;
  else
    return -1;
}
