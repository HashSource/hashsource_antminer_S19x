bool __fastcall sub_15A1A4(_DWORD *a1, char *a2, unsigned int a3, char *a4, int a5, int a6)
{
  bool v6; // zf
  unsigned int v8; // r2
  signed int v11; // r1

  v6 = a2 == 0;
  if ( a2 )
    v6 = a1 == 0;
  v8 = v6;
  if ( v6 )
  {
    sub_D0048(38, 178, 67, (int)"crypto/engine/eng_ctrl.c", 199);
    return 0;
  }
  else if ( a1[14] && (v11 = sub_159F00(a1, 13, v8, a2, v8), v11 > 0) )
  {
    return (int)sub_159F00(a1, v11, a3, a4, a5) > 0;
  }
  else if ( a6 )
  {
    sub_D00F0();
    return 1;
  }
  else
  {
    sub_D0048(38, 178, 137, (int)"crypto/engine/eng_ctrl.c", 217);
    return 0;
  }
}
