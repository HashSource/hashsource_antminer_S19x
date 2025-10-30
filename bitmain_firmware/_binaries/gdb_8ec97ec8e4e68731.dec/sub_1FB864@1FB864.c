int __fastcall sub_1FB864(int a1, int **a2)
{
  int v4; // r0
  int v5; // r6
  int *v6; // r4
  int v7; // r6
  _DWORD *v8; // r0
  int result; // r0
  int *v10; // r3

  sub_1780B4();
  v5 = v4;
  v6 = (int *)sub_163938(a1, 0x44u);
  *v6 = sub_17741C(a1, 8, 1);
  v6[1] = sub_1773F0(a1, 32, 1);
  v6[2] = sub_1773C4(a1, 8, 0);
  v6[3] = sub_1773C4(a1, 8, 1);
  v6[4] = sub_1773C4(a1, 16, 0);
  v6[5] = sub_1773C4(a1, 16, 1);
  v6[6] = sub_1773C4(a1, 32, 0);
  v6[7] = sub_1773C4(a1, 32, 1);
  v6[8] = sub_1773C4(a1, 64, 0);
  v6[9] = sub_1773C4(a1, 64, 1);
  v7 = 8 * *(_DWORD *)(*(_DWORD *)(v5 + 152) + 20);
  v6[10] = sub_1773C4(a1, v7, 0);
  v6[11] = sub_1773C4(a1, v7, 1);
  v6[12] = sub_177448(a1, 32, (int)"f32", (int)&off_46D508);
  v6[13] = sub_177448(a1, 64, (int)"f64", (int)&off_46D500);
  v6[14] = sub_1773C4(a1, 0, 1);
  v8 = (_DWORD *)((int (__fastcall *)(int, _DWORD, int))loc_170478)(1, 0, v6[3]);
  result = sub_1FB820((int)"&str", v8, (_DWORD *)v6[11]);
  v10 = (int *)*v6;
  v6[15] = result;
  *a2 = v6;
  a2[4] = v10;
  a2[2] = (int *)v6[3];
  return result;
}
