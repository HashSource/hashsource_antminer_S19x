int __fastcall sub_3EC2C(int a1, int a2)
{
  int v5; // r4
  int v6; // r6
  _DWORD *v7; // r5
  int v8; // r4
  unsigned int v9; // r3
  unsigned int v10; // r3
  int v11; // [sp+4h] [bp-88h] BYREF
  _BYTE s[132]; // [sp+8h] [bp-84h] BYREF

  memset(s, 0, 0x80u);
  v11 = 128;
  if ( !a1 )
    return 0;
  if ( (*(int (__fastcall **)(int))(a2 + 24))(a2) == 5 )
  {
    *(_WORD *)a1 = (*(int (__fastcall **)(int))(a2 + 244))(a2);
    v7 = (_DWORD *)(a1 + 8);
    *(_WORD *)(a1 + 2) = (*(int (__fastcall **)(int))(a2 + 252))(a2);
    v8 = 0;
    *(_BYTE *)(a1 + 4) = (*(int (__fastcall **)(int))(a2 + 260))(a2);
    *(_BYTE *)(a1 + 1032) = (*(int (__fastcall **)(int))(a2 + 276))(a2) == 1;
    (*(void (__fastcall **)(int, _BYTE *, int *))(a2 + 268))(a2, s, &v11);
    do
    {
      v9 = (unsigned __int8)s[v8 >> 1];
      if ( (v8 & 1) != 0 )
        v10 = v9 >> 4;
      else
        v10 = v9 & 0xF;
      if ( *(_WORD *)(a1 + 2) )
        *v7 = *(unsigned __int16 *)(a1 + 2) + *(unsigned __int8 *)(a1 + 4) * v10;
      else
        *v7 = (*(int (__fastcall **)(int, int))(a2 + 196))(a2, v8 << 31);
      ++v8;
      ++v7;
    }
    while ( v8 != 256 );
    return 0;
  }
  if ( (*(int (__fastcall **)(int))(a2 + 24))(a2) != 4 )
    return 0;
  v5 = a1 + 4;
  v6 = a1 + 1028;
  do
  {
    *(_DWORD *)(v5 + 4) = (*(int (__fastcall **)(int))(a2 + 196))(a2);
    v5 += 4;
  }
  while ( v5 != v6 );
  return 0;
}
