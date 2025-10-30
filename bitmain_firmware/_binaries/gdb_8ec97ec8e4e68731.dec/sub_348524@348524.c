void __fastcall __noreturn sub_348524(__int64 a1)
{
  int v1; // r6
  __int64 v2; // r4
  int v3; // r0

  v1 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(HIDWORD(a1) + 64) = *(_DWORD *)(a1 + 20);
  if ( !v1 )
  {
    v2 = a1;
    v3 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(a1 + 16))(2, a1, HIDWORD(a1));
    if ( v3 != 7 )
    {
      if ( v3 == 8 )
        sub_348380((_DWORD *)v2, SHIDWORD(v2));
      abort();
    }
    nullsub_35();
    a1 = sub_348C6C(HIDWORD(v2) + 4);
  }
  sub_3483C0(a1, SHIDWORD(a1), 1);
  abort();
}
