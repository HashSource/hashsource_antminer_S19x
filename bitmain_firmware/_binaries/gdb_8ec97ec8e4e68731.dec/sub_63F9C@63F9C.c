int __fastcall sub_63F9C(int a1, _DWORD *a2, int a3)
{
  int v4; // r0
  int v5; // r4
  int v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  int result; // r0
  _DWORD v10[3]; // [sp+4h] [bp-Ch] BYREF

  if ( a3 != 1 )
    sub_946E0("-thread-select: USAGE: threadnum.");
  v4 = sub_14CC6C(*a2);
  v5 = sub_26EB1C(v4);
  v6 = sub_23E3C4(v5);
  if ( !v6 )
    sub_946E0("Thread ID %d not known.", v5);
  v10[0] = dword_4878EC;
  v10[1] = dword_4878F0;
  v10[2] = dword_4878F4;
  v7 = sub_240498(*a2, v6);
  v8 = (_DWORD *)sub_242FDC(v7);
  sub_2404E8(*v8, 12);
  result = sub_98F78(&dword_4878EC, v10);
  if ( !result )
    return sub_1BABB4(12);
  return result;
}
