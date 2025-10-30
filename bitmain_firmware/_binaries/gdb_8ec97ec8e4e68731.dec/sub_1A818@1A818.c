int __fastcall sub_1A818(int a1, _DWORD **a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  int v6; // r5
  int v7; // r0
  int result; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r12
  _DWORD v14[6]; // [sp+8h] [bp-18h] BYREF

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = sub_1A6B8(a1);
    *a2 = v3;
  }
  v6 = *v3;
  v7 = sub_15DDFC(a1);
  sub_15CD0C(v14, v6, v7);
  result = v14[0];
  v9 = v14[1];
  v10 = v14[2];
  v11 = v14[3];
  v12 = v14[4];
  *a3 = v14[0];
  a3[1] = v9;
  a3[2] = v10;
  a3[3] = v11;
  a3[4] = v12;
  return result;
}
