int __fastcall sub_63138(int a1, int a2)
{
  _DWORD v4[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v5[2]; // [sp+8h] [bp-20h] BYREF
  _DWORD v6[3]; // [sp+10h] [bp-18h] BYREF
  _DWORD v7[2]; // [sp+1Ch] [bp-Ch] BYREF

  if ( !a2 )
    sub_6ECC0("caljulian.c", 31, 2, "((void *)0) != jt");
  sub_658E8((int)v5, a1, 0);
  v6[0] = v5[0];
  v6[1] = v5[1];
  sub_6598C(v4, v6);
  v7[0] = v4[0];
  v7[1] = v4[1];
  return sub_65EE8(a2, v7, 693596);
}
