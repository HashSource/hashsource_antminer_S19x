int __fastcall sub_30290(int a1, int *a2, _DWORD *a3)
{
  int v5; // r0
  int v6; // r5
  char *v7; // r0
  void *v8; // r7
  int v10; // r3
  char *v11; // r6
  int v12; // r10
  char *v13; // r4
  int v14; // r11
  int v15; // r0
  int v17; // [sp+Ch] [bp-10h] BYREF
  int v18; // [sp+10h] [bp-Ch] BYREF
  int v19; // [sp+14h] [bp-8h] BYREF

  v5 = sub_16F654();
  v6 = ((int (__fastcall *)(int))loc_165BB8)(v5);
  v7 = (char *)sub_2FFC4(2, &v17, &v18, &v19);
  v8 = v7;
  if ( !v7 )
    return 0;
  v10 = v18;
  v11 = &v7[v17];
  if ( v18 == 32 )
    v12 = 8;
  else
    v12 = 16;
  if ( v7 >= v11 )
  {
LABEL_14:
    free(v8);
    return 0;
  }
  else
  {
    v13 = v7;
    while ( 1 )
    {
      if ( v10 == 32 )
      {
        v14 = sub_15C250(v13, 4, v6);
        v15 = sub_15C250(v13 + 4, 4, v6);
        if ( !v14 )
          goto LABEL_14;
      }
      else
      {
        v14 = sub_15C250(v13, 8, v6);
        v15 = sub_15C250(v13 + 8, 8, v6);
        if ( !v14 )
          goto LABEL_14;
      }
      if ( v14 == a1 )
        break;
      v13 += v12;
      if ( v11 <= v13 )
        goto LABEL_14;
      v10 = v18;
    }
    *a2 = v15;
    if ( a3 )
      *a3 = &v13[v19] - (_BYTE *)v8;
    free(v8);
    return 1;
  }
}
