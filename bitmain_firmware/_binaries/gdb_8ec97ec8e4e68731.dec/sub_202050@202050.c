int __fastcall sub_202050(int a1, int (__fastcall *a2)(int, int), int a3)
{
  int v6; // r4
  signed int v8; // r0
  int *v9; // r5
  void *v10; // r9
  int v11; // r10
  int v12; // r6
  int v13; // t1
  int v14; // r4

  v6 = sub_201F44(a1, a2, a3);
  if ( v6 )
    return v6;
  v8 = (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 420))(a1);
  if ( v8 <= 0 )
    return v6;
  v9 = (int *)sub_93028(v8);
  v10 = sub_9253C((int)sub_1FFD3C, (int)v9);
  v11 = (*(int (__fastcall **)(int, int *))(*(_DWORD *)(a1 + 4) + 424))(a1, v9);
  if ( v11 )
  {
    while ( 1 )
    {
      v13 = *v9++;
      v12 = v13;
      ++v6;
      if ( a2(v13, a3) )
        break;
      if ( v11 == v6 )
        goto LABEL_10;
    }
    v14 = *(_DWORD *)(*(_DWORD *)(v12 + 16) + 28) + *(_DWORD *)(v12 + 8);
  }
  else
  {
LABEL_10:
    v14 = 0;
  }
  sub_92620(v10);
  return v14;
}
