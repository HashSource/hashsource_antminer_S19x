void __fastcall sub_1ED3EC(int a1, int a2)
{
  int v2; // r4
  int *v5; // r0

  sub_92E40(v2);
  if ( a2 == 1 )
  {
    v5 = (int *)sub_339E78(a1);
    if ( v5[1] == 12 )
    {
      sub_339EF8(v5);
      JUMPOUT(0x1ED3C8);
    }
    sub_92F1C(*v5, v5[1], v5[2]);
  }
  sub_339E78(a1);
  sub_92E60();
}
