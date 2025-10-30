void __fastcall sub_1818C8(int a1, int a2, int a3, int a4, char *ptr, int a6, char a7)
{
  int v7; // r6
  int v10; // r4
  int *v11; // r0
  int v12; // r0

  if ( ptr != &a7 )
    sub_339E64(ptr);
  sub_92E40(v7);
  if ( a2 == 1 )
  {
    v10 = sub_339E78(a1);
    v11 = (int *)sub_242F8C(v10);
    v12 = sub_154B38(*v11, *(_DWORD *)v10, *(_DWORD *)(v10 + 4), *(const char **)(v10 + 8));
    sub_339EF8(v12);
    JUMPOUT(0x181858);
  }
  sub_339E78(a1);
  sub_92E60();
}
