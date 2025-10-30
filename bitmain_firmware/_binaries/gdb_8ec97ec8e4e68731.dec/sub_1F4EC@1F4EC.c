int __fastcall sub_1F4EC(unsigned int a1, int a2)
{
  unsigned int v2; // r7
  _BOOL4 v5; // r6
  int v6; // r0
  int v7; // r4
  int v8; // r3
  bool v9; // zf
  int v10; // r4
  int v11; // r1
  char v12; // r2
  int result; // r0
  int v14; // r3
  char v15; // r2
  char v16; // r2
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0

  v2 = a1 >> 28;
  v5 = a1 >> 28 == 15;
  if ( a1 >> 28 == 15 )
  {
    if ( dword_487978 )
    {
      v17 = (_DWORD *)sub_242FC8();
      sub_2594B0(*v17, "displaced: copying %s immediate insn %.8lx\n", "blx", a1);
    }
    v8 = *(_DWORD *)(a2 + 204);
    LOBYTE(v2) = 15;
    v10 = (4 * a1) & 0x3FFFFFC | 1 | (a1 >> 23) & 2;
    if ( (v10 & 0x2000000) == 0 )
    {
      v16 = *(_BYTE *)(a2 + 148);
      *(_DWORD *)(a2 + 168) = -509607936;
      *(_BYTE *)(a2 + 148) = v16 & 0xC0 | 0x3D | (2 * v5);
      goto LABEL_21;
    }
    v11 = 1;
    LOBYTE(v6) = 1;
  }
  else
  {
    if ( (a1 & 0x1000000) != 0 )
    {
      if ( dword_487978 )
      {
        v18 = (_DWORD *)sub_242FC8();
        sub_2594B0(*v18, "displaced: copying %s immediate insn %.8lx\n", "bl", a1);
      }
      v6 = 1;
    }
    else
    {
      if ( dword_487978 )
      {
        v19 = (_DWORD *)sub_242FC8();
        sub_2594B0(*v19, "displaced: copying %s immediate insn %.8lx\n", "b", a1);
      }
      v6 = 0;
    }
    v7 = 4 * a1;
    v8 = *(_DWORD *)(a2 + 204);
    v9 = (v7 & 0x2000000) == 0;
    v10 = v7 & 0x3FFFFFC;
    if ( v9 )
    {
      v12 = *(_BYTE *)(a2 + 148);
      *(_DWORD *)(a2 + 144) = v8;
      *(_DWORD *)(a2 + 168) = -509607936;
      *(_BYTE *)(a2 + 148) = v12 & 0xC0 | (4 * (v2 & 0xF)) | v6 & 1 | (2 * v5);
      goto LABEL_9;
    }
    v11 = v5 & v6;
  }
  v10 |= 0xFC000000;
  v15 = *(_BYTE *)(a2 + 148) & 0xC3 | (4 * (v2 & 0xF));
  *(_DWORD *)(a2 + 168) = -509607936;
  *(_BYTE *)(a2 + 148) = v15 & 0xFC | v6 & 1 | (2 * v5);
  if ( v11 )
LABEL_21:
    v8 &= 0xFFFFFFFC;
  *(_DWORD *)(a2 + 144) = v8;
LABEL_9:
  result = 0;
  if ( *(_DWORD *)(a2 + 164) )
    v14 = v8 + 4;
  else
    v14 = v8 + 8;
  *(_DWORD *)(a2 + 144) = v14 + v10;
  *(_DWORD *)(a2 + 212) = 154604;
  return result;
}
