int __fastcall sub_DAFD0(int a1)
{
  int v1; // r0
  void *v2; // r4
  int v3; // r0
  int result; // r0
  int v5; // [sp+34h] [bp-10h] BYREF
  int v6[2]; // [sp+3Ch] [bp-8h] BYREF

  v5 = a1;
  sub_19DBE0(v6, &v5, off_46D5A4[0], 0);
  v1 = v6[0];
  if ( v6[0] && (v1 = sub_19CC70(), v1 == 3) )
    v2 = &unk_478604;
  else
    v2 = &unk_4785BC;
  v3 = sub_B894C(v1);
  result = sub_DA350(v3, v6[0], 0, 0, v5, 1, 0, 27, 0, dword_4788B0, (int)v2);
  if ( v6[0] )
    return ((int (__fastcall *)(int *))loc_19D154)(v6);
  return result;
}
