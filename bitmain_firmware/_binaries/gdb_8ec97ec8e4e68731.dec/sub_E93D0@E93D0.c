int __fastcall sub_E93D0(int a1, int a2, int a3, int a4, int a5)
{
  int v9; // r1
  int v10; // r0
  bool v11; // r5
  int v12; // r4
  int v13; // r2
  bool v14; // zf
  int v15; // r2
  int v16; // r3
  int v17; // r11
  unsigned int v18; // r3
  int v20; // r3
  int v21; // r9
  _DWORD v22[3]; // [sp+18h] [bp-Ch] BYREF

  sub_25A418(a2, "(");
  v9 = *(_DWORD *)(a1 + 24);
  if ( *(__int16 *)(v9 + 4) <= 0 )
  {
    v18 = *(unsigned __int8 *)(v9 + 1);
  }
  else
  {
    v10 = 0;
    v11 = a3 != 0;
    v12 = 0;
    do
    {
      v16 = 3 * v12++;
      v17 = 8 * v16;
      if ( (*(_BYTE *)(*(_DWORD *)(v9 + 24) + 8 * v16 + 8) & v11) == 0 )
      {
        if ( v10 )
        {
          sub_25A418(a2, ", ");
          sub_259B58("    ");
          v9 = *(_DWORD *)(a1 + 24);
        }
        v13 = a4 == 4 && v11;
        v14 = v13 == 0;
        v15 = *(_DWORD *)(*(_DWORD *)(v9 + 24) + v17 + 12);
        if ( !v14 )
          v15 = ((int (__fastcall *)(_DWORD, _DWORD, int))loc_170478)(0, 0, v15);
        v22[0] = 0;
        v22[1] = 0;
        sub_E91A8(v15, "", a2, -1, 0, a5, (int)v22);
        v9 = *(_DWORD *)(a1 + 24);
        v10 = 1;
      }
    }
    while ( *(__int16 *)(v9 + 4) > v12 );
    v18 = *(unsigned __int8 *)(v9 + 1);
    if ( v10 )
    {
      if ( (v18 & 0x80) != 0 )
      {
        sub_25A418(a2, ", ");
        sub_259B58("    ");
        sub_25A418(a2, "...");
      }
      return sub_25A418(a2, ")");
    }
  }
  v20 = (v18 >> 5) & 1;
  if ( a4 == 4 )
    v21 = v20 | 1;
  else
    v21 = v20;
  if ( v21 )
    sub_25A418(a2, "void");
  return sub_25A418(a2, ")");
}
