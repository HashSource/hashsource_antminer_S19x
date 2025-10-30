int __fastcall sub_C4914(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int v4; // r1

  result = sub_183680(a1, dword_4782FC);
  if ( !result )
  {
    v3 = sub_9836C(0x14u);
    v4 = dword_4782FC;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    sub_183678(a1, v4, v3);
    return (int)v3;
  }
  return result;
}
