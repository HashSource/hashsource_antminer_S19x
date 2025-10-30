void __fastcall sub_C959C(int a1)
{
  _DWORD *v1; // r0

  if ( *(_DWORD *)(a1 + 12) == 3 )
  {
    v1 = (_DWORD *)sub_23E3C4(*(_DWORD *)(a1 + 112));
    sub_1DDB40(v1[2], v1[3], v1[4]);
    JUMPOUT(0x169318);
  }
  JUMPOUT(0x169194);
}
