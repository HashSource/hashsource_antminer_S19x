int __fastcall sub_11D870(int a1, _DWORD *a2)
{
  int v3; // r12
  int v4; // r4
  char *v5; // r0
  int v6; // r4
  int v7; // r2
  unsigned int v8; // r3
  int v9; // r3
  char v11[80]; // [sp+0h] [bp-50h] BYREF

  if ( a1 <= 0 || (v3 = a2[12], a1 > (unsigned int)(-1431655765 * ((a2[13] - v3) >> 3))) )
  {
    sub_93170(v11, 0x50u, "<bad macro file number %d>", a1);
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "bad file number in macro information (%d)", a1);
    v5 = v11;
  }
  else
  {
    v4 = 24 * (a1 - 1);
    v5 = *(char **)(v3 + v4);
    v6 = v3 + v4;
    if ( *v5 != 47 )
    {
      v7 = a2[9];
      v8 = *(_DWORD *)(v6 + 4) - 1;
      if ( v8 < (a2[10] - v7) >> 2 )
      {
        v9 = *(_DWORD *)(v7 + 4 * v8);
        if ( v9 )
          return sub_31E27C(v9, &word_398974, v5);
      }
    }
  }
  return sub_327254(v5);
}
