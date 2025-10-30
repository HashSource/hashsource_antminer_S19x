int __fastcall sub_1B6DCC(int a1)
{
  int v2; // r0
  int v3; // r1
  int v4; // r3
  size_t v5; // r5
  char v6; // r2
  char *v7; // r6
  char *v8; // r3
  int v9; // r0
  bool v10; // zf
  int v11; // r3
  int v12; // r0

  v2 = sub_16304C(*(_DWORD *)(a1 + 36));
  v3 = *(_DWORD *)(a1 + 64);
  v4 = *(_DWORD *)(a1 + 60);
  v5 = 12 * v2;
  v6 = v3 - v4;
  if ( 12 * v2 > (unsigned int)(v3 - v4) )
  {
    obstack_newchunk((struct obstack *)(a1 + 48), 12 * v2);
    v4 = *(_DWORD *)(a1 + 60);
    v3 = *(_DWORD *)(a1 + 64);
  }
  v7 = *(char **)(a1 + 56);
  v8 = (char *)(v4 + v5);
  v9 = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 60) = v8;
  v10 = v8 == v7;
  if ( v8 == v7 )
    v6 = *(_BYTE *)(a1 + 88);
  v11 = (unsigned int)&v8[v9] & ~v9;
  *(_DWORD *)(a1 + 60) = v11;
  if ( v10 )
    *(_BYTE *)(a1 + 88) = v6 | 2;
  if ( v11 - *(_DWORD *)(a1 + 52) > (unsigned int)(v3 - *(_DWORD *)(a1 + 52)) )
  {
    v11 = v3;
    *(_DWORD *)(a1 + 60) = v3;
  }
  *(_DWORD *)(a1 + 56) = v11;
  memset(v7, 0, v5);
  v12 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 172) = &v7[v5];
  *(_DWORD *)(a1 + 168) = v7;
  sub_2ADCFC(v12, sub_1B649C, a1);
  sub_1B6468(*(_DWORD *)(a1 + 36), (int)&off_470800, a1);
  sub_1B6468(*(_DWORD *)(a1 + 36), (int)&off_4708A8, a1);
  sub_1B6468(*(_DWORD *)(a1 + 36), (int)&off_470950, a1);
  return sub_1B6468(*(_DWORD *)(a1 + 36), (int)&off_4709F8, a1);
}
