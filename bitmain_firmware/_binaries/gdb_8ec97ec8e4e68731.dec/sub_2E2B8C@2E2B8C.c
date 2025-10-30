int __fastcall sub_2E2B8C(int a1, int a2, int a3, unsigned int a4)
{
  int v7; // r8
  int v8; // r11
  int v9; // r5
  int v10; // r3
  int v12; // r1
  int v13; // r8
  void (__fastcall *v14)(int, unsigned int, int, int); // r10
  int v15; // r2
  int v16; // r9
  unsigned int v17; // r9
  int v18; // r3
  int v19; // r5
  int v20; // [sp+0h] [bp-Ch]
  int v21; // [sp+4h] [bp-8h]

  v7 = *(_DWORD *)(*(_DWORD *)(a2 + 60) + 140);
  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  v9 = *(_DWORD *)(v7 + 60);
  if ( v9 && (v10 = *(_DWORD *)(v9 + 40), v10 == *(_DWORD *)(a3 + 40)) )
  {
    v12 = *(_DWORD *)(v8 + 392);
    v13 = v7 + 60;
    v14 = *(void (__fastcall **)(int, unsigned int, int, int))(v12 + 60);
  }
  else
  {
    v9 = *(_DWORD *)(v7 + 76);
    if ( !v9 || (v10 = *(_DWORD *)(v9 + 40), v10 != *(_DWORD *)(a3 + 40)) )
    {
      sub_2A6A5C("%B: relocation size mismatch in %B section %A", a1, *(_DWORD *)(a2 + 148), a2);
      ((void (__fastcall *)(int))loc_2A6C48)(3);
      return 0;
    }
    v12 = *(_DWORD *)(v8 + 392);
    v13 = v7 + 76;
    v14 = *(void (__fastcall **)(int, unsigned int, int, int))(v12 + 68);
  }
  v15 = *(_DWORD *)(v13 + 4);
  if ( v10 )
  {
    v16 = *(unsigned __int8 *)(v12 + 9);
    v21 = *(_DWORD *)(v13 + 4);
    v20 = v10;
    v17 = a4 + sub_347418(*(_DWORD *)(a3 + 24), v10) * 12 * v16;
    v18 = v20;
    v15 = v21;
    if ( a4 >= v17 )
      goto LABEL_12;
    v19 = *(_DWORD *)(v9 + 48) + v20 * v21;
    do
    {
      v14(a1, a4, v19, v18);
      v18 = *(_DWORD *)(a3 + 40);
      v19 += v18;
      a4 += 12 * *(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 9);
    }
    while ( v17 > a4 );
    v15 = *(_DWORD *)(v13 + 4);
    if ( v18 )
LABEL_12:
      v15 += sub_347418(*(_DWORD *)(a3 + 24), v18);
  }
  *(_DWORD *)(v13 + 4) = v15;
  return 1;
}
