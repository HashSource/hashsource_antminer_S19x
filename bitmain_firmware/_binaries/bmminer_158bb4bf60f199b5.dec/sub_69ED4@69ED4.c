_DWORD *__fastcall sub_69ED4(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  int v7; // r0

  v6 = malloc(4u);
  if ( v6 && (v7 = sub_6A3B0(a1, a2, a3), (*v6 = v7) != 0) )
    return v6;
  else
    return 0;
}
