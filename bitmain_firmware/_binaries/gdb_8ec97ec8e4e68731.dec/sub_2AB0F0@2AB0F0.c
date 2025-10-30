int __fastcall sub_2AB0F0(_DWORD *a1, const char *a2, int a3, int a4)
{
  char *v6; // r0
  char *v7; // r4
  int result; // r0
  int v10; // r0
  int v11; // r7
  size_t v12; // r0
  int v13; // r3
  size_t v14; // r0
  int v15; // r3
  bool v16; // zf
  size_t v17; // r7
  void *v18; // r0
  void *v19; // r8

  if ( a3 )
  {
    v6 = sub_2AAC2C(a1, a2, 1, a4);
    v7 = v6;
    if ( v6 )
    {
      result = *((_DWORD *)v6 + 3);
      if ( result != -1 )
        return result;
      goto LABEL_10;
    }
    return -1;
  }
  v10 = sub_2AAEC8((int)a1, 20);
  v7 = (char *)v10;
  if ( !v10 )
    return -1;
  if ( a4 )
  {
    v17 = strlen(a2) + 1;
    v18 = (void *)sub_2AAEC8((int)a1, v17);
    v19 = v18;
    if ( !v18 )
      return -1;
    memcpy(v18, a2, v17);
    *((_DWORD *)v7 + 1) = v19;
  }
  else
  {
    *(_DWORD *)(v10 + 4) = a2;
  }
  *(_QWORD *)(v7 + 12) = 0xFFFFFFFFLL;
LABEL_10:
  v11 = a1[7];
  *((_DWORD *)v7 + 3) = v11;
  v12 = strlen(a2);
  v13 = a1[10];
  v14 = v11 + v12;
  a1[7] = v14 + 1;
  v16 = v13 == 0;
  v15 = a1[8];
  if ( !v16 )
  {
    *((_DWORD *)v7 + 3) = v11 + 2;
    a1[7] = v14 + 3;
  }
  v16 = v15 == 0;
  if ( v15 )
    v15 = a1[9];
  result = *((_DWORD *)v7 + 3);
  if ( v16 )
    a1[8] = v7;
  else
    *(_DWORD *)(v15 + 16) = v7;
  a1[9] = v7;
  return result;
}
