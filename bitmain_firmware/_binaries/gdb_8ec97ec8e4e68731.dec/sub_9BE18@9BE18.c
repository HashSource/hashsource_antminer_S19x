void __fastcall sub_9BE18(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v10; // r4
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  _DWORD *v13; // r5
  char *v14; // r11
  char *v15; // r0
  _DWORD *v16; // r4
  void *v17; // r0

  v10 = 4 * a2;
  v11 = sub_930CC(16 * (*(_DWORD *)(*(_DWORD *)a1 + 8) - a4 + 9));
  v12 = *(_DWORD **)a1;
  v13 = v11;
  v14 = (char *)(*(_DWORD *)a1 + 16);
  v11[2] = *(_DWORD *)(*(_DWORD *)a1 + 8) + 7 - a4;
  *v11 = *v12;
  v11[1] = v12[1];
  v15 = (char *)memcpy(v11 + 4, v14, 16 * a2) + v10 * 4 + 112;
  v16 = &v13[v10];
  memcpy(v15, &v14[16 * a4 + 16 * a2], 16 * (v12[2] - a2 - a4));
  v16[20] = a6;
  v16[24] = a5;
  *((_QWORD *)v16 + 4) = a3;
  v16[12] = 46;
  v16[4] = 46;
  v16[28] = 40;
  v16[16] = 40;
  v17 = *(void **)a1;
  *(_DWORD *)a1 = v13;
  if ( v17 )
    free(v17);
}
