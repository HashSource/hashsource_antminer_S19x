int __fastcall sub_1DD94(int a1)
{
  int v2; // r4
  int v3; // r0
  void (__fastcall *v4)(int); // r3
  int v5; // r0

  v2 = sub_1F5E0();
  if ( a1 != (*(int (**)(void))(v2 + 24))() )
  {
    v3 = (*(int (__fastcall **)(int))(v2 + 296))(v2);
    v2 = sub_21304(v3);
    if ( a1 != (*(int (**)(void))(v2 + 24))() )
    {
      v4 = *(void (__fastcall **)(int))(v2 + 296);
      v5 = v2;
      v2 = 0;
      v4(v5);
    }
  }
  return v2;
}
