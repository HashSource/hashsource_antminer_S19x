bool __fastcall sub_12D2E4(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+4h] [bp-20h] BYREF
  _DWORD v6[2]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v7[5]; // [sp+10h] [bp-14h] BYREF

  v5 = a1;
  v6[0] = a2;
  v7[2] = a3;
  v7[0] = a4;
  v7[1] = 4;
  v6[1] = v7;
  v7[3] = 0;
  return sub_AD868((int)&unk_20FEE4, (int)v6, &v5) != 0;
}
