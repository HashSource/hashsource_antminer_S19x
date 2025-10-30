int __fastcall sub_21E690(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  int v6; // r3
  bool v7; // zf
  int v8; // [sp+0h] [bp-2Ch] BYREF
  int v9; // [sp+4h] [bp-28h]
  int v10; // [sp+14h] [bp-18h]
  int v11; // [sp+18h] [bp-14h]

  sub_21DEAC((int)&v8, a1);
  result = v9;
  v6 = v11;
  v7 = v9 == 0;
  *a2 = v10;
  if ( !v7 )
    result = 1;
  *a3 = v6;
  return result;
}
