int __fastcall sub_82D34(_DWORD *a1, int a2, unsigned int a3)
{
  bool v3; // cf
  int v4; // r2
  int v5; // r6
  int v6; // r3
  int v7; // r12
  unsigned int v8; // r3
  void (__fastcall *v9)(_DWORD *, int); // r6
  int v10; // r3
  unsigned int v12; // r12
  unsigned int v13; // r3

  if ( (unsigned int)a1 <= 0xF )
    return 0;
  v3 = a3 >= a1[25];
  v4 = a1[17] + (a3 << 6);
  if ( v3 )
  {
    fputs(off_B949C, stderr);
    sub_7E2B8(1);
  }
  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(_DWORD *)(v4 + 16) & 0xFFFFF00;
  *(_DWORD *)(v4 + 16) = v6;
  v7 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v4 + 24) = v5;
  v8 = v7 & 0xF00000FF | v6;
  *(_DWORD *)(v4 + 16) = v8;
  if ( (v8 & 4) == 0
    || (v12 = *(unsigned __int16 *)(v4 + 12),
        v13 = (unsigned __int16)(*(_WORD *)(v4 + 14) + 1),
        *(_WORD *)(v4 + 14) = v13,
        v12 >= v13) )
  {
    v9 = *(void (__fastcall **)(_DWORD *, int))(v4 + 40);
    v10 = *(_DWORD *)(a2 + 16);
    *(_WORD *)(a2 + 14) = 0;
    *(_DWORD *)(a2 + 16) = v10 & 0xFFFFF00;
    if ( v9 )
    {
      v9(a1, v4);
      return 0;
    }
    return 0;
  }
  if ( (a1[3] & 4) != 0 )
    sub_7F010((int)a1, v4);
  return -1;
}
