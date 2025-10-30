int __fastcall sub_2DD9CC(const char *a1, int a2, int a3, _DWORD *a4, int *a5, int a6, int a7)
{
  int v9; // r9
  int v13; // r5
  char *v14; // r0
  int v15; // r0
  int v16; // r2
  int v18; // r1
  int v19; // r0
  int v20; // r3
  int v21; // r2
  int v22; // r12
  int v23; // [sp+Ch] [bp-8h] BYREF

  v9 = *(_DWORD *)(a2 + 160);
  if ( a7 )
  {
    v13 = 0;
    while ( 1 )
    {
      if ( !(*(unsigned __int8 *)(a6 + 12) >> 4) )
      {
        v14 = sub_2CD844(a2, *(_DWORD *)(v9 + 100), *(_DWORD *)(a6 + 8));
        if ( v14 )
        {
          if ( !strcmp(v14, a1) )
            break;
        }
      }
      ++v13;
      a6 += 20;
      if ( v13 == a7 )
        goto LABEL_7;
    }
    v23 = *(_DWORD *)(*a4 + 4 * v13);
    v19 = sub_2DB2B8(a2, (_DWORD *)a6, (int)&v23, 0);
    v20 = v23;
    v21 = v19;
    v22 = *(_DWORD *)(v23 + 60);
    *a5 = v21;
    *a5 = *(_DWORD *)(v22 + 28) + *(_DWORD *)(v20 + 56) + v21;
    return 1;
  }
  else
  {
LABEL_7:
    v15 = sub_2FC920(*(_DWORD *)(*(_DWORD *)a3 + 28), a1, 0);
    v16 = v15;
    if ( v15 && (unsigned int)*(unsigned __int8 *)(v15 + 12) - 3 <= 1 )
    {
      v18 = *(_DWORD *)(v15 + 20);
      *a5 = *(_DWORD *)(v16 + 24) + *(_DWORD *)(v18 + 56) + *(_DWORD *)(*(_DWORD *)(v18 + 60) + 28);
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
