int __fastcall sub_180438(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  int v6; // r3
  _DWORD v7[3]; // [sp+0h] [bp-Ch] BYREF

  result = sub_B6ECC(a1, 150, 0, (int)v7);
  if ( result > 0 )
  {
    v6 = v7[1];
    *a2 = v7[0];
    *a3 = v6;
  }
  return result;
}
