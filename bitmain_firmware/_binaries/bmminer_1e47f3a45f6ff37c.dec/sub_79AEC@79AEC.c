int __fastcall sub_79AEC(int a1, int a2, int a3, int a4)
{
  char v8; // r3
  char v9; // r2
  int v11[2]; // [sp+Ch] [bp-8h] BYREF

  if ( a2 == 1 )
    sub_7A850(0, a1, 0, 24, v11);
  else
    sub_7A850(1, a1, a3, 24, v11);
  if ( a4 )
    v8 = BYTE2(v11[0]) | 0xF;
  else
    v8 = BYTE2(v11[0]) & 0xF0;
  BYTE2(v11[0]) = v8;
  if ( a4 )
    v9 = HIBYTE(v11[0]) | 0xF;
  else
    v9 = HIBYTE(v11[0]) & 0xF0;
  HIBYTE(v11[0]) = v9;
  return sub_7864C(a1, a2, a3, 24, v11[0]);
}
