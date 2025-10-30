void __fastcall __noreturn sub_1D4700(int a1, int a2)
{
  int v2; // r4
  int v3; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int *v9; // t0

  sub_92E40(v3);
  if ( a2 == 1 )
  {
    v9 = (int *)sub_339E78(a1);
    v6 = *v9++;
    v7 = *v9;
    v8 = v9[1];
    *(_DWORD *)(v2 + 8) = 0;
    sub_92F1C(v6, v7, v8);
  }
  sub_339E78(a1);
  sub_92E60();
}
