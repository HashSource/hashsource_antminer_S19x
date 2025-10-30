int __fastcall sub_211388(__int64 a1, int a2)
{
  int *v3; // r5
  __int64 v4; // r2
  int v5; // r12
  __int64 v6; // r6
  int v7; // r2
  int v8; // r3
  int *v9; // r0
  const char *v10; // r5
  int v11; // r6
  char *v12; // r7
  int v13; // r0
  const char *v14; // r0

  if ( a2 )
  {
    v3 = *(int **)a2;
    v4 = *(_QWORD *)(a2 + 8);
    if ( a1 || v4 )
    {
      v5 = *(_DWORD *)(a2 + 24);
      v6 = v4 + a1;
      v7 = *(_DWORD *)(a2 + 28);
      v8 = *v3;
      v3[1] += a1;
      *(_DWORD *)(a2 + 24) = v5 + a1;
      *(_DWORD *)(a2 + 28) = v7 + a1;
      *v3 = v8 + 1;
      *(_QWORD *)(a2 + 8) = v6;
      LODWORD(a1) = sub_1580C0();
      if ( (_DWORD)a1 || off_48969C && (LODWORD(a1) = off_48969C(*(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 8)), (_DWORD)a1) )
        sub_946E0("Canceled the download");
      if ( off_4896A0 )
        LODWORD(a1) = ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, int, int))off_4896A0)(
                        *(_DWORD *)(a2 + 4),
                        *(_DWORD *)(a2 + 8),
                        *(_DWORD *)(a2 + 16),
                        v3[1],
                        v3[2]);
    }
    else
    {
      v9 = (int *)sub_242FDC(0);
      v10 = *(const char **)(a2 + 4);
      v11 = *v9;
      v12 = sub_98B08(*(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20));
      v13 = sub_16F654((int)v12);
      v14 = (const char *)sub_25AC8C(v13, *(_DWORD *)(a2 + 24));
      LODWORD(a1) = sub_25738C(v11, "Loading section %s, size %s lma %s\n", v10, v12, v14);
    }
  }
  return a1;
}
