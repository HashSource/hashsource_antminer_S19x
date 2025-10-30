int __fastcall sub_25DD04(int a1)
{
  int v1; // r4
  _DWORD *v2; // r0
  int v3; // r5
  int v4; // r1

  v1 = sub_26EA24(a1);
  v2 = (_DWORD *)sub_26BC70(v1);
  v3 = sub_171258(v2);
  if ( !sub_1736DC((_DWORD *)v3) && !sub_26E9E0(v1) && (**(_DWORD **)(v3 + 24) & 0x100FF) != 0x10002 )
    sub_946E0("Argument to positive operation not a number.");
  v4 = sub_26E978(v1);
  return sub_26DCD8(v3, v4);
}
