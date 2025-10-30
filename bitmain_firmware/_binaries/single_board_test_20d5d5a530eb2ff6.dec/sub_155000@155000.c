int __fastcall sub_155000(int a1, int a2)
{
  int v4; // r0
  int *v5; // r4
  _DWORD *v6; // r0
  int v8[3]; // [sp+0h] [bp-110h] BYREF
  _BYTE v9[56]; // [sp+114h] [bp+4h] BYREF
  _BYTE v10[55]; // [sp+14Ch] [bp+3Ch] BYREF
  char v11; // [sp+183h] [bp+73h]
  char v12; // [sp+184h] [bp+74h]

  v4 = sub_D14F4();
  if ( v4 )
  {
    v5 = (int *)v4;
    v6 = (_DWORD *)sub_15E674();
    if ( sub_D1520(v5, v6, 0) && sub_D16D8((int)v5, a2, 57) && sub_D1748(v5, (int)v10, 57) )
    {
      sub_D1504(v5);
      v12 = 0;
      v10[0] &= 0xFCu;
      v11 |= 0x80u;
      sub_157850(v9, v10);
      sub_157ACC(v9, v9);
      sub_157ACC(v9, v9);
      sub_151860(v8, (int)curve448_precomputed_base, (int)v9);
      sub_153C4C(a1, v8);
      sub_157848(v9);
      sub_153C44(v8);
      sub_E07F8(v10, 0x39u);
      return -1;
    }
    sub_D1504(v5);
  }
  return 0;
}
