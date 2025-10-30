int __fastcall sub_A7C8C(int a1, int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  const char *v5; // r7
  int v10; // r0
  int v11; // r11
  int v12; // r4
  unsigned int v13; // r2
  char *v14; // r8
  size_t v15; // r5
  int v16; // r0
  int v17; // r0
  int v19; // r3

  v5 = (const char *)(a1 + a2);
  if ( !*(_BYTE *)(a1 + a2) )
    return 0;
  v10 = sub_338BD4(v5, &dword_3C439C);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 - (_DWORD)v5;
    v13 = v10 - (_DWORD)v5 + 1;
    v14 = (char *)dword_477DDC;
    if ( v13 > dword_477DD8 )
    {
      v19 = 2 * dword_477DD8;
      if ( 2 * dword_477DD8 < v13 )
        v19 = v10 - (_DWORD)v5 + 1;
      dword_477DD8 = v19;
      v14 = (char *)sub_9D470((void *)dword_477DDC, &dword_477DD8, 1);
      dword_477DDC = (int)v14;
    }
    v15 = v11 - a1;
    strncpy(v14, v5, v11 - (_DWORD)v5);
    v14[v12] = 0;
  }
  else
  {
    v14 = (char *)v5;
    v15 = a2 + strlen(v5);
  }
  v16 = sub_26BC70(a3);
  v17 = sub_A7A24(v14, a3, 0, v16);
  if ( !v17 )
    return 0;
  *a4 = sub_26EB1C(v17);
  *a5 = v15;
  return 1;
}
