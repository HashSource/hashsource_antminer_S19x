int __fastcall sub_BBFD8(int a1)
{
  int v2; // r6
  int result; // r0
  _QWORD *v4; // r5

  v2 = sub_183688(a1);
  result = sub_183680(v2, dword_478250);
  if ( !result )
  {
    v4 = sub_93094(1u, 0x10u);
    *v4 = sub_230574(a1, 7, 0, v4 + 1);
    sub_183678(v2, dword_478250, v4);
    return (int)v4;
  }
  return result;
}
