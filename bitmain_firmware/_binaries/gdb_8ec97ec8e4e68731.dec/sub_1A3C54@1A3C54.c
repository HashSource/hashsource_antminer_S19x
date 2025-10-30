void __fastcall sub_1A3C54(int *a1, int a2, const char *a3)
{
  _DWORD *v6; // r0
  int v7; // r4
  int *v8; // r3
  char *v9; // r8
  const char *v10; // r0
  char *v11; // r9

  v6 = sub_1A2F40(a3, (int)a1, a2);
  if ( v6 )
  {
    v7 = *v6;
    v8 = *(int **)(*v6 + 8);
    if ( v8 == a1 && *(_DWORD *)(v7 + 12) == a2 )
    {
      sub_326E94(*(_DWORD *)(*v8 + 20), *v6);
      return;
    }
    if ( !*(_DWORD *)(v7 + 16) )
      goto LABEL_9;
    v9 = (char *)sub_1A37A0(a1);
    v10 = (const char *)sub_1A37A0(*(int **)(v7 + 16));
    v11 = (char *)v10;
    if ( dword_47AC88 > 0 )
    {
      sub_F43B4(
        &off_46D334,
        "macro '%s' is #undefined twice, at %s:%d and %s:%d",
        a3,
        v9,
        a2,
        v10,
        *(_DWORD *)(v7 + 20));
      if ( !v11 )
      {
LABEL_7:
        if ( v9 )
          free(v9);
LABEL_9:
        *(_DWORD *)(v7 + 16) = a1;
        *(_DWORD *)(v7 + 20) = a2;
        return;
      }
    }
    else if ( !v10 )
    {
      goto LABEL_7;
    }
    free(v11);
    goto LABEL_7;
  }
}
