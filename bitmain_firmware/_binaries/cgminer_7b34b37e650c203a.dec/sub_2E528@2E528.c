void __fastcall sub_2E528(int a1, _DWORD *a2)
{
  int v2; // r12
  int v3; // r2
  int v4; // lr
  _DWORD *v5; // r12
  int v6; // r3
  int v7; // r4
  int v8; // r3
  _DWORD *v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r2
  int v13; // r3

  v2 = *(_DWORD *)(a1 + 352);
  --*(_DWORD *)(a1 + 360);
  v3 = a2[87];
  if ( !v3 )
  {
    v7 = a2[88];
    v4 = *(_DWORD *)(v2 + 344);
    if ( !v7 )
    {
      free(*(void **)v4);
      free(*(void **)(*(_DWORD *)(a1 + 352) + 344));
      *(_DWORD *)(a1 + 352) = 0;
      return;
    }
    v6 = *(_DWORD *)(v4 + 20);
    v5 = a2 + 86;
    if ( a2 != (_DWORD *)(*(_DWORD *)(v4 + 16) - v6) )
      goto LABEL_17;
    goto LABEL_13;
  }
  v4 = *(_DWORD *)(v2 + 344);
  v5 = a2 + 86;
  v6 = *(_DWORD *)(v4 + 20);
  if ( a2 == (_DWORD *)(*(_DWORD *)(v4 + 16) - v6) )
  {
LABEL_13:
    *(_DWORD *)(v4 + 16) = v3 + v6;
    v3 = a2[87];
    if ( v3 )
    {
      v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 20);
      goto LABEL_3;
    }
    v7 = a2[88];
LABEL_17:
    *(_DWORD *)(a1 + 352) = v7;
    goto LABEL_4;
  }
LABEL_3:
  *(_DWORD *)(v3 + v6 + 8) = a2[88];
  v7 = *(_DWORD *)(a1 + 352);
LABEL_4:
  v8 = a2[88];
  v9 = *(_DWORD **)(v7 + 344);
  if ( v8 )
  {
    *(_DWORD *)(v8 + v9[5] + 4) = a2[87];
    v9 = *(_DWORD **)(*(_DWORD *)(a1 + 352) + 344);
  }
  v10 = 12 * ((v9[1] - 1) & a2[93]);
  --*(_DWORD *)(*v9 + v10 + 4);
  v11 = **(_DWORD **)(*(_DWORD *)(a1 + 352) + 344);
  if ( *(_DWORD **)(v11 + v10) == v5 )
    *(_DWORD *)(v11 + v10) = a2[90];
  v12 = a2[89];
  v13 = a2[90];
  if ( v12 )
  {
    *(_DWORD *)(v12 + 16) = v13;
    v13 = a2[90];
  }
  if ( v13 )
    *(_DWORD *)(v13 + 12) = a2[89];
  --*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 352) + 344) + 12);
}
