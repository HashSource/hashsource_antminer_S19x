int __fastcall sub_236390(int a1, unsigned int a2, void *a3)
{
  int *v4; // r0
  int v5; // r4
  char *v7; // r0

  v4 = (int *)sub_234AC0(a1, a2);
  if ( !v4 )
    return -1;
  v5 = *v4;
  if ( !*v4 )
    return -1;
  if ( !*(_DWORD *)(v5 + 40) || (v7 = (char *)sub_1E0454((int)a3), sub_33CAA0(v5 + 36, v7)) )
  {
    if ( &unk_46DAEC == a3 || &unk_46DAF4 == a3 )
      return *(_DWORD *)(v5 + 32);
    return -1;
  }
  return 1;
}
