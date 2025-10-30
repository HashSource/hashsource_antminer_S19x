int __fastcall sub_26CDF8(char *a1, int a2, int a3, int a4)
{
  _DWORD *v8; // r4
  _DWORD *v9; // r5
  char *v10; // r0
  int result; // r0

  v8 = sub_26CBF4(a1);
  v9 = sub_93028(0xCu);
  *v9 = sub_327254(a1);
  v9[1] = a3;
  v9[2] = a4;
  sub_26CC14(v8);
  v8[2] = 3;
  v8[5] = 1;
  v8[4] = v9;
  v10 = (char *)sub_327254(a1);
  result = sub_53274(v10, -1, (int)nullsub_98, a2, &dword_48AA10);
  *(_DWORD *)(result + 72) = 2533132;
  return result;
}
