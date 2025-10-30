_DWORD *__fastcall sub_1DDB40(int a1, int a2, int a3)
{
  int v3; // r3
  int v5; // [sp+4h] [bp-10h] BYREF
  int v6; // [sp+8h] [bp-Ch]
  int v7; // [sp+Ch] [bp-8h]

  v5 = a1;
  v6 = a2;
  v7 = a3;
  if ( dword_4886D0 && sub_98F78(dword_4886D4, &v5) )
  {
    v3 = dword_4886D0;
  }
  else
  {
    dword_4886D4[0] = v5;
    dword_4886D4[1] = v6;
    dword_4886D4[2] = v7;
    v3 = off_489B68(&dword_4899A0, v5, v6, v7);
    dword_4886D0 = v3;
  }
  return sub_1DDB0C(v5, v6, v7, v3);
}
