int __fastcall sub_13EA4(_DWORD *a1, int a2)
{
  _DWORD *v4; // r6
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int result; // r0
  int v9; // r1
  int v10; // r2

  v4 = (_DWORD *)sub_63BA4(0, 36, 0, 0);
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  v4[1] = *a1;
  v4[2] = v5;
  v4[3] = v6;
  v4[4] = v7;
  result = a1[4];
  v9 = a1[5];
  v10 = a1[6];
  v4[5] = result;
  v4[6] = v9;
  v4[7] = v10;
  v4[8] = a2;
  *v4 = remoteaddr_list;
  remoteaddr_list = (int)v4;
  return result;
}
