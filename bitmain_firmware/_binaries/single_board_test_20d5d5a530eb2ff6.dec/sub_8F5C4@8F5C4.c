int __fastcall sub_8F5C4(_DWORD *a1, unsigned int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  _DWORD *v7; // r5
  int *v11; // r11
  int (__fastcall *v12)(_DWORD *, _DWORD *, int, int, int); // lr

  v6 = 24 * a2;
  v7 = (_DWORD *)(a4 + 24 * a2);
  if ( !v7[2] || v7[3] )
    return 1;
  v7[3] = 1;
  if ( a2 <= 0x19 )
  {
    v11 = (int *)((char *)&unk_2162B0 + 32 * a2);
    if ( sub_8F1B0(a1, v11[1], a3) )
    {
      v12 = (int (__fastcall *)(_DWORD *, _DWORD *, int, int, int))v11[4];
      if ( a1[7] )
        v12 = (int (__fastcall *)(_DWORD *, _DWORD *, int, int, int))v11[3];
      if ( v12 )
        return v12(a1, v7, a3, a5, a6);
      return sub_92364(a1, a3, v7[4], *(_DWORD *)(a4 + v6), v7[1], a5, a6);
    }
    return 1;
  }
  return sub_92364(a1, a3, v7[4], *(_DWORD *)(a4 + v6), v7[1], a5, a6);
}
