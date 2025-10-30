int __fastcall sub_BDEE0(int a1, int a2, int a3, int a4)
{
  char *v5; // r5
  int v8; // r0
  const char **v9; // r5
  const char *v11; // r1
  const char **v12; // [sp+8h] [bp-8h] BYREF

  v5 = *(char **)(a3 + 12);
  v8 = sub_C2574(*(_DWORD *)(a1 + 16));
  sub_FDFD8((int)&v12, v5, a4, v8, 1);
  v9 = v12;
  if ( !v12 )
    return 0;
  sub_BD334(a1, a2, (int)v12);
  if ( *(_BYTE *)(a2 + 8) )
  {
    if ( dword_46D448 )
      v11 = (const char *)sub_21B3C4(v9);
    else
      v11 = *v9;
    sub_946E0("`%s' has been optimized out, cannot use", v11);
  }
  return 1;
}
