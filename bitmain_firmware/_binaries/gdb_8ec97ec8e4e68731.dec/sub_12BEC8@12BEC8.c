int __fastcall sub_12BEC8(int a1, int a2)
{
  int v4; // r2
  int result; // r0
  unsigned int v6; // r3
  unsigned int v7; // r3
  int v8; // r2
  int v9; // r2
  int v10; // r7
  int v11; // r1
  int v12; // r10
  int v13; // r9
  int (__fastcall *v14)(int, int, int); // r11
  int v15; // r2
  bool v16; // zf
  int v17; // r3
  int v18; // r7
  int v19; // r8
  int v20; // r9
  const char *v21; // r0
  int v22; // r5
  const char *v23; // r0
  const char *v24; // [sp+14h] [bp-8h]

  if ( dword_4872E4 )
  {
    v18 = *(_DWORD *)sub_242FC8(a1);
    v19 = *(_DWORD *)(a1 + 20);
    v20 = *(_DWORD *)(a1 + 16);
    v21 = (const char *)sub_25AC8C(*(_DWORD *)a1, *(_DWORD *)(a1 + 24));
    sub_2594B0(
      v18,
      "Processing actual line %u: file %u, address %s, is_stmt %u, discrim %u\n",
      v19,
      v20,
      v21,
      *(unsigned __int8 *)(a1 + 28),
      *(_DWORD *)(a1 + 32));
  }
  v4 = *(_DWORD *)(a1 + 8);
  result = *(_DWORD *)(v4 + 48);
  v6 = *(_DWORD *)(a1 + 16) - 1;
  if ( v6 < -1431655765 * ((*(_DWORD *)(v4 + 52) - result) >> 3) )
  {
    v7 = result + 24 * v6;
    if ( v7 )
    {
      if ( *(_BYTE *)(a1 + 12) )
        v8 = a2;
      else
        v8 = a2 | 1;
      if ( !v8 )
        return result;
      v9 = *(unsigned __int8 *)(a1 + 4);
      *(_BYTE *)(v7 + 16) = 1;
      if ( !v9 || !*(_BYTE *)(a1 + 28) )
        return result;
      v10 = *(_DWORD *)(a1 + 40);
      v11 = dword_4788E0;
      if ( v10 == dword_4788E0 )
      {
        if ( !a2 )
        {
LABEL_18:
          v15 = *(_DWORD *)(a1 + 20);
          result = *(unsigned __int8 *)(a1 + 52);
          v16 = v11 == v10;
          if ( v11 == v10 )
            v16 = *(_DWORD *)(a1 + 48) == v15;
          v17 = !v16;
          if ( ((v17 ^ 1) & result) == 0 )
          {
            result = sub_11DEC4(
                       *(_DWORD *)a1,
                       v10,
                       v15,
                       *(_DWORD *)(a1 + 24),
                       *(int (__fastcall **)(int, int, int))(a1 + 44));
            v10 = dword_4788E0;
            v15 = *(_DWORD *)(a1 + 20);
          }
          *(_DWORD *)(a1 + 40) = v10;
          *(_DWORD *)(a1 + 48) = v15;
          return result;
        }
        v12 = *(_DWORD *)a1;
        v13 = *(_DWORD *)(a1 + 24);
        v14 = *(int (__fastcall **)(int, int, int))(a1 + 44);
        if ( !v10 )
          return result;
      }
      else
      {
        v12 = *(_DWORD *)a1;
        v13 = *(_DWORD *)(a1 + 24);
        v14 = *(int (__fastcall **)(int, int, int))(a1 + 44);
        if ( !v10 )
        {
LABEL_16:
          if ( a2 )
            return result;
          v11 = *(_DWORD *)(a1 + 40);
          v10 = dword_4788E0;
          goto LABEL_18;
        }
      }
      if ( dword_4872E4 )
      {
        v22 = *(_DWORD *)sub_242FC8(result);
        v24 = (const char *)sub_3245A4(*(_DWORD *)(v10 + 4));
        v23 = (const char *)sub_25AC8C(v12, v13);
        sub_2594B0(v22, "Finishing current line, file %s, address %s\n", v24, v23);
      }
      result = sub_11DEC4(v12, v10, 0, v13, v14);
      goto LABEL_16;
    }
  }
  if ( dword_47AC88 > 0 )
    return (int)sub_F43B4(&off_46D334, ".debug_line section has line data without a file");
  return result;
}
