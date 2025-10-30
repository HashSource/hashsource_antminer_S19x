int __fastcall sub_2B9F1C(int a1, int a2, int a3, int a4)
{
  int result; // r0
  char v7; // r3
  int v8; // r1
  char v9; // r3
  const char *v10; // r0

  result = sub_2C83C0();
  if ( !result )
    return result;
  v7 = *(_BYTE *)(a4 + 12);
  *(_BYTE *)(a4 + 14) = 0;
  if ( (v7 & 7) == 2 )
  {
    if ( (*(_DWORD *)a4 & 1) != 0 )
    {
      *(_DWORD *)a4 &= ~1u;
      *(_BYTE *)(a4 + 14) = 1;
    }
LABEL_5:
    v8 = *(_DWORD *)(a1 + 160);
    if ( !*(_DWORD *)(v8 + 96) )
      return 1;
    goto LABEL_12;
  }
  if ( (v7 & 0xF) == 0xD )
  {
    *(_BYTE *)(a4 + 14) = 1;
    *(_BYTE *)(a4 + 12) = (v7 & 0xF0) + 2;
    goto LABEL_5;
  }
  if ( (v7 & 0xF) == 3 )
    v9 = 2;
  else
    v9 = 3;
  *(_BYTE *)(a4 + 14) = v9;
  v8 = *(_DWORD *)(a1 + 160);
  if ( !*(_DWORD *)(v8 + 96) )
    return 1;
LABEL_12:
  v10 = (const char *)sub_2CDDA8(a1, v8 + 72, a4, 0);
  if ( !v10 || strncmp(v10, "__acle_se_", 0xAu) )
    return 1;
  *(_BYTE *)(a4 + 14) |= 4u;
  return 1;
}
