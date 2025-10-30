int __fastcall sub_31978(int a1, int *a2)
{
  int v3; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r0
  int v8; // r6
  int v9; // r0
  int result; // r0

  v3 = *a2;
  v5 = *(_DWORD *)(a2[2] + 148);
  v6 = sub_312A8(a1, v5);
  v7 = sub_31944(v3 + v6);
  v8 = a2[1];
  *a2 = v7;
  v9 = sub_312A8(a1, v5);
  result = sub_31944(v8 + v9);
  a2[1] = result;
  return result;
}
