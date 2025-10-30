void __fastcall __noreturn sub_A9E88(int a1, int a2)
{
  const char *v2; // r5
  int v3; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r0

  sub_92E40(v3);
  v6 = a1;
  v7 = a2;
  while ( v7 == 1 )
  {
    v8 = sub_339E78(v6);
    v6 = sub_92F64(*(_DWORD *)(v8 + 4), "unable to read value of %s (%s)", v2, *(const char **)(v8 + 8));
  }
  sub_339E78(v6);
  sub_92E60();
}
