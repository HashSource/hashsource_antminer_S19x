int __fastcall sub_15B658(_DWORD *a1)
{
  int (*v1)(void); // r5
  int v3; // r0
  _DWORD *v5; // [sp+Ch] [bp-8h]

  v1 = (int (*)(void))a1[7];
  if ( v1 && (v3 = v1(), v3 > 0) )
    return sub_15B380(&dword_6E1CDC, (int)&loc_15B63C + 1, a1, v5, v3, 0);
  else
    return 1;
}
