void __fastcall sub_1F7440(int a1, int a2)
{
  int v2; // r9
  int v5; // r0

  sub_92E40(v2);
  if ( a2 == 1 )
  {
    if ( *(_DWORD *)sub_339E78(a1) == -2 )
      v5 = sub_1F61A4(-1, 4);
    else
      v5 = sub_1F61A4(-1, 5);
    sub_339EF8(v5);
    JUMPOUT(0x1F7400);
  }
  sub_339E78(a1);
  sub_92E60();
}
