int __fastcall sub_282510(int a1, int a2)
{
  int *v3; // r0
  int v4; // r2
  int *v6; // r5
  int v7; // r5
  int v8; // [sp+4h] [bp-4h] BYREF

  v3 = sub_2803C8(4, a2);
  v4 = dword_4900D8;
  dword_48ABAC = (int)v3;
  v3[5] = dword_4900D8;
  dword_4900D4 = v4;
  if ( (a2 & 0xFFFFFF00) != 0 || (v6 = v3, ((*_ctype_b_loc())[a2] & 0x100) == 0) )
  {
    if ( (dword_48AAA0 & 0x80000) != 0 )
    {
      dword_48AAA0 |= 0x100000u;
      return 0;
    }
    v7 = sub_282298(a2, &v8);
  }
  else
  {
    v6[8] = 36;
    v7 = sub_28092C(v6);
  }
  if ( v7 < 0 )
  {
    v7 = -1;
    sub_2945C8();
  }
  sub_297758(dword_48ABAC);
  dword_48ABAC = 0;
  return v7;
}
