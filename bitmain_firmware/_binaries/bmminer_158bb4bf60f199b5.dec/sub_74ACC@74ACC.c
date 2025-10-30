int __fastcall sub_74ACC(int a1, char a2)
{
  int v3; // r4
  int v5; // r5
  int v6; // r6

  LOWORD(v3) = 0;
  v5 = 0;
  v6 = sub_772E8(256);
  do
  {
    v3 = (unsigned __int16)(v3 + 1);
    sub_74A28(a1, v5);
    v5 = (unsigned __int8)(a2 + v5);
  }
  while ( v3 < v6 );
  return 0;
}
