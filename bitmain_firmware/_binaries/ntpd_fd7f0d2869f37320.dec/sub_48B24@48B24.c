int __fastcall sub_48B24(__int16 a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int *v6; // r4

  v4 = sub_64B04(0, 4, 0, 1);
  v5 = open64("/dev/hopf6039", 2);
  v6 = *(int **)(a2 + 84);
  v6[7] = -1;
  v6[5] = a2;
  v6[3] = 0;
  v6[6] = 0;
  fd = v5;
  *v6 = v4;
  sub_6055C(v6 + 58);
  v6[191] = *(_DWORD *)"hopf";
  *(_BYTE *)(a2 + 95) = -10;
  v6[11] = (int)"hopf Elektronik PCI radio board";
  *(_BYTE *)(v4 + 2) = 0;
  *(_WORD *)v4 = a1;
  return 1;
}
