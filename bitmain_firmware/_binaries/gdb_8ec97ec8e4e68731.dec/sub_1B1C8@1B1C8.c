int __fastcall sub_1B1C8(int a1, int a2, int a3, int a4)
{
  int v7; // r5
  int v8; // r4
  int v9; // r3
  int v11; // r1
  int v12; // r1
  _DWORD *v13; // r2
  char s[4]; // [sp+4h] [bp-10h] BYREF
  int v15; // [sp+8h] [bp-Ch] BYREF
  int v16; // [sp+Ch] [bp-8h]

  sub_93170(s, 4, "d%d", 2 * a3);
  strlen(s);
  v7 = sub_257E94(a1, s);
  if ( ((int (__fastcall *)(int))loc_165BB8)(a1) )
    v8 = 0;
  else
    v8 = 8;
  v9 = sub_1DDE6C(a2, v7, &v15);
  if ( v9 == 1 )
  {
    v11 = v16;
    *(_DWORD *)(a4 + v8) = v15;
    *(_DWORD *)(a4 + v8 + 4) = v11;
    v9 = sub_1DDE6C(a2, v7 + 1, &v15);
    if ( v9 == 1 )
    {
      v12 = v16;
      v13 = (_DWORD *)(a4 + 8 - v8);
      *v13 = v15;
      v13[1] = v12;
    }
  }
  return v9;
}
