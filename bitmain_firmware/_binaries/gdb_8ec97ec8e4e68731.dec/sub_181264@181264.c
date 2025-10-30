int __fastcall sub_181264(int a1)
{
  _BOOL4 v2; // r4
  int v4; // r0
  _BYTE v5[36]; // [sp+4h] [bp-24h] BYREF

  if ( !sub_22EBBC(a1) )
    sub_946E0("The program is not being run.");
  sub_17E868();
  v2 = a1 != 0;
  if ( !dword_487950 )
    v2 = 0;
  if ( v2 )
  {
    ((void (__fastcall *)(_BYTE *))loc_23FF20)(v5);
    v4 = sub_23E4A0(sub_17F404, 0);
    if ( !*(_DWORD *)(dword_487668 + 68) )
      sub_22EF7C(v4);
    return ((int (__fastcall *)(_BYTE *))loc_23FC8C)(v5);
  }
  else
  {
    sub_17E884();
    sub_17E8C4();
    sub_187D70(0);
    return sub_18BAD4(-1, 144);
  }
}
