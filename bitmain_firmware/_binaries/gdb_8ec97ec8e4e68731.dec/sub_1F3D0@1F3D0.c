int __fastcall sub_1F3D0(unsigned int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r9
  unsigned int v5; // r7
  int v7; // r5
  bool v9; // zf
  int v10; // r6
  unsigned int v11; // r6
  _DWORD *v12; // r0
  char v13; // r3

  v5 = a1 >> 12;
  v7 = *(_DWORD *)(a2 + 204);
  if ( a1 >> 12 == 13 )
  {
    v5 = (a1 >> 8) & 0xF;
    v11 = (-512 * (((2 * a1) >> 8) & 1)) | (2 * a1) & 0x1FF;
    v4 = v11;
  }
  else
  {
    v9 = v5 == 14;
    if ( v5 == 14 )
    {
      a4 = 2 * a1;
    }
    else
    {
      v4 = 0;
      LOBYTE(v5) = 0;
    }
    if ( v9 )
    {
      v10 = (a4 >> 11) & 1;
      a4 &= 0xFFFu;
      v11 = v10 << 12;
    }
    else
    {
      v11 = v4;
    }
    if ( v9 )
    {
      v11 = -v11 | a4;
      v4 = v11;
    }
  }
  if ( dword_487978 )
  {
    v12 = (_DWORD *)sub_242FC8();
    sub_2594B0(*v12, "displaced: copying b immediate insn %.4x with offset %d\n", a1, v11);
  }
  v13 = *(_BYTE *)(a2 + 148) & 0xC3 | (4 * (v5 & 0xF));
  *(_DWORD *)(a2 + 144) = v7 + 4 + v4;
  *(_DWORD *)(a2 + 212) = sub_25BEC;
  *(_DWORD *)(a2 + 168) = 17920;
  *(_BYTE *)(a2 + 148) = v13 & 0xFC;
  return 0;
}
