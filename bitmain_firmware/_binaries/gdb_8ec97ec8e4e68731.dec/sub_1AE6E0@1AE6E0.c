int __fastcall sub_1AE6E0(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r1
  int v8; // r3
  char v9; // r2
  _DWORD *v10; // r5
  _DWORD *v11; // r3
  int v12; // r0
  bool v13; // zf
  int v14; // r3
  int v16; // r0
  const char *v17; // r0
  _BYTE v18[16]; // [sp+0h] [bp-10h] BYREF

  v6 = *(_DWORD *)(a1 + 36);
  sub_1B2570(v18, a1);
  v7 = *(_DWORD *)(a1 + 64);
  v8 = *(_DWORD *)(a1 + 60);
  v9 = v7 - v8;
  if ( (unsigned int)(v7 - v8) <= 0x9B )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), 156);
    v8 = *(_DWORD *)(a1 + 60);
    v7 = *(_DWORD *)(a1 + 64);
  }
  v10 = *(_DWORD **)(a1 + 56);
  v11 = (_DWORD *)(v8 + 156);
  v12 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v11;
  v13 = v11 == v10;
  if ( v11 == v10 )
    v9 = *(_BYTE *)(a1 + 88);
  v14 = ((unsigned int)v11 + v12) & ~v12;
  *(_DWORD *)(a1 + 60) = v14;
  if ( v13 )
    *(_BYTE *)(a1 + 88) = v9 | 2;
  if ( v14 - *(_DWORD *)(a1 + 52) > (unsigned int)(v7 - *(_DWORD *)(a1 + 52)) )
  {
    v14 = v7;
    *(_DWORD *)(a1 + 60) = v7;
  }
  *(_DWORD *)(a1 + 56) = v14;
  if ( !(*(int (__fastcall **)(int, int, _DWORD *))(a2 + 120))(v6, a3, v10) )
  {
    v16 = sub_2A6910(0);
    v17 = (const char *)sub_2A6920(v16);
    sub_946E0("Error reading ECOFF debugging information: %s", v17);
  }
  sub_1AE5B8((int)v18, a1, a2, v10);
  sub_1B2CF4(v18);
  return sub_1B2584(v18);
}
