int __fastcall sub_250E5C(int a1, int a2, char **a3)
{
  int v4; // r5
  int v5; // r0
  int v6; // r0
  int (__fastcall *v7)(int, int, int *); // r3
  unsigned int v8; // r10
  int v9; // r4
  int v10; // r9
  int v11; // r3
  unsigned int v12; // r0
  int v13; // r11
  int v14; // lr
  __int64 v15; // r2
  __int64 v16; // r6
  int v17; // r1
  char *v18; // r3
  int v20; // [sp+10h] [bp-24h]
  int v22; // [sp+1Ch] [bp-18h] BYREF
  unsigned __int8 v23[20]; // [sp+20h] [bp-14h] BYREF

  v4 = **(_DWORD **)(a1 + 16);
  v22 = sub_15DDFC(a2);
  v5 = sub_15ECB4(a2);
  v6 = ((int (__fastcall *)(int))loc_165BB8)(v5);
  v7 = *(int (__fastcall **)(int, int, int *))(v4 + 780);
  v8 = v6;
  if ( v7 && !v7(v4, a2, &v22) || *(_QWORD *)(v4 + 8) == -1 )
    return 0;
  v9 = 0;
  v20 = 0;
  v10 = v22;
  v11 = *(_DWORD *)(v4 + 4);
  do
  {
    while ( sub_15DB20(a2, v10 + v11 * v9, (int)v23, v11) )
    {
      v12 = sub_15C250(v23, *(_DWORD *)(v4 + 4), v8);
      v13 = *(_DWORD *)(v4 + 16 * (v9 + 1));
      v14 = v4 + 16 * (v9 + 1);
      v15 = *(_QWORD *)(v4 + 16 * v9++ + 8);
      LODWORD(v16) = v12 & v13;
      HIDWORD(v16) = v17 & *(_DWORD *)(v14 + 4);
      if ( v15 != v16 )
        break;
      if ( *(_QWORD *)(v14 + 8) == -1 )
        goto LABEL_11;
      v11 = *(_DWORD *)(v4 + 4);
    }
    v9 = 0;
    ++v20;
    if ( *(_QWORD *)(v4 + 16 * v20 + 8) == -1 )
      return 0;
    v11 = *(_DWORD *)(v4 + 4);
    v10 = v22 - v20 * v11;
  }
  while ( *(_QWORD *)(v4 + 8) != -1 );
LABEL_11:
  if ( !v10 )
    return 0;
  v18 = sub_15D27C((char *)0xC);
  *(_DWORD *)v18 = v10;
  *((_DWORD *)v18 + 1) = v4;
  *a3 = v18;
  return 1;
}
