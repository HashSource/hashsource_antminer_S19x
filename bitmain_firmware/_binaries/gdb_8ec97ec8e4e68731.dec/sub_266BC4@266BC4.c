void __fastcall sub_266BC4(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int v7; // r4
  _DWORD *v9; // r11
  __int64 v10; // r8
  __int64 v11; // r0

  v7 = a1;
  if ( sub_266870(a1, a2, a4 + 17) )
  {
    if ( *(_DWORD *)(a5 + 8) == 14 )
    {
      v7 = sub_AAF94(v7);
      if ( !sub_26BF4C(v7) )
        goto LABEL_4;
    }
    else if ( !sub_26BF4C(v7) )
    {
LABEL_4:
      v9 = (_DWORD *)sub_26BC70(v7);
      v10 = sub_26BFE0(v7);
      v11 = ((__int64 (__fastcall *)(int))loc_26C09C)(v7);
      sub_2669E8(v9, SHIDWORD(v11), v10, SHIDWORD(v10), v11, a2, a3, v7, a4, a5);
      return;
    }
    ((void (__fastcall *)(int))loc_26E00C)(v7);
    goto LABEL_4;
  }
}
