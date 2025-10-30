void __fastcall sub_26F1C0(int a1, int a2)
{
  int v2; // r5
  char *v3; // r10
  int v6; // r5
  int *v7; // r0
  int v8; // r0

  sub_92E40(v2);
  if ( a2 == 1 )
  {
    v6 = sub_339E78(a1);
    v7 = (int *)sub_242F8C();
    sub_25A418(*v7, v3, *(_DWORD *)(v6 + 8));
    sub_339EF8(v8);
    JUMPOUT(0x26F190);
  }
  sub_339E78(a1);
  sub_92E60();
}
