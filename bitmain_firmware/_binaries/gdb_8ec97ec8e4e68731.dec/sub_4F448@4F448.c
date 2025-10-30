int __fastcall sub_4F448(int a1)
{
  int v1; // r0
  _DWORD *v2; // r0
  _BYTE v4[36]; // [sp+0h] [bp-24h] BYREF

  if ( !a1 )
    sub_946E0("REGEXP string is empty");
  v1 = sub_1636B8(v4, a1, 2, "Error in regular expression");
  v2 = (_DWORD *)sub_242F8C(v1);
  sub_53CD0(*v2, dword_474744, v4, "");
  return sub_16373C(v4);
}
