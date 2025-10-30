int __fastcall sub_DAA34(int a1, char a2)
{
  int v3; // r5
  int v4; // r0
  int v5; // r4
  void *v6; // r6
  int v7; // r0
  int result; // r0
  int v9; // [sp+34h] [bp-10h] BYREF
  int v10[2]; // [sp+3Ch] [bp-8h] BYREF

  v9 = a1;
  if ( (a2 & 2) != 0 )
    v3 = 2;
  else
    v3 = 1;
  sub_19DBE0(v10, &v9, off_46D5A4[0], 0);
  v4 = v10[0];
  v5 = a2 & 1;
  if ( v10[0] && (v4 = sub_19CC70(), v4 == 3) )
    v6 = &unk_47852C;
  else
    v6 = &unk_47840C;
  v7 = sub_B894C(v4);
  result = sub_DA350(v7, v10[0], 0, 0, v9, 1, v5, v3, 0, dword_4788B0, (int)v6);
  if ( v10[0] )
    return ((int (__fastcall *)(int *))loc_19D154)(v10);
  return result;
}
