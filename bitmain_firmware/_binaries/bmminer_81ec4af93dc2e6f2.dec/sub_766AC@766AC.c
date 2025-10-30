int __fastcall sub_766AC(int a1, int a2, int a3, int a4)
{
  char v8; // r2
  char v9; // r3
  int v11[2]; // [sp+Ch] [bp-8h] BYREF

  if ( a2 == 1 )
    sub_7740C(0, a1, 0, 24, v11);
  else
    sub_7740C(1, a1, a3, 24, v11);
  if ( a4 )
    v8 = HIBYTE(v11[0]) | 0xF;
  else
    v8 = HIBYTE(v11[0]) & 0xF0;
  if ( a4 )
    v9 = BYTE2(v11[0]) | 0xF;
  else
    v9 = BYTE2(v11[0]) & 0xF0;
  HIBYTE(v11[0]) = v8;
  BYTE2(v11[0]) = v9;
  return sub_751F0(a1, a2, a3, 24, v11[0]);
}
