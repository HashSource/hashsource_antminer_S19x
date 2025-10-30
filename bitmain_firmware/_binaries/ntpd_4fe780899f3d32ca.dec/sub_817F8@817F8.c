int __fastcall sub_817F8(_DWORD *a1, int a2, unsigned int a3)
{
  bool v3; // cc
  int v4; // r2
  int v5; // r6
  int v6; // r12
  int v7; // r4
  void (__fastcall *v8)(_DWORD *, int); // r6
  int v9; // r3
  unsigned int v11; // r12
  unsigned int v12; // r3

  if ( (unsigned int)a1 <= 0xF )
    return 0;
  v3 = a1[25] > a3;
  v4 = a1[17] + (a3 << 6);
  if ( !v3 )
  {
    fputs(off_B8498[0], stderr);
    sub_7CE5C(1);
  }
  v5 = *(_DWORD *)(a2 + 24);
  v6 = *(_DWORD *)(v4 + 16) & 0xFFFFF00;
  *(_DWORD *)(v4 + 16) = v6;
  v7 = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(v4 + 24) = v5;
  *(_DWORD *)(v4 + 16) = v7 & 0xF00000FF | v6;
  if ( !(v7 & 4 | v6 & 4)
    || (v11 = *(unsigned __int16 *)(v4 + 12),
        v12 = (unsigned __int16)(*(_WORD *)(v4 + 14) + 1),
        *(_WORD *)(v4 + 14) = v12,
        v11 >= v12) )
  {
    v8 = *(void (__fastcall **)(_DWORD *, int))(v4 + 40);
    v9 = *(_DWORD *)(a2 + 16);
    *(_WORD *)(a2 + 14) = 0;
    *(_DWORD *)(a2 + 16) = v9 & 0xFFFFF00;
    if ( v8 )
    {
      v8(a1, v4);
      return 0;
    }
    return 0;
  }
  if ( (a1[3] & 4) != 0 )
    sub_7DB8C((int)a1, v4);
  return -1;
}
