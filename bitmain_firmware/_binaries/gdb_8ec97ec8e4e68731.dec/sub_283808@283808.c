int __fastcall sub_283808(_BYTE *a1, int a2)
{
  int v2; // r2
  int v3; // r0
  int v4; // r5
  int v5; // r0
  int *v6; // r4
  int v8; // r0
  __int64 v9; // r0

  if ( a1 && *a1 && (v2 = a2, a2 = dword_48ABDC, dword_48ABDC >= 0) )
  {
    v3 = sub_283664(a1, dword_48ABDC + v2, v2);
    if ( v3 == -1 )
    {
      v8 = sub_29728C();
      v9 = sub_28D50C(v8);
      dword_4900D8 = 0;
      sub_2945C8(v9, HIDWORD(v9));
      return 0;
    }
    else
    {
      dword_48ABDC = v3;
      v4 = sub_2978A8(v3);
      v5 = sub_2978B8(dword_48ABDC);
      v6 = (int *)sub_297918(v5);
      if ( dword_46DED4 )
        sub_2978B8(v4);
      sub_2837A8(*v6);
      dword_4900D8 = 0;
      dword_4900D4 = dword_4900DC;
      sub_28D50C(0);
      return 1;
    }
  }
  else
  {
    sub_2945C8(a1, a2);
    return 0;
  }
}
