int __fastcall sub_2EEF74(int a1, _DWORD *a2, int a3)
{
  int v4; // r4
  int v6; // r7
  int v7; // r2
  int v8; // r0
  int v9; // r3
  int v10; // r4

  v4 = a2[19];
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  v7 = a2[27];
  a2[19] = v4 + 1;
  v8 = *(_DWORD *)(v6 + 392);
  v9 = *(unsigned __int8 *)(v8 + 3);
  v10 = v7 + v9 * v4;
  if ( v10 + v9 > (unsigned int)(v7 + a2[9]) )
  {
    sub_2A6BBC("elflink.c", 14316);
    v8 = *(_DWORD *)(v6 + 392);
  }
  return (*(int (__fastcall **)(int, int, int))(v8 + 60))(a1, a3, v10);
}
