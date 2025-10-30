int __fastcall sub_DAF14(int a1)
{
  int v1; // r0
  int v2; // r0
  int result; // r0
  int v4; // [sp+34h] [bp-10h] BYREF
  int v5[2]; // [sp+3Ch] [bp-8h] BYREF

  v4 = a1;
  v1 = sub_19DBE0(v5, &v4, off_46D5A4[0], 0);
  v2 = sub_B894C(v1);
  result = sub_DA350(v2, v5[0], 0, 0, v4, 1, 0, 28, 0, dword_4788B0, (int)&unk_4785BC);
  if ( v5[0] )
    return ((int (__fastcall *)(int *))loc_19D154)(v5);
  return result;
}
