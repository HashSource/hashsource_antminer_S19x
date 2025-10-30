// positive sp value has been detected, the output may be wrong!
int __fastcall sub_17D098(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int *v6; // r0
  int *v7; // r5
  int *v8; // r0
  int v9; // r0

  sub_92E40(v3);
  if ( a2 != 1 )
  {
    sub_339E78(a1);
    sub_92E60();
  }
  v6 = (int *)sub_339E78(a1);
  v7 = v6;
  if ( !*(_DWORD *)(*(_DWORD *)v2 + 68) )
    sub_92F1C(*v6, v6[1], v6[2]);
  v8 = (int *)sub_242FB4(v6);
  v9 = sub_154B38(*v8, *v7, v7[1], (const char *)v7[2]);
  return sub_349250(v9);
}
