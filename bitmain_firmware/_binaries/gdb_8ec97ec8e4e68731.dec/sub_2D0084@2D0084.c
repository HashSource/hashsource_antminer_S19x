void *__fastcall sub_2D0084(int a1, int a2)
{
  int v4; // r1
  int v5; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r3
  void *result; // r0

  if ( !*(_DWORD *)(a2 + 140) )
  {
    result = sub_2AD09C(a1, 0x90u);
    if ( !result )
      return result;
    *(_DWORD *)(a2 + 140) = result;
  }
  v4 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  *(_BYTE *)(a2 + 25) = *(_BYTE *)(a2 + 25) & 0xFB | (4 * ((*(_BYTE *)(v4 + 464) & 0x10) != 0));
  if ( (*(_BYTE *)(a1 + 40) & 0x18) != 8 || (*(_DWORD *)(a2 + 20) & 0x100000) != 0 )
  {
    v5 = (*(int (__fastcall **)(int, int))(v4 + 84))(a1, a2);
    if ( v5 )
    {
      v6 = *(_DWORD *)(a2 + 20);
      v7 = *(_DWORD *)(v5 + 12);
      if ( !v6 || (v6 & 0x100000) != 0 || (unsigned int)(v7 - 14) <= 1 )
      {
        v8 = *(_DWORD *)(a2 + 140);
        *(_DWORD *)(v8 + 8) = *(_DWORD *)(v5 + 16);
        *(_DWORD *)(v8 + 4) = v7;
      }
    }
  }
  return (void *)sub_2AD724(a1, (int *)a2);
}
