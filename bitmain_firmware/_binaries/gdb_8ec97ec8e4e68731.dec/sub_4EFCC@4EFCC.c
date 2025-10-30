void __fastcall __noreturn sub_4EFCC(int a1, int a2)
{
  int v3; // r0
  __int64 v4; // r0
  int v5; // [sp+4h] [bp-8h] BYREF

  v5 = 0;
  if ( a1 )
  {
    v3 = sub_14CC6C();
    v4 = sub_26EB1C(v3);
    v5 = v4;
    if ( sub_244600(v4, HIDWORD(v4)) )
    {
      sub_24B28C(a2);
      sub_2446B8(&v5, a2);
    }
  }
  else if ( ((int (*)(void))sub_244600)() )
  {
    sub_24B28C(a2);
    sub_2446B8(0, a2);
  }
  sub_946E0("Not confirmed.");
}
