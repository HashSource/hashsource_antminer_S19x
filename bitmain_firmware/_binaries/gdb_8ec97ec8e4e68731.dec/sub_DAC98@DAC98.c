int __fastcall sub_DAC98(_BYTE *a1)
{
  int v1; // r0
  int v2; // r0
  int result; // r0
  _BYTE *v4; // [sp+34h] [bp-10h] BYREF
  int v5[2]; // [sp+3Ch] [bp-8h] BYREF

  v4 = a1;
  v1 = sub_19DBE0(v5, &v4, off_46D5A4[0], 0);
  if ( v4 )
  {
    if ( *v4 != 44 || !v4[1] )
      sub_946E0("Format string required");
    ++v4;
  }
  v2 = sub_B894C(v1);
  result = sub_DA350(v2, v5[0], 0, 0, (int)v4, 1, 0, 30, 0, dword_4788B0, (int)&unk_4787B4);
  if ( v5[0] )
    return ((int (__fastcall *)(int *))loc_19D154)(v5);
  return result;
}
