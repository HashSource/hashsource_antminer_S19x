int __fastcall sub_2EE0B4(int a1, int a2, int a3, int a4)
{
  int v8; // r4
  int v9; // r0
  int *v10; // r2
  int *v11; // r0
  int v12; // r4
  int v13; // t1
  _DWORD *v14; // r3

  v8 = *(_DWORD *)(a1 + 160);
  v9 = sub_347418(
         *(_DWORD *)(v8 + 96),
         *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392) + 5));
  v10 = *(int **)(v8 + 536);
  if ( (*(_BYTE *)(v8 + 2341) & 0x40) == 0 )
    v9 -= *(_DWORD *)(v8 + 104);
  v11 = &v10[v9];
  if ( v10 == v11 )
  {
LABEL_15:
    sub_2A6A5C("%B: %A+%#Lx: No symbol found for INHERIT", a1, a2, a4);
    ((void (__fastcall *)(int))loc_2A6C48)(5);
    return 0;
  }
  while ( 1 )
  {
    v13 = *v10++;
    v12 = v13;
    if ( v13 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(v12 + 12) - 3 <= 1
        && *(_DWORD *)(v12 + 20) == a2
        && *(_DWORD *)(v12 + 24) == a4 )
      {
        break;
      }
    }
    if ( v11 == v10 )
      goto LABEL_15;
  }
  v14 = *(_DWORD **)(v12 + 68);
  if ( !v14 )
  {
    v14 = sub_2AD09C(a1, 0xCu);
    *(_DWORD *)(v12 + 68) = v14;
    if ( !v14 )
      return 0;
  }
  if ( a3 )
    v14[2] = a3;
  else
    v14[2] = -1;
  return 1;
}
